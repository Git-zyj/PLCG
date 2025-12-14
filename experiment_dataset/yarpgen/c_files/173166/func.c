/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173166
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173166 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173166
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
    var_17 |= ((((/* implicit */unsigned long long int) ((var_12) ? (((/* implicit */int) ((((/* implicit */long long int) var_15)) >= (var_13)))) : (((/* implicit */int) ((_Bool) var_0)))))) <= (((unsigned long long int) min((var_11), (((/* implicit */unsigned int) var_12))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_18 |= ((/* implicit */long long int) ((((/* implicit */int) ((_Bool) arr_5 [i_0 + 1] [i_0 + 1] [i_0 + 1]))) % (((/* implicit */int) arr_5 [i_0 + 1] [i_0 + 1] [i_0]))));
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 24; i_2 += 1) 
                {
                    for (long long int i_3 = 2; i_3 < 21; i_3 += 3) 
                    {
                        {
                            arr_12 [i_0] [i_1] [i_2] [(_Bool)1] |= ((/* implicit */long long int) (((!(arr_9 [i_3 + 3] [i_3 + 2] [i_3 - 1] [i_3 - 1] [i_3]))) ? (((/* implicit */int) arr_1 [i_0])) : (min((((/* implicit */int) arr_4 [i_0 + 1])), (((((/* implicit */_Bool) 17592183947264LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_1))))))));
                            arr_13 [2] [i_1] [i_1] [i_1] [i_1] [4U] &= ((/* implicit */unsigned char) arr_0 [i_0]);
                            var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) ((((/* implicit */int) ((549755813887LL) == (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0 + 1] [i_1] [i_2] [i_0 + 1] [i_3 + 1])))))) << (((((((var_9) >> (((var_11) - (2802069984U))))) % (arr_6 [i_0] [i_3 - 1] [i_0 + 1] [i_3]))) - (21866689271LL))))))));
                            arr_14 [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_10 [i_1] [i_1]))))) ? ((+(((/* implicit */int) arr_10 [i_1] [i_1])))) : (((/* implicit */int) arr_10 [i_1] [i_1]))));
                            arr_15 [i_0 + 1] [i_1] [i_2] [i_1] = ((/* implicit */unsigned char) ((unsigned int) ((((((/* implicit */_Bool) -17592183947265LL)) ? (arr_0 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))));
                        }
                    } 
                } 
                var_20 = ((/* implicit */short) arr_10 [i_1] [i_1]);
                arr_16 [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */int) var_10)) <= (((/* implicit */int) arr_11 [i_1] [i_0] [i_0] [i_1]))))), (((((/* implicit */_Bool) arr_6 [i_0] [i_0 + 1] [i_0] [i_0 + 1])) ? (var_8) : (((/* implicit */long long int) var_11))))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_1] [i_1] [i_1] [i_1]))) : (min((((/* implicit */long long int) (+(((/* implicit */int) var_10))))), (((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : (arr_6 [i_0] [i_0 + 1] [i_0 + 1] [i_0])))))));
                arr_17 [i_1] [i_1] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (-(((/* implicit */int) arr_3 [i_0] [i_1]))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_3 [i_0 + 1] [i_0 + 1])))) * (((arr_10 [i_1] [i_0]) ? (((/* implicit */int) arr_10 [i_1] [i_1])) : (((/* implicit */int) arr_10 [i_1] [i_1]))))));
            }
        } 
    } 
}
