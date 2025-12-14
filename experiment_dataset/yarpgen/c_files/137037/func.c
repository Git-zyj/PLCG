/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137037
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137037 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137037
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) arr_6 [i_0] [i_1])) || (((/* implicit */_Bool) var_8)))))), (((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1] [i_1] [i_0]))) ^ (var_8)))));
                    var_13 = ((/* implicit */unsigned int) ((short) min((((/* implicit */unsigned short) (signed char)49)), ((unsigned short)1))));
                    var_14 |= ((/* implicit */unsigned short) ((int) ((int) max((((/* implicit */unsigned long long int) arr_6 [i_0] [i_2])), (arr_7 [(short)16] [i_1])))));
                    arr_9 [i_0] [14LL] [14LL] |= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_7))))) > (((((/* implicit */_Bool) -132183664)) ? (1099511627712ULL) : (((/* implicit */unsigned long long int) 33554400))))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_2) ? (((/* implicit */unsigned long long int) var_9)) : (var_0)))) ? (((/* implicit */unsigned int) var_5)) : (((((/* implicit */unsigned int) ((/* implicit */int) (short)32767))) ^ (1449057079U)))))) ? (((/* implicit */long long int) ((/* implicit */int) max(((unsigned short)8131), (((unsigned short) var_0)))))) : (var_8)));
    var_16 = ((/* implicit */int) var_1);
}
