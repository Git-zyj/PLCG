/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182740
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182740 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182740
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 13;i_2 += 1)
            {
                {
                    arr_9 [i_2] [i_0] [i_0] = ((((25 ? -1379439130 : 866139459))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_16 -= ((!(!var_13)));
                                arr_16 [i_4] [i_0] [i_0] [i_0] [i_1 + 1] [i_0] = (min(3428827837, (min(var_10, 866139459))));
                                var_17 = (arr_1 [i_3]);
                                var_18 = ((~(max(((max((arr_3 [8]), (arr_13 [i_1] [i_4])))), (arr_11 [i_1] [i_3 + 2] [i_2 + 1] [i_1])))));
                                arr_17 [i_0] [i_0] = ((((min(3428827836, (arr_11 [i_0 - 1] [i_1 + 3] [i_2 - 2] [i_3 + 2])))) ? (min((arr_10 [i_3] [i_3] [i_3 + 1] [i_3] [i_3]), (arr_10 [4] [4] [i_3 + 1] [i_3 + 2] [i_2]))) : (((-((-(arr_6 [i_0 - 4] [i_0 - 4] [i_2 + 1] [i_4]))))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 13;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 14;i_6 += 1)
                        {
                            {
                                var_19 += ((((~-863224637) % (8821503370983240641 / 866139459))) & 0);
                                arr_23 [i_6] [i_5] [i_6] |= (((((((arr_1 [i_6]) ? var_10 : (arr_22 [1] [i_1] [i_2] [i_2] [i_6])))) + (arr_8 [i_1 - 1] [i_2 - 1] [i_6]))));
                            }
                        }
                    }
                    var_20 = var_3;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 1; i_7 < 8;i_7 += 1)
    {
        for (int i_8 = 2; i_8 < 7;i_8 += 1)
        {
            {
                var_21 ^= (min(((((arr_13 [i_7 + 2] [i_7 + 1]) <= var_6))), (min((arr_13 [i_7 + 2] [i_7 + 1]), (arr_13 [i_7 + 2] [i_7 + 1])))));
                arr_29 [i_7] [i_7] = (arr_3 [i_7 - 1]);
            }
        }
    }
    #pragma endscop
}
