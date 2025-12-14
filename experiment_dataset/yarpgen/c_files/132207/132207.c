/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132207
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132207 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132207
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_7;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_11 += (min((!8388600), var_2));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_12 += ((min((arr_7 [i_1 - 1] [i_1 - 1] [i_1 + 1] [i_1 - 2]), (arr_7 [i_1 + 2] [i_1 - 2] [i_1 + 2] [i_1 - 1]))) * (23320 + 16357377319540578347));
                                var_13 = var_5;
                                arr_14 [i_0] [i_1] [i_2] [i_2] [i_3] [i_4] = (min(((min(-var_1, 31443182))), var_8));
                                var_14 = (min(var_14, ((~(((16006228924814467747 <= 11399094281631095986) << (((arr_10 [i_0] [i_1] [i_3] [i_3]) + 1122737085))))))));
                                arr_15 [i_2] [i_3] [i_3] = (min(-61, ((9 ? (arr_13 [i_0] [i_1 + 2] [i_0] [i_1 + 1] [i_1] [i_3] [i_2]) : ((~(arr_8 [i_0] [i_3] [i_2] [i_3] [i_4])))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 14;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 14;i_6 += 1)
                        {
                            {
                                var_15 *= (((!(arr_4 [i_1 + 1] [i_6 - 1] [i_6]))));
                                var_16 = (max((arr_12 [i_0] [i_6] [i_2] [i_0] [i_6 - 2]), (var_8 + var_7)));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 15;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 15;i_8 += 1)
                        {
                            {
                                var_17 ^= -63;
                                var_18 = var_1;
                                var_19 = (~31443182);
                                var_20 = (((!((!(arr_19 [i_0] [i_1 + 3] [i_0] [i_7] [i_0]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 = var_8;
    #pragma endscop
}
