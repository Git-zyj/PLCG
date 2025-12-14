/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118239
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118239 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118239
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        arr_2 [0] = var_14;

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            arr_5 [i_0] [9] |= -5758243419346903569;
            arr_6 [i_0] [2] [i_1] = (arr_3 [i_0] [1]);
            arr_7 [i_0] = ((-(arr_1 [i_0] [i_1])));
        }
        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            arr_10 [i_0] [i_0] [i_0] = ((7507 ? 1 : 63));
            arr_11 [i_0] [i_0] [i_0] = ((~(min((arr_9 [12] [i_0 + 1] [1]), (arr_9 [i_0] [i_0 - 1] [i_0 - 1])))));
        }
        for (int i_3 = 1; i_3 < 16;i_3 += 1)
        {
            arr_14 [14] [i_3] = (((arr_9 [i_0 + 1] [i_0 + 1] [i_0 + 1]) ? (arr_1 [i_3] [i_3]) : 3344855204443902630));
            arr_15 [i_3] [1] [i_0] = ((!(((((min(3741044660, (arr_0 [i_0])))) ? 65521 : (min(2236942676254632537, 3741044660)))))));
        }
        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {
            arr_18 [i_0 - 1] [i_4] = (min(-7835543700738265500, -2236942676254632537));
            arr_19 [i_4] [i_4] [13] = (min(-7835543700738265500, (var_8 ^ var_11)));
            arr_20 [i_4] = (var_2 * ((7 / (min(-7835543700738265504, 2236942676254632519)))));
        }
        arr_21 [11] [11] = (arr_0 [i_0 + 1]);
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 19;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 19;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 19;i_7 += 1)
            {
                {
                    arr_29 [i_6] = (min(5755480480567052817, 0));
                    arr_30 [13] [i_7] [i_7] [i_5] = (arr_26 [i_7]);
                    arr_31 [i_7] [i_6] [i_5] = (min((arr_25 [i_5] [i_5] [i_5]), (arr_22 [i_5])));

                    for (int i_8 = 3; i_8 < 18;i_8 += 1)
                    {
                        arr_34 [7] [18] [i_6] [14] [14] [i_6] = var_1;
                        arr_35 [i_5] [i_5] = 4064233075156870008;
                    }
                    arr_36 [i_7] = 17487616416713412423;
                }
            }
        }
    }
    #pragma endscop
}
