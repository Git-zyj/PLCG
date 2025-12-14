/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103512
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103512 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103512
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_20 = ((((!(arr_5 [i_0 - 2] [i_0 - 2] [i_4 - 4] [i_3]))) || (((arr_6 [i_4 - 2] [i_3] [i_2]) && 2858428846758357697))));
                                var_21 = arr_8 [i_0 - 2] [i_1] [8] [i_4];
                                arr_11 [i_0 + 1] [i_1] [9] [i_1] [i_4 - 1] = ((~(arr_3 [i_0] [i_0 - 2] [i_4 - 2])));
                                var_22 = (max(var_22, ((max((arr_10 [i_4 - 4] [i_0 - 2] [i_2] [i_2]), ((((arr_1 [i_4 - 4] [i_0 - 2]) && (arr_10 [i_4 - 4] [i_0 + 1] [8] [i_4 - 4])))))))));
                            }
                        }
                    }
                }
                var_23 = arr_2 [i_0 - 2] [i_0 - 2];
                var_24 = (((arr_10 [i_0 + 1] [i_0 - 2] [i_0 - 1] [i_0 - 1]) < (arr_10 [i_0 + 1] [i_0] [i_0 - 1] [i_0])));
                var_25 = (arr_6 [i_0] [i_1] [i_1]);
                var_26 = (((arr_0 [i_1]) <= (arr_2 [i_0 - 2] [i_0 - 2])));
            }
        }
    }

    for (int i_5 = 1; i_5 < 12;i_5 += 1) /* same iter space */
    {
        var_27 = ((~((((!2858428846758357719) <= 79)))));
        var_28 -= arr_13 [i_5];
    }
    for (int i_6 = 1; i_6 < 12;i_6 += 1) /* same iter space */
    {
        var_29 = (min(var_29, ((min((arr_15 [i_6 - 1]), (((arr_14 [i_6 + 1] [i_6 - 1]) ? (arr_14 [i_6 - 1] [i_6 - 1]) : (arr_14 [i_6 + 1] [i_6 - 1]))))))));
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 13;i_7 += 1)
        {
            for (int i_8 = 2; i_8 < 12;i_8 += 1)
            {
                for (int i_9 = 1; i_9 < 9;i_9 += 1)
                {
                    {

                        for (int i_10 = 1; i_10 < 11;i_10 += 1)
                        {
                            var_30 += 209;
                            var_31 = (arr_24 [i_6] [i_8] [i_9] [i_8]);
                            arr_28 [i_6] [i_7] [i_7] [12] [i_10] = 4;
                        }
                        /* vectorizable */
                        for (int i_11 = 0; i_11 < 13;i_11 += 1)
                        {
                            var_32 = (max(var_32, (((15588315226951193890 ? 254 : 255)))));
                            arr_31 [8] [8] [i_11] [i_9] [i_8 - 2] = var_1;
                            var_33 &= arr_15 [i_6 + 1];
                            var_34 = (min(var_34, (((2858428846758357697 ? (arr_18 [i_6 - 1]) : 8469176462646663198)))));
                        }
                        for (int i_12 = 0; i_12 < 13;i_12 += 1)
                        {
                            var_35 -= ((+((max((arr_25 [i_6] [i_6] [i_12] [i_6] [i_9 + 1]), (!2858428846758357728))))));
                            var_36 = 39;
                            var_37 = (max(var_37, ((((((max((arr_24 [i_6] [i_7] [i_8] [i_9]), (((!(arr_32 [i_6] [i_9] [i_9] [i_9 + 4] [6])))))))) > ((((max((arr_14 [i_6] [i_7]), 234))) ? ((77 ? 6046243326087966375 : 86)) : var_11)))))));
                        }
                        var_38 ^= 807086851;
                        var_39 = (max((max((arr_12 [i_8 + 1]), 67934841)), 7));
                    }
                }
            }
        }
        arr_35 [i_6] = ((~((((arr_23 [i_6] [i_6 - 1]) > (arr_23 [i_6] [i_6 + 1]))))));
    }
    var_40 = var_2;
    /* LoopNest 2 */
    for (int i_13 = 0; i_13 < 12;i_13 += 1)
    {
        for (int i_14 = 0; i_14 < 12;i_14 += 1)
        {
            {
                arr_44 [i_13] [i_14] = (((-(arr_23 [i_14] [i_14]))));
                arr_45 [i_14] [i_14] [i_13] = (((~(arr_3 [i_13] [i_14] [i_14]))));
            }
        }
    }
    #pragma endscop
}
