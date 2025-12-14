/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135566
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135566 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135566
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
    var_18 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_11))) / (((((/* implicit */_Bool) (+(((/* implicit */int) var_13))))) ? (((((/* implicit */long long int) ((/* implicit */int) var_10))) + ((-9223372036854775807LL - 1LL)))) : (((var_16) / (var_8)))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_2])) ? (((((/* implicit */_Bool) var_4)) ? (arr_5 [i_2]) : (((/* implicit */int) var_11)))) : (((/* implicit */int) var_4))))) ? (((/* implicit */long long int) (+(arr_3 [i_0] [i_1])))) : (((arr_0 [i_1]) | (arr_0 [i_0])))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 21; i_4 += 2) 
                        {
                            {
                                arr_12 [i_2] [i_1] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_3] [i_4]))) : (var_12)))));
                                var_20 = ((/* implicit */int) max((-1LL), (((/* implicit */long long int) max((var_9), (arr_6 [i_3] [i_2]))))));
                            }
                        } 
                    } 
                    var_21 ^= ((7413316427422844990ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)51930))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) var_15)) ? ((~(((/* implicit */int) var_2)))) : (((/* implicit */int) ((_Bool) var_4))))) : (((/* implicit */int) var_3))));
}
