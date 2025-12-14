/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156210
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156210 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156210
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_4;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] = (arr_0 [i_0 - 1]);
        arr_4 [i_0] = var_2;
        arr_5 [i_0] = (((((var_3 ? (arr_2 [i_0]) : var_6))) ? ((((!(arr_1 [i_0]))))) : var_5));
        var_11 = (~2199023255551);
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        {
                            arr_19 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = var_2;
                            var_12 -= ((((arr_18 [11] [i_3] [i_2] [i_1]) ? (arr_18 [i_1] [12] [12] [i_1]) : (arr_7 [i_1] [i_1]))));
                        }
                    }
                }
                var_13 = (min(var_13, (((-(max((min((arr_15 [i_2] [i_2] [i_1] [i_1] [i_1]), var_6)), ((min(var_0, var_6))))))))));
            }
        }
    }
    var_14 = (max((max(2199023255551, 31)), ((min(var_2, var_0)))));
    var_15 = ((((~((var_2 ? 4092549070 : -1))))) ? (18446741874686296064 - var_8) : var_8);
    #pragma endscop
}
