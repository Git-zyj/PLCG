/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153909
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153909 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153909
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((var_10 + 2147483647) >> (var_10 + 45));
    var_12 = var_4;

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] = ((!(((arr_0 [i_0] [i_0]) < (arr_0 [i_0] [i_0])))));
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    {
                        var_13 = 6922470217205100776;
                        arr_12 [i_0] [i_1] [i_2] [i_3] = ((-(~-20451)));
                        var_14 = (min((((216 ? -20451 : -20451))), 20450));
                        var_15 *= (((~(arr_4 [i_0]))));
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 14;i_4 += 1)
    {
        for (int i_5 = 3; i_5 < 13;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 14;i_6 += 1)
            {
                {
                    var_16 -= ((((((~227) ? 20450 : (arr_16 [8] [8])))) ? -20451 : (!-1)));
                    var_17 += (((var_3 ? -20451 : var_3)));
                    var_18 = (min((((-20433 ? 20433 : -20433))), (20444 / -20442)));
                    var_19 *= (arr_17 [2]);
                }
            }
        }
    }
    var_20 = ((var_3 ? var_10 : (max(-20428, ((20441 ? 20450 : var_5))))));
    #pragma endscop
}
