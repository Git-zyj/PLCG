/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128849
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128849 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128849
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_10 = ((unsigned short) max((((/* implicit */unsigned long long int) (-(7680U)))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (5110595684806648176ULL)))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_0] &= ((/* implicit */int) arr_4 [i_0]);
                var_11 = ((/* implicit */_Bool) max((max((((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0]))) : (arr_4 [i_0]))), (arr_4 [i_0]))), (((((/* implicit */_Bool) arr_5 [i_1])) ? (arr_4 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0])))))));
                var_12 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_1])))))));
                arr_7 [i_0] [18U] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 66584576)) ? (((/* implicit */int) (unsigned short)43377)) : (-66584591)));
            }
        } 
    } 
    var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)26629)) << (((((/* implicit */int) (short)10780)) - (10779)))))), (((((/* implicit */_Bool) 13336148388902903439ULL)) ? (11691935265909724146ULL) : (13336148388902903429ULL)))))) ? (((((/* implicit */_Bool) ((5110595684806648196ULL) >> (((-4879788309223885782LL) + (4879788309223885841LL)))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))))) : (max((((/* implicit */unsigned long long int) var_9)), (2709799227126265790ULL))))) : (((/* implicit */unsigned long long int) ((int) ((((/* implicit */int) var_7)) - (((/* implicit */int) var_6))))))));
}
