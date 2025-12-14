/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18164
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18164 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18164
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 3; i_0 < 19; i_0 += 3) 
    {
        for (unsigned int i_1 = 3; i_1 < 17; i_1 += 2) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned int i_2 = 1; i_2 < 17; i_2 += 2) 
                {
                    var_12 &= min((arr_4 [i_2] [10U] [4ULL]), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 2187192991U)) ? (2107774304U) : (4294967292U)))) ? (((/* implicit */unsigned long long int) var_6)) : (max((var_9), (((/* implicit */unsigned long long int) 2377136360U)))))));
                    arr_6 [i_0 + 2] [i_0 + 2] [i_2] [i_1] = max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [17ULL])) || (((/* implicit */_Bool) var_5))))), (min((arr_4 [i_1] [i_1 - 2] [i_1 + 1]), (arr_4 [i_1] [i_1 - 3] [i_1 - 2]))));
                    var_13 = ((/* implicit */unsigned long long int) arr_5 [i_0] [i_2 + 2] [i_2] [i_2]);
                }
                /* vectorizable */
                for (unsigned int i_3 = 0; i_3 < 21; i_3 += 3) 
                {
                    var_14 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((2187193017U) % (arr_8 [i_0 + 1] [8U] [i_0])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_0] [10ULL] [i_0]))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0] [0ULL] [i_3])) || (((/* implicit */_Bool) var_6)))))));
                    var_15 = ((/* implicit */unsigned int) arr_4 [i_3] [i_1] [i_3]);
                    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1301015414U)) || (((/* implicit */_Bool) 2107774305U))));
                    var_17 = ((((/* implicit */_Bool) ((unsigned long long int) arr_8 [i_0] [i_3] [i_3]))) ? (((arr_1 [i_0]) / (4233102496362221883ULL))) : (arr_7 [i_0 - 1] [i_1] [i_3]));
                    var_18 = (+((~(arr_1 [i_1]))));
                }
                /* vectorizable */
                for (unsigned int i_4 = 0; i_4 < 21; i_4 += 2) 
                {
                    var_19 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_1 - 3] [i_4] [i_1 + 1])) ? ((-(arr_10 [i_1] [i_1 - 1] [4U] [i_1 - 1]))) : (((/* implicit */unsigned long long int) arr_2 [i_0 - 3]))));
                    var_20 += ((((/* implicit */_Bool) 2107774310U)) ? ((~(arr_8 [i_0] [i_4] [2ULL]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((var_11) <= (((/* implicit */unsigned long long int) 4294967281U)))))));
                }
                /* LoopNest 2 */
                for (unsigned int i_5 = 0; i_5 < 21; i_5 += 1) 
                {
                    for (unsigned int i_6 = 3; i_6 < 20; i_6 += 2) 
                    {
                        {
                            var_21 = ((((/* implicit */unsigned long long int) max((arr_16 [i_6 - 2] [i_6 - 3] [i_6 - 1] [i_6 + 1]), (var_0)))) / (max((((/* implicit */unsigned long long int) 1393013894U)), (max((((/* implicit */unsigned long long int) 233070289U)), (1008806316530991104ULL))))));
                            var_22 = ((((/* implicit */_Bool) 10ULL)) ? (((unsigned long long int) 18446744073709551597ULL)) : (((/* implicit */unsigned long long int) 4294967295U)));
                            var_23 = ((((/* implicit */_Bool) ((unsigned long long int) arr_14 [i_1 + 1] [i_6 - 1] [i_0 - 1]))) ? (min((arr_1 [i_6 + 1]), (((/* implicit */unsigned long long int) var_1)))) : (arr_14 [i_1 - 2] [i_6 - 3] [i_0 + 2]));
                            arr_18 [i_6] [i_1] [i_1 + 4] [i_1] = max((42730408U), (3618325156U));
                            var_24 *= ((((/* implicit */_Bool) ((unsigned long long int) ((unsigned int) arr_4 [13ULL] [i_5] [6U])))) ? (var_0) : ((~(arr_13 [i_6]))));
                        }
                    } 
                } 
                var_25 = (~(((unsigned int) var_2)));
                var_26 *= ((((/* implicit */unsigned long long int) arr_16 [i_0] [i_0] [i_0] [i_0])) - (((((((/* implicit */_Bool) var_8)) ? (arr_11 [0U]) : (((/* implicit */unsigned long long int) var_5)))) ^ (max((arr_11 [i_0]), (((/* implicit */unsigned long long int) var_0)))))));
            }
        } 
    } 
    var_27 = var_4;
}
