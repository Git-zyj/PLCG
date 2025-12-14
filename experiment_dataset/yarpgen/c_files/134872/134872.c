/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134872
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134872 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134872
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((var_6 ? (((var_9 ? var_10 : (var_9 < 3369569546)))) : (max(var_1, var_2))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    var_12 = (((arr_0 [i_0] [i_0]) ? (arr_4 [i_0] [i_1] [2]) : (!var_8)));
                    var_13 = ((min(((min((arr_3 [i_0]), var_3))), (arr_1 [i_0] [i_0]))));
                    arr_8 [i_0] [i_1] [i_0] [i_0] = (max(var_9, (~var_6)));
                    arr_9 [i_0] [1] [13] = ((((!(((~(arr_1 [i_0] [i_2]))))))));
                    arr_10 [8] [i_1] [i_2] |= (~(min(var_1, var_10)));
                }
                var_14 = (((min((arr_5 [i_0]), (arr_5 [i_0]))) ? (arr_5 [i_0]) : (((arr_5 [i_0]) ? (arr_5 [i_0]) : (arr_5 [i_0])))));
                arr_11 [4] [i_1] [i_1] |= (((arr_7 [i_0] [i_0] [i_1]) ? (arr_7 [i_1] [i_0] [i_1]) : var_8));
                var_15 = -var_9;
                var_16 += (min((~-114), ((~(arr_4 [i_0] [i_0] [12])))));
            }
        }
    }
    var_17 = (min(var_17, var_7));
    #pragma endscop
}
