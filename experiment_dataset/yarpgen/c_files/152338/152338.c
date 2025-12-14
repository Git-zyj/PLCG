/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152338
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152338 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152338
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 &= var_1;

    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        var_16 = arr_1 [i_0];
        arr_3 [11] = -600126138;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 13;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                {
                    var_17 -= ((var_13 >= (arr_4 [i_2 + 1] [9])));
                    arr_13 [i_1] [i_1] [i_1] = 110;
                    var_18 -= (!-600126116);
                    var_19 = (max(var_19, (((var_12 ? var_11 : var_6)))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 15;i_5 += 1)
            {
                {
                    var_20 = 120;
                    arr_18 [12] [i_1] = (((arr_17 [14] [14] [i_1] [14]) / (arr_15 [i_1])));
                    arr_19 [i_1] [i_1] [i_1] [i_1] = (3968 ? 1700257910 : -2103346433);
                    arr_20 [i_1] [i_1] = var_0;

                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        arr_23 [i_6] [i_4] &= (-(arr_11 [i_6]));
                        arr_24 [i_1] [i_1] [i_4] [i_5] [i_6] = (((8030212799087509873 > -1696781428) << ((((21179 ? (arr_6 [i_1]) : (arr_17 [12] [5] [i_1] [i_6]))) - 5717276580980392758))));
                        arr_25 [i_1] [i_1] [i_1] [i_1] [i_1] = ((((3927733105246067946 << (((var_7 + 301598533) - 30))))) ? (~var_10) : (((var_14 + 2147483647) << (((var_8 + 323051555) - 6)))));
                    }
                    for (int i_7 = 0; i_7 < 15;i_7 += 1) /* same iter space */
                    {

                        for (int i_8 = 0; i_8 < 15;i_8 += 1)
                        {
                            arr_30 [i_1] [i_8] [i_1] [12] [i_8] |= (-60 / -600126138);
                            var_21 ^= ((2147483639 ? (1572864 | var_4) : 21204));
                        }
                        var_22 = ((arr_10 [i_7] [5]) / var_14);
                        var_23 = 189491113;
                    }
                    for (int i_9 = 0; i_9 < 15;i_9 += 1) /* same iter space */
                    {
                        arr_33 [i_1] = (-2147483647 - 1);
                        var_24 = (min(var_24, (((-8663028491144820838 ? (arr_15 [12]) : (~var_0))))));

                        for (int i_10 = 2; i_10 < 12;i_10 += 1)
                        {
                            var_25 *= ((21231 != (arr_31 [i_9] [i_10 + 2] [6])));
                            arr_37 [i_1] [8] [8] = arr_22 [i_1] [i_1] [i_9] [i_10];
                            arr_38 [i_1] [i_4] [10] [i_9] [4] |= 12049985453051037144;
                        }
                        for (int i_11 = 0; i_11 < 15;i_11 += 1) /* same iter space */
                        {
                            arr_41 [i_1] [i_9] [9] [i_9] [i_11] [i_1] = ((!(arr_40 [i_1] [i_1] [i_4] [i_5] [i_5] [i_9] [i_11])));
                            arr_42 [i_1] [i_4] [i_4] [i_9] [i_1] = (31133526 >> (-6385192761187125038 + 6385192761187125069));
                            var_26 = (((arr_6 [i_9]) ? (arr_6 [i_1]) : -9223372036854775802));
                        }
                        for (int i_12 = 0; i_12 < 15;i_12 += 1) /* same iter space */
                        {
                            arr_45 [i_1] [i_12] [i_5] [i_9] [i_12] = (84 == -110);
                            arr_46 [i_1] [i_5] [i_1] = (((arr_36 [i_1] [i_1] [i_5] [i_9] [i_1]) || -var_12));
                            var_27 *= (~71);
                            arr_47 [i_1] [i_4] [i_5] [i_1] [i_12] = -508049749;
                        }
                        for (int i_13 = 0; i_13 < 15;i_13 += 1) /* same iter space */
                        {
                            arr_50 [i_1] = ((!(arr_16 [i_4] [i_4] [i_4])));
                            arr_51 [i_1] = var_1;
                        }
                    }
                }
            }
        }
        arr_52 [i_1] = ((var_10 ? var_8 : -3927733105246067946));
        var_28 = (max(var_28, ((((arr_43 [i_1] [i_1] [0] [i_1] [0] [i_1] [i_1]) == (arr_43 [i_1] [i_1] [i_1] [i_1] [14] [i_1] [i_1]))))));
    }
    var_29 = var_12;
    #pragma endscop
}
