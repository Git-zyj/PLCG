/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182488
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182488 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182488
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
    var_17 = ((/* implicit */unsigned char) var_16);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                var_18 ^= ((/* implicit */unsigned short) max((((/* implicit */int) (signed char)-4)), (((((/* implicit */int) arr_4 [i_0])) & (-861002004)))));
                /* LoopSeq 1 */
                for (signed char i_2 = 0; i_2 < 19; i_2 += 4) 
                {
                    var_19 = ((/* implicit */unsigned short) max((var_19), (arr_3 [2ULL])));
                    var_20 += ((/* implicit */unsigned int) var_1);
                    arr_8 [(short)6] [i_1] [i_0] = ((/* implicit */unsigned char) ((unsigned short) ((signed char) ((((/* implicit */int) var_5)) ^ (((/* implicit */int) var_2))))));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 18; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 17; i_4 += 2) 
                        {
                            {
                                arr_13 [(signed char)12] [14U] [i_3] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_11 [8U] [i_2] [i_3] [(unsigned short)4] [i_4 + 1]))))) ? ((~(((/* implicit */int) (signed char)-30)))) : ((~(((/* implicit */int) arr_11 [(signed char)16] [i_3] [i_3] [i_4] [i_4 - 1]))))));
                                var_21 = (~(((/* implicit */int) var_3)));
                                var_22 = ((/* implicit */short) min((arr_12 [i_3 + 1] [i_3 + 1] [i_3 - 3] [i_4] [i_4 - 1]), (((/* implicit */unsigned long long int) var_0))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_23 |= ((/* implicit */unsigned short) ((short) min((min((var_14), (((/* implicit */unsigned int) -1)))), (min((1036562131U), (((/* implicit */unsigned int) -578790850)))))));
}
