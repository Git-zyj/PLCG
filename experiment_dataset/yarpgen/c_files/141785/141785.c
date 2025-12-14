/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141785
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141785 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141785
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_3;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [i_0] [i_2 - 1] = (max(((min((arr_3 [i_1 - 1]), (arr_3 [i_2 + 1])))), (((arr_3 [i_1]) ? (arr_3 [i_0]) : (arr_3 [i_1 - 1])))));
                    arr_10 [i_0] [i_0] [i_0] [i_2] = 59370;

                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        var_20 = (((((~(arr_5 [i_1 - 1] [i_1] [i_2 + 1])))) ? 59391 : (((arr_7 [i_2 + 1]) ? (arr_7 [i_3 - 1]) : (arr_5 [i_0] [i_2 - 1] [4])))));
                        arr_15 [8] [i_1 - 1] [i_1] [i_2] = ((((-(arr_2 [i_1 - 1] [i_2 + 1] [i_3 - 1]))) | (((arr_2 [i_1 - 1] [i_2 + 1] [i_3 - 1]) ? (arr_2 [i_1 - 1] [i_3] [i_3 - 1]) : (arr_2 [i_1 - 1] [i_1 - 1] [i_3 - 1])))));
                    }
                    var_21 = ((((min((arr_6 [i_2 + 1] [i_1] [i_0]), (arr_8 [i_0])))) + (((-7798719521759719170 - 59391) + (arr_5 [i_0] [i_1] [i_2])))));
                }
            }
        }
    }
    var_22 = (~var_2);
    var_23 = (max(var_5, var_7));
    #pragma endscop
}
