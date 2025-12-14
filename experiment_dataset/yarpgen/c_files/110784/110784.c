/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110784
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110784 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110784
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 9;i_0 += 1) /* same iter space */
    {
        var_15 = (max(var_15, ((min(((((arr_1 [i_0 - 1]) != (arr_1 [i_0 + 1])))), (((var_5 ? var_0 : -120))))))));
        var_16 -= ((min((min(var_10, var_0)), (arr_1 [i_0 - 1]))));
        var_17 &= ((((2147483647 ? -120 : 3007204746781442207))) ? (arr_0 [i_0] [i_0]) : (min((((arr_0 [i_0] [9]) ? 107 : -120)), (119 & var_4))));
        arr_2 [i_0] = 123;
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    {
                        arr_12 [i_1] = (58 <= -127);
                        arr_13 [7] [i_1] [i_2] [5] = (((((((min((arr_8 [1] [1] [9] [9] [i_0]), var_4))) ? -var_7 : ((min(109, var_0)))))) ? (min(var_7, (arr_9 [i_1]))) : ((max((!544810954), 7288925187028275134)))));
                        var_18 += -120;
                    }
                }
            }
        }
    }
    for (int i_4 = 3; i_4 < 9;i_4 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 10;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 10;i_6 += 1)
            {
                {
                    arr_21 [i_4] = ((((((((var_12 ? var_12 : -120))) / ((1527911550 ? 2925991110798805405 : 119))))) ? ((-113 ? (arr_15 [i_4 - 2] [i_4 - 3]) : (arr_14 [i_4 - 1]))) : (((var_2 ^ ((5284807521610390454 ? 119 : var_6)))))));
                    var_19 = max((((arr_20 [i_4 - 3] [i_4 - 3] [i_4 - 3]) >> (-32764 + 32793))), (((((~(arr_17 [i_4]))) >= -119))));
                }
            }
        }
        var_20 = ((((min((arr_19 [7] [7] [i_4 - 2] [2]), (arr_19 [8] [2] [i_4 - 1] [6])))) ? ((-(~-126498925727705382))) : 26));
        var_21 ^= (!(-775939896 / 1));
    }
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 17;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 17;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 17;i_9 += 1)
            {
                {
                    arr_29 [11] [i_8] [1] = ((2147483636 >> (((min((arr_22 [i_7]), (arr_27 [i_7] [i_7] [i_7]))) - 22341))));
                    arr_30 [i_7] [i_9] = (((((((arr_28 [2] [i_8]) ? -126498925727705384 : -120))) ? (max((arr_26 [4] [i_8]), var_10)) : (min(var_13, 775939895)))));
                }
            }
        }
    }
    #pragma endscop
}
