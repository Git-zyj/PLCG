/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100571
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100571 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100571
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] = (-1675859072 | 34698);

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_10 = ((((((var_5 ? -1675859048 : (arr_5 [i_0] [i_1]))) + 2147483647)) >> (((arr_4 [i_0 - 1]) - 42757))));
            arr_6 [10] = (((arr_3 [i_0 - 1] [i_0 - 1] [i_0 - 1]) % 22));
            arr_7 [i_1] [i_1] [i_0 - 2] &= ((var_8 & ((((arr_5 [i_0] [i_1]) | (arr_1 [i_0 - 2]))))));
        }
        for (int i_2 = 4; i_2 < 23;i_2 += 1)
        {
            var_11 -= (arr_1 [i_0 + 1]);
            var_12 *= (arr_9 [i_2 - 1] [i_2 - 4] [i_0 + 1]);
        }
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            var_13 *= (arr_5 [20] [i_0]);
            arr_14 [i_0] [i_0 - 1] [i_3] = (!(arr_12 [i_0 - 2] [i_0 - 1]));
            var_14 *= (((arr_5 [i_0 + 1] [i_0 - 2]) / (arr_13 [i_0])));
        }
        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            /* LoopNest 2 */
            for (int i_5 = 3; i_5 < 20;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 24;i_6 += 1)
                {
                    {
                        arr_21 [i_4] [1] [i_4] [i_0] &= (arr_20 [19] [18] [0] [i_5 + 4]);
                        var_15 += (((1 ? 1675859058 : 3298308641744211952)) * (arr_5 [i_0 - 1] [i_5 + 1]));
                    }
                }
            }

            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {

                for (int i_8 = 1; i_8 < 21;i_8 += 1)
                {
                    var_16 = ((~(arr_15 [19])));
                    var_17 = -1675859050;
                }
                for (int i_9 = 0; i_9 < 24;i_9 += 1)
                {
                    var_18 &= (arr_5 [i_0] [i_9]);
                    var_19 = 46182;
                    var_20 = (arr_10 [i_9]);
                }
                arr_30 [i_0] [i_4] = ((-1675859072 ? (arr_13 [i_0 + 1]) : 19332));
            }
            for (int i_10 = 2; i_10 < 21;i_10 += 1)
            {
                var_21 += (!32);
                var_22 = 15360;
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 24;i_11 += 1)
                {
                    for (int i_12 = 1; i_12 < 23;i_12 += 1)
                    {
                        {
                            arr_41 [i_12] [i_11] [i_11] [i_10 - 1] [5] [i_4] [i_0] = 11363078073215044693;
                            var_23 = ((-((-1675859067 ? var_9 : var_4))));
                        }
                    }
                }
            }
            var_24 = (((arr_4 [i_0 + 1]) ? 1 : (arr_4 [i_0 - 2])));
        }
        var_25 = (((1675859081 ? 0 : 122)));
        var_26 *= (((-127 - 1) ? (arr_0 [i_0 - 2]) : (arr_0 [i_0 - 2])));
        /* LoopNest 2 */
        for (int i_13 = 1; i_13 < 22;i_13 += 1)
        {
            for (int i_14 = 1; i_14 < 20;i_14 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_15 = 2; i_15 < 21;i_15 += 1)
                    {
                        for (int i_16 = 0; i_16 < 24;i_16 += 1)
                        {
                            {
                                var_27 -= 46194;
                                arr_55 [i_13] [i_13] [i_13 + 2] [i_13] [i_13 + 2] [i_13] [12] = ((var_3 != (-2147483647 - 1)));
                            }
                        }
                    }
                    var_28 *= ((var_0 + ((1 ? 1 : 1))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_17 = 4; i_17 < 20;i_17 += 1)
    {
        for (int i_18 = 2; i_18 < 21;i_18 += 1)
        {
            for (int i_19 = 0; i_19 < 0;i_19 += 1)
            {
                {
                    var_29 = (max((arr_24 [17] [i_18]), ((~(arr_51 [i_18 + 1] [i_19])))));
                    /* LoopNest 2 */
                    for (int i_20 = 1; i_20 < 21;i_20 += 1)
                    {
                        for (int i_21 = 0; i_21 < 1;i_21 += 1)
                        {
                            {
                                arr_69 [i_17] [i_17] [i_19 + 1] [i_20] [i_19] = (((arr_59 [i_17 - 1] [i_17] [i_19 + 1]) ? -147638905 : (((((0 ? (arr_43 [0] [1]) : 126))) ? -7387088741130421369 : (arr_8 [i_17])))));
                                var_30 = (!1);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
