/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129452
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129452 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129452
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_15 = ((((7179 && (((13082407055752119917 ? 576460752303423488 : 9007199254740991))))) ? 3 : 0));
                var_16 = (arr_1 [i_1]);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        {
                            var_17 = ((((((~(arr_0 [i_0]))) + 2147483647)) << ((((((var_8 ? 32757 : (arr_12 [i_0] [i_0] [i_0] [i_1]))))) - 32757))));
                            var_18 = (max(20, (min(9007199254740992, 8))));
                            arr_13 [i_3] [i_3] [i_2] [i_3] [i_3] &= (min(((13364 - (var_12 - 923308023))), (((-(var_5 - var_10))))));
                        }
                    }
                }
            }
        }
    }

    for (int i_4 = 3; i_4 < 19;i_4 += 1)
    {
        var_19 = (603960305999379871 * 0);
        arr_16 [i_4] = ((((var_4 > (arr_15 [i_4] [i_4 + 2])))) >> (-1 + 17));
    }
    for (int i_5 = 0; i_5 < 20;i_5 += 1)
    {
        var_20 = (arr_17 [i_5] [i_5]);
        arr_20 [12] [i_5] &= (((((18437736874454810625 ? var_6 : (arr_14 [i_5])))) ? (arr_17 [i_5] [i_5]) : (((arr_17 [i_5] [i_5]) / (arr_17 [i_5] [i_5])))));
    }
    for (int i_6 = 0; i_6 < 16;i_6 += 1)
    {
        var_21 = (max(25903, ((-46 ? (arr_10 [i_6] [i_6] [i_6] [i_6]) : -1269048953487208199))));
        var_22 -= ((((((arr_4 [i_6] [i_6]) || var_5))) | ((max((arr_10 [i_6] [i_6] [i_6] [i_6]), var_9)))));
    }
    #pragma endscop
}
