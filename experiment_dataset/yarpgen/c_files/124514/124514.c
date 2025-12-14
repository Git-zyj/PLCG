/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124514
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124514 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124514
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        var_10 = ((!(arr_2 [i_0])));
        var_11 ^= -74;
    }
    for (int i_1 = 1; i_1 < 21;i_1 += 1)
    {
        arr_7 [i_1] = ((!((((arr_6 [i_1 + 3] [i_1 + 3]) ? (arr_6 [i_1] [i_1]) : (arr_6 [i_1 + 2] [i_1 + 3]))))));
        arr_8 [i_1] |= (arr_5 [i_1]);
        var_12 = (arr_5 [i_1]);
        arr_9 [i_1 + 2] |= 30217;
        var_13 = (((!((min((arr_3 [i_1]), -1))))));
    }
    var_14 |= var_8;
    var_15 = (min(var_15, var_0));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 20;i_3 += 1)
        {
            {
                var_16 = ((min(-11030, -1)));

                for (int i_4 = 1; i_4 < 20;i_4 += 1)
                {

                    for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
                    {

                        for (int i_6 = 1; i_6 < 19;i_6 += 1)
                        {
                            var_17 = (max(var_17, (arr_18 [i_2] [i_2] [i_2])));
                            var_18 = (arr_15 [i_2] [i_3]);
                        }
                        for (int i_7 = 1; i_7 < 19;i_7 += 1)
                        {
                            var_19 = (max(var_19, (arr_26 [i_2] [i_2] [12] [i_2] [i_2] [i_2] [i_2])));
                            var_20 = (arr_15 [i_3 + 2] [i_3]);
                            var_21 |= (~10);
                            var_22 -= ((!((!((min(1487668093, -9)))))));
                        }
                        arr_30 [12] [i_3] [i_3] [i_2] = ((~(((arr_13 [i_2]) ? 12078659563730054949 : (arr_17 [i_2] [i_3])))));
                        var_23 = ((((min((arr_13 [i_4 + 1]), (arr_13 [i_4 + 2])))) ? (arr_13 [i_4 + 1]) : (min((arr_13 [i_4 + 1]), 1))));
                        arr_31 [i_2] [i_3] [i_4] [4] = (arr_26 [i_5] [i_4 + 2] [i_4] [i_3] [i_3 + 1] [i_3 + 1] [3]);
                    }
                    for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
                    {
                        arr_34 [i_2] [i_3] = (arr_6 [i_8] [i_4]);
                        arr_35 [i_3] = (arr_16 [i_3 + 1] [i_3] [i_3]);
                        var_24 = (min(var_24, ((min((arr_27 [i_2] [21]), ((min((arr_16 [i_8] [i_2] [i_8]), (arr_21 [i_8])))))))));
                    }
                    arr_36 [i_3] [i_3] [i_4] [i_4] = (arr_20 [i_4] [i_3] [i_2]);
                    var_25 = (arr_25 [i_4 - 1] [i_3 + 2] [i_3 - 1] [i_3 + 1]);
                }
                var_26 += ((-(arr_11 [i_2])));
                arr_37 [i_3] = arr_16 [21] [i_3] [i_3 - 1];
            }
        }
    }
    var_27 = (min(var_27, var_5));
    #pragma endscop
}
