/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17624
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17624 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17624
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_13 = (min(var_13, (((var_5 ? ((-var_6 ? (arr_2 [i_0] [i_0] [7]) : 576460752303423487)) : var_10)))));
                    var_14 ^= (arr_2 [i_2] [i_0] [i_0]);
                    var_15 = ((((max(0, ((-16 ? var_11 : var_12))))) / ((max(var_9, (arr_5 [i_2] [i_2] [5] [i_0]))))));
                }
            }
        }
    }
    var_16 &= (var_3 / var_4);
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 1;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            {
                var_17 = (max(var_17, (((((arr_7 [i_3 - 1] [i_3 - 1]) <= (!199)))))));
                var_18 = (max(var_18, (((((max((arr_9 [i_3 - 1]), (arr_9 [i_3 - 1])))) ? (arr_9 [i_3 - 1]) : (((var_3 + 2147483647) >> (((arr_9 [i_3 - 1]) - 312447708)))))))));
                var_19 += (arr_12 [i_3] [i_3] [i_4]);
                var_20 -= (arr_12 [i_3 - 1] [i_4] [i_3 - 1]);
            }
        }
    }
    var_21 = ((var_12 ? (((var_4 / var_2) % 40688)) : (max(((-18 ? var_8 : var_2)), 55))));
    #pragma endscop
}
