/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186097
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186097 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186097
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
    for (long long int i_0 = 2; i_0 < 12; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 12; i_1 += 4) 
        {
            for (int i_2 = 2; i_2 < 11; i_2 += 4) 
            {
                {
                    var_11 *= ((/* implicit */int) (!(((/* implicit */_Bool) (~(arr_1 [i_0 - 1]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 11; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 13; i_4 += 2) 
                        {
                            {
                                var_12 = ((/* implicit */unsigned int) ((unsigned long long int) ((((((/* implicit */int) arr_4 [i_1] [i_4])) == (-743554179))) ? (((arr_0 [i_0]) / (((/* implicit */unsigned int) var_0)))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) var_5)) : (var_10))))));
                                var_13 = ((/* implicit */int) min((((/* implicit */long long int) ((((/* implicit */int) arr_11 [i_0])) ^ (((/* implicit */int) var_3))))), (var_1)));
                                var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) ((((/* implicit */_Bool) (-((~(-743554190)))))) ? (min((var_0), ((~(77141731))))) : (((((/* implicit */_Bool) (~(743554178)))) ? (min((var_0), (((/* implicit */int) arr_11 [i_2])))) : (var_7))))))));
                            }
                        } 
                    } 
                    var_15 *= ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) min((((_Bool) var_5)), (arr_9 [i_2] [i_2 + 1]))))) / (max((min((((/* implicit */long long int) arr_2 [4LL])), (var_6))), (((/* implicit */long long int) max((var_8), (var_0))))))));
                    arr_12 [i_0] [i_2] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0]))))) + (((/* implicit */int) arr_4 [i_2] [i_1]))));
                    var_16 *= ((/* implicit */unsigned short) ((var_5) - (((((/* implicit */_Bool) max((((/* implicit */int) (unsigned char)80)), (arr_6 [i_0] [i_1] [i_1] [i_2])))) ? (1157849088) : (max((((/* implicit */int) (unsigned char)84)), (var_7)))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned int) var_2);
    var_18 = var_9;
    var_19 *= ((/* implicit */int) ((var_0) < (((/* implicit */int) ((var_10) >= (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))));
}
