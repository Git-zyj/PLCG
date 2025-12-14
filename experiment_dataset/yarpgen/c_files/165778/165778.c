/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165778
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165778 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165778
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_17;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 9;i_2 += 1)
            {
                {
                    arr_10 [i_2] [i_2] [i_2 - 1] = (min((arr_0 [7] [i_0 + 1]), (arr_0 [i_0] [i_0 + 1])));
                    var_21 = (max((((2 ? ((max(var_13, (arr_5 [i_1])))) : (arr_2 [i_0 + 3] [6])))), (min(var_2, (1366302965 / 22)))));
                    arr_11 [i_0] [6] [6] [i_0] = (max(2959, 65521));
                    var_22 = (((arr_0 [i_1] [i_2]) ? (((arr_4 [i_0 + 1] [i_0 + 3]) ? (arr_0 [i_2 + 3] [i_0 + 1]) : (arr_4 [i_0 + 1] [i_0 + 3]))) : 1));
                    arr_12 [i_0 + 3] [i_0 + 3] = ((((~(((arr_4 [i_0 - 1] [i_0 + 2]) ^ var_14)))) / ((~(arr_7 [i_0 - 1] [i_0 - 1] [i_0] [i_2])))));
                }
            }
        }
    }
    var_23 = var_0;
    /* LoopNest 2 */
    for (int i_3 = 2; i_3 < 9;i_3 += 1)
    {
        for (int i_4 = 2; i_4 < 9;i_4 += 1)
        {
            {
                var_24 = var_7;
                arr_17 [i_3] [i_4] |= (var_0 >> (((((((-7908 ? var_16 : 2970))) ? ((((arr_8 [8] [i_4 - 2] [i_4] [i_4]) << (-770717933 + 770717946)))) : var_14)) - 696267)));
                /* LoopNest 2 */
                for (int i_5 = 3; i_5 < 9;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 8;i_6 += 1)
                    {
                        {
                            var_25 = 9070;
                            arr_23 [i_6] [1] [1] = (arr_2 [i_3] [3]);
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
