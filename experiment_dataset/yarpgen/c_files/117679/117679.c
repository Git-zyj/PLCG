/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117679
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117679 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117679
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 -= -1;
    var_13 = (max(var_13, var_11));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_14 += ((((!(51537 && 172969480))) || (((max((arr_3 [i_0] [i_0]), (arr_1 [i_0] [i_1])))))));
                arr_5 [5] = ((min((((arr_2 [i_0] [i_0]) ? (arr_3 [i_0 + 1] [i_0 + 1]) : (arr_2 [i_1] [i_1]))), (((!(arr_2 [i_0] [i_0])))))) % (max(((var_9 ? (arr_3 [i_0] [i_0]) : (arr_4 [1]))), (min((arr_0 [i_0 - 1]), var_6)))));
                var_15 = (((((~(arr_4 [i_0 + 1])))) - var_2));
                var_16 *= (arr_4 [4]);
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 2; i_2 < 23;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 22;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 24;i_4 += 1)
            {
                {
                    arr_14 [i_2] [i_3] [i_4] [i_3] |= ((((min((min(var_3, (arr_6 [i_4] [i_3 + 1]))), (arr_12 [21] [i_3 + 1] [i_3])))) ? ((((((1 ? var_6 : (arr_10 [i_3 - 1])))) ? -32 : (arr_8 [i_4])))) : (max(-1, 20))));
                    arr_15 [13] [i_2] [18] [1] = (min((arr_10 [i_4]), var_0));
                }
            }
        }
    }
    var_17 = (max(var_17, ((((~((var_11 ? var_10 : var_9))))))));
    #pragma endscop
}
