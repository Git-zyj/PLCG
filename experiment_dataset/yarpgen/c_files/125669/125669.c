/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125669
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125669 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125669
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((-var_13 >= (((var_9 * var_11) % ((var_5 ? var_14 : var_5))))));
    var_18 = (~var_10);
    var_19 = var_8;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_20 = ((!(arr_1 [i_0])));
        var_21 = ((arr_1 [i_0]) ? var_8 : var_10);
        var_22 = (((arr_0 [i_0]) / (arr_0 [i_0])));
    }
    for (int i_1 = 3; i_1 < 20;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 20;i_3 += 1)
            {
                {
                    var_23 |= ((-((~(arr_9 [i_2] [i_2])))));
                    var_24 = ((+(((arr_8 [i_1 - 1] [i_2]) / (arr_2 [i_1 - 2])))));
                    var_25 = (!48);
                    var_26 = (min(var_26, ((min((arr_3 [i_3]), ((-var_3 ? (min(var_6, (arr_9 [i_1 - 3] [2]))) : ((((arr_10 [i_1] [i_1] [i_1]) ? (arr_10 [i_3] [i_2] [i_1]) : var_3))))))))));
                }
            }
        }
        var_27 = (max(((min((arr_3 [12]), (arr_6 [i_1 + 1] [i_1 - 3] [i_1])))), (~4294967295)));
    }
    #pragma endscop
}
