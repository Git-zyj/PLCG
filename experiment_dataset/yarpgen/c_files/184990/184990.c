/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184990
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184990 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184990
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] = (~216);
        arr_3 [8] [8] = (((216 < 1602141421137727773) ? (max((arr_0 [i_0]), (!16))) : ((max((arr_1 [i_0]), (max(106, 1705400236)))))));
    }
    for (int i_1 = 2; i_1 < 9;i_1 += 1)
    {
        arr_8 [2] = 3040038115202753633;
        /* LoopNest 2 */
        for (int i_2 = 3; i_2 < 10;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 10;i_3 += 1)
            {
                {

                    for (int i_4 = 0; i_4 < 0;i_4 += 1)
                    {
                        arr_20 [6] [6] [i_2] [i_1] [i_1 + 2] = (((31 ^ 3040038115202753633) ? var_7 : (((((((arr_19 [3] [i_3 + 2] [i_3 + 2] [i_3]) <= (arr_4 [i_1] [i_2 - 3])))) <= (arr_4 [i_3 - 1] [i_2 - 2]))))));

                        for (int i_5 = 0; i_5 < 12;i_5 += 1)
                        {
                            arr_24 [2] [6] [2] = (arr_18 [i_1] [i_3] [i_4] [i_5]);
                            arr_25 [0] [0] [i_3 - 1] [2] [i_4] [i_5] = (~(~var_7));
                            arr_26 [2] [i_2 - 2] = (arr_6 [i_1 + 1]);
                        }
                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 12;i_6 += 1)
                        {
                            arr_30 [i_1] [i_2] = ((-1289326139 ? 255 : (arr_7 [i_2 + 2] [i_2 - 2])));
                            arr_31 [i_2] [i_2 - 3] [i_2 - 3] [i_2] = (30080 < -18328);
                        }
                    }
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        arr_35 [i_2] [i_2] [1] [i_2] [i_2] [i_2] = (arr_33 [i_2]);
                        arr_36 [i_7] [i_2] [i_2] [i_1] = (arr_4 [6] [i_7]);

                        for (int i_8 = 0; i_8 < 12;i_8 += 1)
                        {
                            arr_39 [i_1] [i_1] [i_1] [i_1 - 2] [i_1] [i_1] [i_8] &= (arr_28 [i_8]);
                            arr_40 [i_8] [i_8] [i_3] [i_8] [i_1 + 3] = 718273179;
                            arr_41 [6] [i_2] = (arr_29 [i_1] [i_1] [1] [1] [i_1] [i_7] [i_2]);
                        }
                    }
                    arr_42 [i_2 - 3] [i_2 - 3] [6] &= ((((arr_16 [i_1] [i_1] [i_1]) ? (arr_29 [i_1] [i_1] [i_1 + 2] [i_1 - 2] [i_1 + 2] [4] [4]) : var_2)));
                    arr_43 [0] [i_2] [i_2] [i_1] = var_6;
                }
            }
        }
    }
    for (int i_9 = 0; i_9 < 1;i_9 += 1)
    {
        arr_47 [i_9] = 0;
        arr_48 [0] [0] = (arr_44 [i_9]);
        arr_49 [i_9] [i_9] = (arr_44 [i_9]);
    }
    var_15 = var_7;
    #pragma endscop
}
