/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145592
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145592 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145592
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
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) 3375088558U))));
                        arr_12 [i_2] [(short)2] [i_2] [i_2] [(short)8] |= ((/* implicit */long long int) -372648860);
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 12; i_4 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (short i_5 = 0; i_5 < 12; i_5 += 3) /* same iter space */
                        {
                            arr_17 [(_Bool)1] [i_2] [(_Bool)1] [(_Bool)1] [i_4] [i_4] [i_5] &= ((/* implicit */unsigned int) 5176078755405675979LL);
                            var_18 *= ((/* implicit */unsigned char) 372648861);
                            arr_18 [i_0] [i_2] [i_0] = ((/* implicit */unsigned int) (_Bool)1);
                            var_19 = ((/* implicit */short) 2448486700U);
                            arr_19 [i_0] = ((/* implicit */short) 3670693257U);
                        }
                        for (short i_6 = 0; i_6 < 12; i_6 += 3) /* same iter space */
                        {
                            arr_22 [6] [i_0] [i_2] [i_4] [i_6] = ((/* implicit */unsigned int) 9223372036854775807LL);
                            arr_23 [i_0] [6ULL] [(short)1] [i_0] [(short)1] [i_4] [1LL] = ((/* implicit */int) (signed char)61);
                            var_20 -= ((/* implicit */unsigned int) 5176078755405675979LL);
                            arr_24 [i_0] [10U] [11LL] [i_0] = ((/* implicit */short) -372648861);
                            arr_25 [i_0] [i_0] [i_1] [i_2] [i_2] [i_4] [i_6] = ((/* implicit */short) (_Bool)1);
                        }
                        for (short i_7 = 0; i_7 < 12; i_7 += 3) /* same iter space */
                        {
                            arr_29 [0] [(signed char)6] [8LL] [i_0] [i_4] [i_7] [i_7] = ((/* implicit */unsigned short) (signed char)-126);
                            var_21 += ((/* implicit */unsigned int) -8322901136983613117LL);
                            arr_30 [i_0] [i_1] [i_2] [i_4] = ((/* implicit */unsigned long long int) -922852675);
                        }
                        /* LoopSeq 1 */
                        for (unsigned short i_8 = 4; i_8 < 10; i_8 += 1) 
                        {
                            arr_35 [(_Bool)1] [i_1] [1LL] [i_0] [(unsigned short)0] = (unsigned char)47;
                            arr_36 [i_0] [i_0] [(short)3] [i_0] [i_0] = ((/* implicit */unsigned char) 0LL);
                            arr_37 [i_0] [i_0] [i_0] [(_Bool)1] [i_0] [i_0] = ((/* implicit */short) 13225799628548520802ULL);
                            arr_38 [(short)6] [i_1] [(unsigned short)2] [i_0] [i_8] = ((/* implicit */long long int) 624274061U);
                        }
                    }
                    var_22 = ((/* implicit */long long int) (signed char)-113);
                }
            } 
        } 
    } 
    var_23 ^= ((/* implicit */short) var_10);
}
