/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149272
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149272 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149272
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_6;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    arr_10 [i_1] = (arr_0 [i_1] [i_1]);

                    for (int i_3 = 4; i_3 < 15;i_3 += 1) /* same iter space */
                    {
                        var_17 = (max(var_17, -var_11));
                        arr_13 [i_0] [i_1] [i_2] [i_3] = ((~(max((arr_12 [i_0] [i_0] [i_0] [10]), (arr_12 [i_3 - 2] [i_0] [i_1] [i_0])))));
                    }
                    /* vectorizable */
                    for (int i_4 = 4; i_4 < 15;i_4 += 1) /* same iter space */
                    {

                        for (int i_5 = 0; i_5 < 17;i_5 += 1)
                        {
                            arr_20 [i_0] [i_1] [i_5] = ((~(arr_7 [i_0] [i_1] [i_2])));
                            arr_21 [i_0] [i_0] [i_2] [i_1] [6] = 4294967291;
                            var_18 = ((25 ? -26 : (arr_6 [i_2 - 1] [i_2 - 1] [i_2 - 1])));
                            arr_22 [i_1] = ((!(((-(arr_4 [i_0] [i_0] [i_0]))))));
                        }
                        for (int i_6 = 2; i_6 < 13;i_6 += 1)
                        {
                            arr_26 [i_0] [i_0] [i_0] [i_0] [i_1] = (arr_1 [i_4 - 1]);
                            var_19 = (max(var_19, 1626876285));
                        }
                        for (int i_7 = 0; i_7 < 17;i_7 += 1)
                        {
                            arr_30 [i_1] [i_1] [i_1] = (((((-29242 & (arr_4 [i_1] [i_1] [2])))) ? (arr_11 [0] [i_2 - 1] [i_2 - 1] [i_7]) : (arr_27 [i_0] [i_1] [i_0])));
                            arr_31 [i_0] [10] [i_1] [i_4] [i_7] = ((-(arr_29 [i_0] [i_1] [i_2] [i_4 - 4] [i_4] [i_7])));
                        }
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            arr_35 [i_0] [i_1] [i_1] [i_2 - 1] [10] [i_1] = (arr_5 [i_0] [i_1]);
                            arr_36 [i_1] [15] [i_1] = -22770;
                        }
                        var_20 = (min(var_20, (arr_28 [i_2] [i_1] [4] [i_1] [5])));
                    }
                }
            }
        }
    }
    var_21 = (!var_2);
    #pragma endscop
}
