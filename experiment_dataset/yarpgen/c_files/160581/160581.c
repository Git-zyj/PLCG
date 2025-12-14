/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160581
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160581 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160581
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = min(43756, (max(((21767 ? 30930 : -34)), var_0)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 18;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 19;i_4 += 1)
                            {
                                arr_12 [i_0] [18] [i_0] = (arr_7 [i_1]);
                                arr_13 [i_0] [10] [i_3] [i_2] [10] [i_0] = ((((arr_5 [i_3 + 1] [14] [i_3] [i_0]) ? (arr_5 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_0]) : (arr_5 [i_3 - 3] [i_3 - 1] [i_3] [i_0]))));
                            }
                            for (int i_5 = 0; i_5 < 19;i_5 += 1)
                            {
                                var_19 = ((((max(var_1, 43765))) && 8));
                                var_20 = (22232 & 2113929216);
                            }
                            arr_16 [i_0] [i_1] [3] [i_3] = (arr_6 [i_0]);
                            var_21 = (arr_9 [i_0] [i_0] [i_1] [11] [15]);
                            var_22 = (min(((((var_12 - (arr_6 [i_1]))) / var_4)), (((((max(var_1, (arr_4 [i_0] [i_1])))) ? (arr_6 [i_3 - 3]) : (arr_4 [i_0] [i_3 + 1]))))));
                        }
                    }
                }
                var_23 = var_4;

                /* vectorizable */
                for (int i_6 = 3; i_6 < 18;i_6 += 1) /* same iter space */
                {

                    for (int i_7 = 1; i_7 < 16;i_7 += 1)
                    {
                        var_24 = 25586;
                        var_25 = (max(var_25, (3447592006 / 8187)));

                        for (int i_8 = 3; i_8 < 18;i_8 += 1)
                        {
                            arr_28 [i_0] [i_0] [i_0] = ((!(((43757 ? 24 : 0)))));
                            var_26 ^= var_5;
                            arr_29 [i_0] = (((arr_3 [i_8 - 2] [i_8 - 2]) ? var_11 : 32767));
                        }
                    }
                    for (int i_9 = 0; i_9 < 19;i_9 += 1)
                    {
                        var_27 = ((21793 ? 21767 : 2181038068));

                        for (int i_10 = 3; i_10 < 17;i_10 += 1)
                        {
                            var_28 = 693689946274069591;
                            var_29 = (((arr_15 [i_6 - 3] [i_6 - 1] [i_6 - 1] [i_0] [i_10 - 1] [i_10 - 1]) ? -19569 : (arr_14 [i_6 + 1] [i_9] [i_0] [i_10 - 2] [i_10])));
                        }
                        for (int i_11 = 0; i_11 < 19;i_11 += 1)
                        {
                            arr_36 [i_11] [10] [i_6 - 2] [i_1] [10] [10] &= (arr_25 [2] [i_1] [2] [i_1] [i_1] [i_1] [i_1]);
                            arr_37 [i_0] = (51999284 * 32767);
                        }
                    }
                    var_30 = (((847375284 ? 25586 : (arr_21 [i_6]))));
                }
                for (int i_12 = 3; i_12 < 18;i_12 += 1) /* same iter space */
                {
                    var_31 = (max(50, (min(-50, -51))));
                    arr_40 [i_0] [i_0] [i_12] = -5615;
                }
                for (int i_13 = 3; i_13 < 18;i_13 += 1) /* same iter space */
                {
                    arr_44 [i_0] = (arr_21 [i_13]);
                    arr_45 [i_0] [i_1] [12] [i_0] = (((48 | ((min(-25586, 1))))));
                }
                for (int i_14 = 3; i_14 < 18;i_14 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_15 = 0; i_15 < 19;i_15 += 1)
                    {
                        for (int i_16 = 0; i_16 < 19;i_16 += 1)
                        {
                            {
                                arr_56 [i_0] [i_1] [i_14 - 2] [i_0] [i_14 - 2] [i_15] [i_16] = (-52 * -5076);
                                var_32 ^= (max(var_7, (max(-27429, ((8881565010553843080 - (arr_6 [i_1])))))));
                            }
                        }
                    }
                    arr_57 [i_0] [i_0] [i_1] [i_0] = (max(25580, 12775));
                }
                var_33 &= (((((var_15 ? (((~(arr_3 [i_0] [i_0])))) : (max((arr_7 [3]), (arr_25 [4] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))) ^ ((((min(var_13, 3447592033))) ? ((max(0, -846882782))) : ((var_11 ? (arr_0 [12]) : 142908748563006796))))));
            }
        }
    }
    var_34 = var_16;
    #pragma endscop
}
