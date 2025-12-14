/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18340
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18340 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18340
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_16;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_21 = (min(28902, 22162));

                for (int i_2 = 3; i_2 < 24;i_2 += 1)
                {
                    var_22 = var_5;
                    arr_7 [i_0] [i_0] = (-(min(((var_15 + (arr_1 [i_0] [i_1]))), ((2 ? (arr_5 [i_0] [i_0] [i_2]) : -86)))));
                }
                for (int i_3 = 0; i_3 < 25;i_3 += 1) /* same iter space */
                {
                    arr_11 [i_0] [i_0] = (((((((min(-24, (arr_5 [i_0] [i_0] [i_3])))) ? ((-(arr_2 [i_0]))) : (((var_13 / (arr_10 [i_0]))))))) ? ((((206 ? (arr_8 [i_3] [i_1] [i_0]) : 9009)))) : (((var_10 | 3) ? (arr_8 [i_0] [i_0] [17]) : ((4 ? -24 : 206))))));

                    for (int i_4 = 0; i_4 < 25;i_4 += 1)
                    {
                        arr_16 [i_0] [i_0] [i_3] [i_4] = ((((var_16 >= (arr_0 [i_4])))));
                        arr_17 [i_0] [19] [i_0] [i_3] [18] [i_0] = var_19;
                        var_23 = (max(var_23, (max((arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), ((max((arr_8 [i_3] [i_1] [i_1]), (arr_4 [i_0] [i_1] [i_3] [i_4]))))))));
                        arr_18 [i_0] [i_0] [i_3] [8] = -33;
                    }
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        arr_21 [i_0] [20] [i_3] &= (((arr_5 [i_5] [i_3] [i_1]) ? ((((((var_13 ? 58720256 : 2))) && 3400024070))) : 81));
                        var_24 = (max(var_24, (arr_0 [i_0])));
                    }
                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {
                        var_25 = var_15;
                        var_26 = arr_8 [i_0] [4] [4];
                    }
                    for (int i_7 = 0; i_7 < 25;i_7 += 1)
                    {
                        var_27 ^= ((((min((32 * 104), (arr_1 [i_7] [i_1])))) ? -113 : ((min(var_14, (arr_6 [i_0] [i_0] [i_3] [22]))))));
                        arr_26 [i_0] [i_0] [i_3] [i_3] &= ((var_8 ? 1631291964 : (arr_25 [i_0] [i_3] [i_3] [i_7] [i_7])));
                        var_28 = (((((58720272 ? -19 : 103))) ? -4 : (arr_5 [i_1] [i_1] [i_3])));
                        arr_27 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (arr_12 [i_0] [i_3]);
                    }
                }
                for (int i_8 = 0; i_8 < 25;i_8 += 1) /* same iter space */
                {
                    arr_32 [i_0] [i_0] = ((~(((arr_4 [i_0] [i_0] [i_0] [i_0]) ? (arr_4 [i_0] [i_1] [i_1] [i_0]) : 25616))));

                    for (int i_9 = 0; i_9 < 25;i_9 += 1) /* same iter space */
                    {
                        var_29 = ((((!(arr_31 [i_0]))) ? 246 : ((54 ? 80 : 93))));
                        var_30 = (!144);
                    }
                    for (int i_10 = 0; i_10 < 25;i_10 += 1) /* same iter space */
                    {
                        arr_39 [i_0] = arr_31 [8];
                        var_31 = (min(var_31, (min(-30177, (arr_31 [i_0])))));
                        var_32 -= (~(((arr_38 [i_1] [8] [i_1] [i_0] [i_0]) ? (arr_38 [i_10] [i_8] [i_8] [i_0] [i_0]) : (arr_33 [i_1] [i_10] [i_1] [i_0] [i_10] [i_0]))));
                        var_33 = ((-11335 + (((min((arr_0 [0]), 121))))));
                        var_34 = (max(var_34, ((((arr_34 [i_8]) ? (arr_28 [i_10] [i_1] [i_8]) : (!1196899303))))));
                    }
                    var_35 = (min(var_35, (((+((min((arr_28 [i_8] [i_1] [i_0]), (arr_28 [i_0] [i_1] [i_8])))))))));
                    var_36 = (min(var_36, (arr_34 [i_0])));
                }
                var_37 = 14093;
            }
        }
    }
    var_38 = (min(var_38, var_11));
    var_39 = ((1196899294 ? var_11 : ((((var_14 ? var_19 : var_13))))));
    var_40 = 1035892010;
    #pragma endscop
}
