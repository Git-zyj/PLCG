/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111018
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111018 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111018
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
    for (short i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                var_11 = ((/* implicit */int) ((((/* implicit */_Bool) max((arr_1 [i_1]), (arr_1 [i_0])))) && (((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_0])))))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_9 [i_2] [(signed char)9] = ((/* implicit */signed char) (short)31519);
                            arr_10 [i_2] [i_1] [i_2] [i_3] = (short)-29479;
                            arr_11 [i_2] [i_2] [i_2] [i_3] [(short)6] [i_0] &= ((/* implicit */short) ((((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_4))))))) ^ (max((((0ULL) | (0ULL))), (((/* implicit */unsigned long long int) arr_7 [i_0] [i_1] [i_3] [i_0] [(signed char)10]))))));
                            var_12 = ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_3] [i_0] [i_2] [i_3])) ? (((/* implicit */int) arr_2 [i_2] [i_1])) : (((/* implicit */int) var_3))))))))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 2) 
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_5 = 0; i_5 < 15; i_5 += 3) /* same iter space */
                    {
                        arr_17 [i_0] [i_1] [i_0] [i_1] = ((/* implicit */signed char) ((var_1) ? (arr_3 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(arr_16 [i_5])))))));
                        var_13 = (~(((/* implicit */int) arr_16 [i_0])));
                        /* LoopSeq 1 */
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            arr_22 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_15 [i_6] [i_5] [i_1] [i_0])) >> (((/* implicit */int) arr_15 [i_6] [i_6] [i_6] [i_6]))));
                            arr_23 [i_0] [(unsigned char)8] [i_1] [i_5] |= ((/* implicit */_Bool) ((18446744073709551607ULL) * (((/* implicit */unsigned long long int) 3949092796U))));
                            arr_24 [i_1] [i_5] |= arr_20 [i_0] [i_1] [i_4] [i_1];
                        }
                    }
                    for (unsigned int i_7 = 0; i_7 < 15; i_7 += 3) /* same iter space */
                    {
                        var_14 = ((/* implicit */signed char) ((arr_12 [i_7] [i_1] [i_1]) && (((/* implicit */_Bool) (+(((/* implicit */int) (short)29467)))))));
                        var_15 = ((/* implicit */_Bool) max((var_15), ((!(((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_4] [i_0]))))));
                        var_16 = ((/* implicit */signed char) arr_26 [i_7] [i_4] [i_4] [i_1] [i_0]);
                    }
                    var_17 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) ((13ULL) >> (((((/* implicit */int) (short)-29463)) + (29522)))))) && (((/* implicit */_Bool) arr_14 [i_0] [i_1] [(_Bool)1]))));
                }
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned char) var_8);
    var_19 = ((/* implicit */signed char) max((var_10), (((/* implicit */unsigned int) ((((((/* implicit */int) var_3)) >> (((((/* implicit */int) (short)19034)) - (19014))))) | (((/* implicit */int) var_6)))))));
}
