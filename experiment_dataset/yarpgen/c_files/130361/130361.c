/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130361
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130361 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130361
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_17 = (min((((-513537544 == (~1295017624)))), (max(var_6, (max(-1295017598, (arr_3 [1] [i_1])))))));

                for (int i_2 = 0; i_2 < 19;i_2 += 1) /* same iter space */
                {
                    var_18 = ((((((var_12 > ((min(var_15, (arr_0 [i_0])))))))) < (((min(507516961531964021, (arr_7 [i_0] [i_1] [i_0] [i_0]))) ^ 1))));

                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            var_19 = (((arr_3 [i_1] [i_1]) ? (((arr_2 [i_0] [i_1]) ? 272406402992510772 : var_12)) : (((0 ? (arr_4 [i_0]) : 102)))));
                            var_20 = ((((var_8 > (arr_14 [i_1] [i_0] [i_2] [i_2] [i_4]))) ? (arr_4 [i_0]) : 17939227112177587599));
                            var_21 |= (((arr_12 [i_0 + 1] [i_0 - 2] [i_0] [i_2] [i_0 - 2] [i_0]) ? (arr_0 [i_2]) : var_9));
                            var_22 = ((~((~(arr_0 [i_0])))));
                            var_23 = (~var_1);
                        }
                        for (int i_5 = 0; i_5 < 19;i_5 += 1)
                        {
                            var_24 = ((((((arr_6 [i_0]) ? 7199 : (arr_12 [1] [i_0] [i_0] [i_0] [i_1] [i_0 - 1])))) % 6257177555772972727));
                            var_25 = (((~28682) ? -2147483634 : 12992802754363821332));
                        }
                        var_26 = 774790488;
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 3; i_6 < 17;i_6 += 1)
                    {
                        for (int i_7 = 3; i_7 < 17;i_7 += 1)
                        {
                            {
                                var_27 |= ((((((0 & var_13) ? (arr_12 [i_6 - 3] [i_0 + 1] [18] [i_2] [4] [i_7 + 1]) : 185))) ? (min((min(0, var_6)), 774790488)) : (arr_12 [i_0] [i_7 - 1] [i_0] [i_2] [i_6 - 2] [i_7])));
                                var_28 = var_7;
                            }
                        }
                    }
                    var_29 = (~16256);
                }
                for (int i_8 = 0; i_8 < 19;i_8 += 1) /* same iter space */
                {
                    var_30 = ((((((arr_12 [i_0 - 2] [i_8] [i_8] [i_0] [i_0 - 1] [17]) ? (min(17939227112177587594, -41)) : ((min(-4390796005256720266, var_9)))))) ? var_6 : (min(((~(arr_19 [i_0] [i_0] [i_1] [i_0] [i_8] [i_8]))), 1387616733))));
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 19;i_10 += 1)
                        {
                            {
                                var_31 = (((((arr_20 [i_0] [i_0] [i_0] [i_0 - 2]) | 205)) >= (((arr_19 [i_0] [i_0] [18] [i_0] [i_0 + 1] [i_10]) ? (arr_20 [i_0] [i_0] [i_0] [i_0 + 1]) : (arr_20 [8] [i_0] [i_0] [i_0 - 1])))));
                                var_32 = ((~(arr_28 [i_0] [i_1] [i_0] [i_8])));
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_11 = 0; i_11 < 19;i_11 += 1) /* same iter space */
                {
                    var_33 = var_9;
                    var_34 = (arr_14 [1] [i_0] [1] [i_0] [i_0 - 2]);
                }
            }
        }
    }
    var_35 = (min(668262346, 668262363));
    /* LoopNest 2 */
    for (int i_12 = 0; i_12 < 17;i_12 += 1)
    {
        for (int i_13 = 0; i_13 < 17;i_13 += 1)
        {
            {

                /* vectorizable */
                for (int i_14 = 0; i_14 < 17;i_14 += 1)
                {
                    var_36 |= ((var_15 ? (arr_6 [i_13]) : (arr_6 [i_13])));
                    var_37 = (arr_34 [i_12]);
                }
                var_38 = (((((!((min(35, 65528)))))) & (~var_15)));
                var_39 = ((~(~0)));
                var_40 = var_1;
            }
        }
    }
    #pragma endscop
}
