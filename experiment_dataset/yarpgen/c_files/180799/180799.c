/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180799
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180799 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180799
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_10 [1] [i_1] [3] = ((((((min(var_13, var_14))))) ? ((-((min(var_14, var_6))))) : -0));
                    var_20 ^= -1922006848;
                    var_21 = (min(var_21, ((~(((var_10 & 1) & (~50)))))));
                    var_22 = (max(var_22, (((((max(((var_11 ? (arr_8 [i_1] [i_1] [i_1]) : (arr_3 [i_0]))), ((var_0 ? var_3 : (arr_8 [i_0] [i_1] [i_2])))))) ? ((min((min((arr_8 [i_0] [i_0] [i_0]), 1)), ((min((arr_2 [i_0]), 1)))))) : ((-(max(1, var_0)))))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 14;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 14;i_4 += 1)
        {
            {
                var_23 = ((((max(1, var_12))) >= (((((min(23279, var_16))) >= 131071)))));
                /* LoopNest 2 */
                for (int i_5 = 2; i_5 < 11;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 14;i_6 += 1)
                    {
                        {
                            var_24 = (min(var_24, (((22721 ? -1 : -1)))));
                            var_25 = ((-27592 ? 5 : 22721));
                        }
                    }
                }
                arr_24 [i_3] [i_3] [i_3] = (max((((((1 ? -1030500661 : (arr_8 [i_4] [i_3] [i_3])))) ? ((min(9, 1))) : ((max((arr_20 [i_3] [i_3] [i_3] [i_3] [i_4]), (arr_15 [i_3] [i_4] [i_4])))))), (max(((~(arr_4 [i_3] [i_4] [i_4]))), ((((arr_5 [i_3] [i_3]) == var_12)))))));
                arr_25 [1] [1] [i_4] = (max(((((23966 ? 1413 : var_13)) / (min(65531, var_12)))), (min(((var_18 ? 1 : var_19)), (1 <= -432300878)))));
            }
        }
    }
    var_26 = (40 / 1);
    var_27 = (~(max(-19, ((var_13 ? 0 : -22747)))));
    #pragma endscop
}
