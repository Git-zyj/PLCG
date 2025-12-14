/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159084
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159084 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159084
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
    var_11 ^= ((/* implicit */unsigned int) var_5);
    /* LoopNest 2 */
    for (unsigned short i_0 = 3; i_0 < 6; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 9; i_1 += 4) 
        {
            {
                var_12 = ((/* implicit */unsigned char) max((var_12), (((/* implicit */unsigned char) min((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0]))))));
                var_13 = ((/* implicit */short) arr_0 [i_1]);
                var_14 *= ((/* implicit */_Bool) arr_1 [i_0] [i_1 + 1]);
                /* LoopNest 2 */
                for (unsigned short i_2 = 3; i_2 < 9; i_2 += 4) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_8 [i_0 - 1] [(short)2] [3] = ((/* implicit */int) (-9223372036854775807LL - 1LL));
                            /* LoopSeq 1 */
                            for (long long int i_4 = 1; i_4 < 7; i_4 += 3) 
                            {
                                var_15 = ((/* implicit */_Bool) (-(9223372036854775807LL)));
                                var_16 = ((/* implicit */unsigned int) -1LL);
                                var_17 = ((/* implicit */short) min((var_8), ((~(((/* implicit */int) arr_9 [i_0] [i_1] [i_1] [i_4 + 3] [i_4]))))));
                            }
                            var_18 = ((/* implicit */short) arr_2 [9ULL]);
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
    {
        var_19 = ((/* implicit */long long int) min((var_19), (((((/* implicit */_Bool) arr_15 [i_5 - 1])) ? ((-9223372036854775807LL - 1LL)) : (9223372036854775807LL)))));
        arr_16 [i_5] = ((/* implicit */short) ((unsigned short) arr_13 [i_5 - 1]));
    }
    var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) var_5))));
}
