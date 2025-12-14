/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121879
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121879 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121879
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((((var_6 * 250) & (((max(var_7, var_14)))))) % var_13));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_17 = (min(var_17, (((-((((((arr_0 [i_0] [i_0]) ^ var_9))) ? (max(var_8, (arr_4 [i_0] [i_1]))) : (((arr_2 [i_0] [i_0]) ? 15 : (arr_4 [i_0] [i_0]))))))))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 12;i_3 += 1)
                    {
                        {
                            var_18 = ((~(arr_6 [i_1] [i_2] [i_2 + 1])));
                            arr_14 [i_0] [i_0] [i_0] [i_0] = ((((((arr_12 [i_0] [i_2 - 1]) ? (var_12 | var_2) : ((((arr_8 [i_0] [i_0] [i_3] [i_3]) < (arr_11 [i_0] [i_0] [i_0] [i_0]))))))) ? (arr_10 [i_3] [i_3 + 3] [i_3] [i_3 + 1] [i_3 + 1] [i_2 - 1]) : -28828));
                        }
                    }
                }
                arr_15 [i_0] = 26244;
            }
        }
    }
    var_19 = var_7;

    for (int i_4 = 2; i_4 < 22;i_4 += 1)
    {
        var_20 = 5892604989352606056;
        var_21 = 0;
    }
    #pragma endscop
}
