/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168293
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168293 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168293
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {

                    for (int i_3 = 2; i_3 < 15;i_3 += 1)
                    {
                        var_14 = 1709931943306110467;
                        arr_12 [i_0] [15] [i_3] = -8786241825815880884;
                        var_15 = arr_9 [i_0 - 3] [8] [i_2];
                        arr_13 [i_3] [i_0] [i_2] [7] [i_0] [i_0] = min((((arr_3 [i_2] [i_0]) ? (max(1900633216001356899, (arr_4 [i_0] [i_3]))) : (max((arr_11 [i_0 - 3] [i_1] [14] [i_3 + 3]), -6865027216806992671)))), -8786241825815880884);
                    }
                    arr_14 [0] [i_1] [11] [i_0] = max((arr_7 [i_0 - 2] [i_1] [9] [i_1]), 6013352320006108572);
                    var_16 = (max((arr_7 [i_0 + 2] [i_0] [i_0] [8]), ((9223372036854775807 ? 1709931943306110467 : 4611685468671574016))));
                }
            }
        }
    }
    var_17 = 1709931943306110464;
    #pragma endscop
}
