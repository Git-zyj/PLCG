/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115046
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115046 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115046
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((~(min((max(var_16, var_7)), 1994864779))));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (((arr_2 [3] [i_0]) ? ((((arr_2 [i_0] [i_0]) % ((var_8 ^ (arr_1 [i_0])))))) : (max((arr_0 [i_0] [i_0]), var_7))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_21 += (arr_5 [7]);
                    var_22 = (((arr_8 [i_1] [i_2]) / (max((arr_9 [i_0] [i_0] [i_0] [i_0]), (arr_9 [9] [i_1] [i_2] [i_2])))));
                    arr_11 [i_0] [i_0] [i_2] [i_2] = ((((((864704029 == 2259873539) % 12742))) <= (min(12740, -1))));
                }
            }
        }
        var_23 = (min(-12740, (((32116 >= 6) + (((arr_5 [i_0]) ? (arr_10 [i_0] [i_0] [i_0]) : 66060288))))));
    }
    /* vectorizable */
    for (int i_3 = 2; i_3 < 22;i_3 += 1)
    {
        var_24 = var_14;
        arr_14 [i_3] = (((arr_13 [i_3 + 2] [4]) ? ((19136 ? -19147 : 19151)) : var_14));
        var_25 = (min(var_25, 12751));
        arr_15 [i_3 + 3] [i_3 + 3] = (arr_12 [i_3] [4]);
    }
    var_26 = 17179869152;
    var_27 = (15872 >= 125);
    #pragma endscop
}
