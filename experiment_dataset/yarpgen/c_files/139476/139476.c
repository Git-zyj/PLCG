/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139476
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139476 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139476
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                {
                    var_11 = ((((var_5 > (arr_5 [i_2 + 2] [i_2 - 1] [i_2 + 3]))) ? (((((((arr_8 [20] [i_2] [i_1] [i_2]) << (((arr_0 [i_2] [i_2 - 1]) - 9183959148668657047))))) ? (arr_10 [i_1] [i_1] [i_1] [i_1]) : ((var_4 ? var_8 : var_9))))) : (((var_7 & var_10) - (((arr_9 [i_2]) ? var_0 : var_7))))));
                    var_12 = ((((var_7 ? var_9 : (arr_4 [i_2 - 1])))) ? (arr_4 [i_2 + 1]) : (((arr_4 [i_2 + 1]) / var_8)));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 1;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 23;i_4 += 1)
        {
            {
                var_13 = (((182 != 73) && ((((var_5 ? var_8 : (arr_5 [i_3 - 1] [i_3 - 1] [i_3 - 1]))) > (arr_6 [8] [8] [i_3])))));
                arr_17 [i_3] [i_4] = (((((var_7 ? (((var_4 ? var_8 : var_7))) : ((4419052330515759815 ? 5847233431918055772 : 1))))) ? ((((var_0 || (((var_1 ? var_2 : var_6))))))) : (((((var_9 ? (arr_8 [i_3] [i_4] [i_4] [i_4]) : var_9))) ? ((var_6 ? var_9 : var_10)) : (arr_15 [i_4] [1] [i_3])))));

                for (int i_5 = 0; i_5 < 23;i_5 += 1)
                {
                    arr_20 [i_5] [i_4] [i_3] = ((var_2 ? (((((var_1 ? var_2 : (arr_7 [11] [i_4] [i_5])))) ? (((((arr_10 [i_5] [i_5] [i_3] [i_3]) >= var_0)))) : (((arr_9 [i_4]) ? (arr_2 [i_3 - 1]) : var_1)))) : (((((var_8 ? var_0 : var_6))) ? ((var_6 << (var_4 - 47))) : (arr_11 [i_3 - 1] [i_3 - 1])))));
                    arr_21 [i_3 - 1] [i_3 - 1] [i_5] = (var_5 <= var_7);
                }
            }
        }
    }
    var_14 = (var_10 && var_9);
    var_15 = ((var_9 ? ((var_6 ? var_7 : ((var_5 ? var_0 : var_0)))) : var_9));
    #pragma endscop
}
