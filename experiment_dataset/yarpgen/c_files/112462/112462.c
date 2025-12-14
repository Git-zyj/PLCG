/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112462
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112462 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112462
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, 255));

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_4 = 4; i_4 < 17;i_4 += 1)
                        {
                            arr_13 [i_0] [i_0] [i_0] [16] [i_4] = (-(arr_1 [i_2]));
                            arr_14 [i_0] [i_3] [i_0] = (arr_9 [16] [i_4]);
                            var_19 &= (--217);
                        }
                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 19;i_5 += 1)
                        {
                            var_20 = (min(var_20, ((((arr_3 [i_0 + 4]) ? 3310947632438041278 : (arr_3 [i_0 + 4]))))));
                            var_21 = (max(var_21, (((!(136 && var_12))))));
                        }
                        /* vectorizable */
                        for (int i_6 = 2; i_6 < 16;i_6 += 1)
                        {
                            var_22 = ((~(var_1 <= 26)));
                            var_23 = (min(var_23, (((-1793104418 <= (arr_1 [i_1 - 3]))))));
                        }
                        arr_19 [i_2] [i_0] [i_0] [i_2] = (((arr_16 [i_3] [i_1] [i_2] [12] [i_1] [i_1]) >> ((-(102 / var_14)))));
                    }
                }
            }
        }

        /* vectorizable */
        for (int i_7 = 3; i_7 < 15;i_7 += 1)
        {
            /* LoopNest 3 */
            for (int i_8 = 3; i_8 < 18;i_8 += 1)
            {
                for (int i_9 = 2; i_9 < 17;i_9 += 1)
                {
                    for (int i_10 = 1; i_10 < 18;i_10 += 1)
                    {
                        {
                            arr_29 [i_0 - 1] [i_7] [10] [i_9] [i_9] [i_10] &= ((38 + (arr_20 [i_0 + 4] [i_8 - 2])));
                            arr_30 [i_9] [i_9] [i_9] [i_9] [i_9 - 2] [14] [i_9] &= (arr_0 [i_0 + 3]);
                        }
                    }
                }
            }
            arr_31 [i_0] [i_0] [i_0] = 217;
            var_24 = (min(var_24, (arr_16 [i_0] [i_0 + 4] [i_0 + 4] [i_0 + 4] [i_7 + 2] [11])));
        }
        var_25 = (arr_5 [i_0]);
    }
    for (int i_11 = 4; i_11 < 11;i_11 += 1)
    {
        arr_35 [i_11] = ((((!(arr_6 [i_11] [i_11])))));
        var_26 = (((((8565417146170682225 >= var_17) ^ 8533008907183111353)) != ((((-1713844060 + 2147483647) << (((arr_2 [i_11]) - 1570840564)))))));
        var_27 &= ((((((min(43, 1173456832))) ? 2047 : 8533008907183111374)) - (((-(arr_24 [i_11 - 4] [i_11 - 1] [i_11]))))));
    }
    var_28 = (--9881326927538869382);
    #pragma endscop
}
