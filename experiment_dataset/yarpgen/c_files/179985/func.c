/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179985
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179985 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179985
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
    var_16 = ((/* implicit */long long int) ((unsigned long long int) var_9));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                var_17 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) (short)17518))) : (arr_3 [i_1])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [10ULL])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (short)-17518))))) : (arr_3 [i_1])))) ? (((arr_1 [i_0]) & (arr_1 [i_0]))) : ((~(arr_0 [i_1] [i_0]))));
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        for (short i_4 = 2; i_4 < 18; i_4 += 2) 
                        {
                            {
                                var_18 ^= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) arr_4 [i_4 + 2] [i_2])) ? (arr_0 [i_4 - 2] [i_3]) : (arr_0 [i_2] [i_3])))))));
                                var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_11 [i_4 - 2] [i_1] [i_2] [i_0] [i_3])), (arr_8 [i_4 - 2] [(unsigned char)8] [(_Bool)1] [i_4 - 2] [i_3])))))))));
                                var_20 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (short)-17519)) ? (var_3) : (((/* implicit */int) arr_5 [i_3] [(short)4])))), (((/* implicit */int) (short)0))))) ? (((/* implicit */int) arr_5 [i_4] [i_4])) : (min((((/* implicit */int) var_15)), (arr_11 [i_4 + 1] [i_4 - 2] [i_4 + 1] [16LL] [i_3])))));
                            }
                        } 
                    } 
                    arr_12 [i_2] [i_2] [i_1] [i_0] = ((/* implicit */int) arr_8 [i_1] [i_1] [i_2] [i_1] [i_1]);
                }
            }
        } 
    } 
    var_21 = ((/* implicit */short) var_5);
}
