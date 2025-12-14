/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178023
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178023 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178023
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        var_15 = (((max(var_8, (max(1, var_10)))) << (var_10 - 15731009041223975778)));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 15;i_2 += 1)
            {
                {
                    arr_7 [i_0 - 2] [i_0] [14] = ((!((!((min(var_3, var_1)))))));
                    var_16 = (min(((max(var_7, (max(var_2, 1))))), ((var_10 / ((1638126562334661160 ? var_5 : var_10))))));
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        var_17 ^= (max(((min((max(var_7, 34390)), (!-2)))), (((((var_2 ? var_4 : var_8))) ? (var_3 | var_11) : (35711 / 2666811431)))));

        for (int i_4 = 0; i_4 < 17;i_4 += 1)
        {
            arr_13 [i_3] [i_4] = ((!(-var_4 * var_13)));
            var_18 = ((!((((((var_6 ? var_8 : -6529))) - ((var_8 ? var_10 : var_9)))))));
        }
        /* LoopNest 3 */
        for (int i_5 = 1; i_5 < 14;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 17;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 17;i_7 += 1)
                {
                    {

                        for (int i_8 = 2; i_8 < 16;i_8 += 1)
                        {
                            var_19 = (((var_12 ? -9128543546036306701 : var_5)));
                            arr_24 [i_3] [i_5] [i_6] [i_7] [i_8] = ((-var_12 ? ((((!((max(var_1, var_0))))))) : (((((-1912682832 ? var_7 : var_6))) + (max(var_5, var_10))))));
                        }
                        var_20 |= var_11;
                    }
                }
            }
        }
    }
    var_21 = ((-(min(var_9, ((var_3 ? var_14 : var_3))))));
    var_22 |= var_10;
    #pragma endscop
}
