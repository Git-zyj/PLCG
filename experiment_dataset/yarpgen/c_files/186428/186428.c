/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186428
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((((!(701846530 < var_11))))) ^ (min(var_9, (!var_13)))));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_20 = ((var_5 >= ((((arr_0 [i_0] [0]) / 12273)))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                {
                    var_21 = ((((-1 ? -31565 : 12273))) ? ((((max(409797528, (arr_5 [i_0] [11] [i_1] [i_2])))) ? (min(var_7, 55093)) : -12274)) : 1273022052);
                    arr_8 [i_1] = (((((((arr_5 [i_0] [i_0] [i_1] [12]) ? 63675 : var_3))) ? (((-89 / (arr_7 [1] [7] [15])))) : (min((arr_2 [3] [i_0] [9]), -6207)))));
                    var_22 = ((!12273) ? ((~(arr_7 [i_2 + 2] [i_1] [i_2]))) : (((arr_5 [i_0] [i_2 - 1] [i_2 - 1] [i_2 + 1]) ? (arr_5 [i_0] [i_2 + 1] [i_2 + 2] [i_2 - 1]) : 30551)));
                }
            }
        }
        arr_9 [i_0] [i_0] = ((!(((167622141 ? 361299186 : (arr_1 [i_0] [i_0]))))));
        var_23 = ((~((2070885781 ? ((var_16 ? (arr_1 [i_0] [12]) : 1)) : 1))));
        var_24 = (min(51233, -32105));
    }
    for (int i_3 = 0; i_3 < 20;i_3 += 1)
    {
        arr_12 [i_3] = ((3933668110 ? 24301 : -24007));
        var_25 = (max(var_25, (!255)));
    }
    #pragma endscop
}
