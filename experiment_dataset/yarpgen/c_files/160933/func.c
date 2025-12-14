/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160933
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160933 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160933
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
    /* LoopSeq 1 */
    for (int i_0 = 4; i_0 < 12; i_0 += 1) 
    {
        var_15 = ((/* implicit */short) (~((-(((/* implicit */int) arr_0 [i_0 - 2]))))));
        var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (((/* implicit */int) (signed char)74)) : (((/* implicit */int) arr_1 [i_0] [i_0])))))));
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            arr_4 [i_1] = ((/* implicit */unsigned int) ((((((/* implicit */int) ((signed char) arr_0 [i_1]))) + (2147483647))) << (((/* implicit */int) (!(((((/* implicit */_Bool) arr_1 [i_0] [9ULL])) && ((_Bool)1))))))));
            var_17 = ((/* implicit */unsigned short) arr_3 [i_0] [i_0]);
            var_18 = ((/* implicit */unsigned int) max((((/* implicit */long long int) var_5)), ((-(((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) 0U)) : (var_0)))))));
            var_19 *= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_3 [1LL] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)29522)))))) ? (((((/* implicit */long long int) ((/* implicit */int) (signed char)35))) - (var_0))) : ((+(-5180025024946126171LL))))) - (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)29))) : (5U))))));
        }
        arr_5 [i_0] [i_0] = arr_0 [i_0];
    }
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 3) 
    {
        for (unsigned short i_3 = 0; i_3 < 16; i_3 += 4) 
        {
            {
                var_20 *= ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_7 [i_2])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_7)))));
                arr_10 [i_2] [i_2] = (-(((((/* implicit */_Bool) ((signed char) (unsigned char)121))) ? (1U) : (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned char)37))))))));
            }
        } 
    } 
}
