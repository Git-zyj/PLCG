/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120006
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120006 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120006
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
    var_14 = ((/* implicit */unsigned short) ((((unsigned int) var_5)) - (((/* implicit */unsigned int) (-(var_5))))));
    var_15 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)65535)) ^ (((/* implicit */int) var_13))))) ? (((long long int) var_13)) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)12066)) / (-1))))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (short)-5889)) + (((/* implicit */int) (unsigned short)1))))))))) : (((((/* implicit */_Bool) min((var_6), (((/* implicit */long long int) var_8))))) ? (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)12066))))) : (((((/* implicit */_Bool) var_4)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)12066)))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1]))) : (arr_2 [i_0] [i_0])))) ? (((/* implicit */long long int) ((/* implicit */int) max((((((/* implicit */long long int) arr_4 [i_0] [i_1])) >= (var_9))), (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) > (5051448524351711945LL))))))) : ((+(((((/* implicit */_Bool) arr_2 [15ULL] [i_1])) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) (short)-16006)))))))));
                var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) -1685025425)) ? (((/* implicit */int) ((signed char) (unsigned short)65535))) : (((/* implicit */int) max(((unsigned short)12066), (((/* implicit */unsigned short) (short)-10704)))))));
            }
        } 
    } 
}
