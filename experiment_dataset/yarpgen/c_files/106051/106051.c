/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106051
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106051 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106051
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] = (((min(-5505103649307990127, (~408575621))) != (!var_0)));

        for (int i_1 = 1; i_1 < 24;i_1 += 1)
        {
            arr_6 [i_0] [i_1 - 1] = var_0;
            arr_7 [i_0 - 3] = -1715537965;
        }
        arr_8 [i_0] = (((((max(-408575624, (arr_1 [i_0]))) != (-32597 - var_10))) ? (((min((((!(arr_1 [13])))), 1024)))) : (((arr_0 [i_0]) ? 208596632 : (arr_0 [i_0 - 3])))));
        arr_9 [i_0 - 4] = ((-1688751637 ? 0 : (min(-408575622, 1335204593))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        arr_12 [i_2] = var_8;
        arr_13 [i_2] [i_2] = (~65535);
    }
    var_12 = 1;

    for (int i_3 = 2; i_3 < 20;i_3 += 1) /* same iter space */
    {
        arr_17 [i_3] = -1;
        arr_18 [i_3] [i_3] = 4795733231531670705;
        arr_19 [i_3] [i_3] = (((arr_5 [i_3]) * 8));
    }
    for (int i_4 = 2; i_4 < 20;i_4 += 1) /* same iter space */
    {
        arr_24 [i_4] = ((!(!262142)));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 21;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 21;i_6 += 1)
            {
                {
                    arr_30 [i_4] [1] [i_4] = (min(-2685842090243886418, (arr_1 [i_5])));
                    /* LoopNest 2 */
                    for (int i_7 = 2; i_7 < 19;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 21;i_8 += 1)
                        {
                            {
                                arr_38 [i_5] [i_5] [i_4] [i_5] [7] [i_5] = ((-(2752494564649135077 + var_4)));
                                arr_39 [i_5] [i_4] = (((~(arr_33 [i_4 - 2] [i_4] [i_4] [i_4]))));
                                arr_40 [13] [i_7] [i_4] [i_7 - 2] [i_4] [12] [i_4] = (arr_31 [i_4] [i_5] [i_4] [i_4]);
                            }
                        }
                    }
                    arr_41 [i_4 - 1] [i_5] [i_4] = var_0;
                    arr_42 [i_4] = (!4194303);
                    arr_43 [i_4] [i_5] [i_4] [16] = 1342358799;
                }
            }
        }
    }
    for (int i_9 = 0; i_9 < 15;i_9 += 1)
    {
        arr_48 [i_9] [i_9] = (max(((((min((arr_0 [0]), var_2))) * (min(var_3, 408575622)))), -33));
        arr_49 [i_9] [i_9] = (arr_46 [i_9]);
        arr_50 [i_9] = (min(var_8, ((max(8, (-2147483647 - 1))))));
    }
    #pragma endscop
}
