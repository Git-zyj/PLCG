/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102682
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102682 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102682
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        var_18 = (min(var_18, (((arr_0 [13]) && ((((arr_1 [i_0] [i_0]) - (arr_1 [i_0 + 1] [i_0]))))))));
        var_19 |= ((!(arr_0 [i_0 - 2])));
        var_20 = (min(var_20, ((((((arr_0 [i_0]) <= ((min((arr_1 [i_0] [i_0]), (arr_0 [11])))))) ? 17835 : var_5)))));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        var_21 = (min(var_21, ((((arr_2 [5]) ? (arr_2 [i_1]) : ((-((((arr_2 [i_1]) >= 17835))))))))));
        var_22 = (max((7195903444088189662 ^ 17835), (arr_2 [i_1])));
        var_23 = (max(var_23, (arr_2 [i_1])));
        var_24 = (min(var_24, (((~((~(arr_3 [i_1] [i_1]))))))));
    }
    for (int i_2 = 2; i_2 < 9;i_2 += 1)
    {
        arr_7 [i_2] = ((((+((min((arr_4 [i_2]), 0))))) % (max((~17835), (arr_4 [i_2])))));
        /* LoopNest 3 */
        for (int i_3 = 3; i_3 < 10;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 12;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 12;i_5 += 1)
                {
                    {
                        var_25 = arr_8 [i_3] [i_3];
                        arr_17 [i_2] [6] [i_2] [i_5] |= (((arr_10 [i_5]) % var_1));
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 25;i_6 += 1)
    {
        for (int i_7 = 3; i_7 < 24;i_7 += 1)
        {
            {
                var_26 = (-15100 ? (~0) : (min(-34954298, (arr_21 [i_7] [i_7 - 2]))));
                /* LoopNest 3 */
                for (int i_8 = 1; i_8 < 23;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 25;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 1;i_10 += 1)
                        {
                            {
                                var_27 = (~-7918);
                                var_28 = (1984 <= 6270404615187504617);
                                var_29 = (max(var_29, 2658));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
