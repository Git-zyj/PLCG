/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185030
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_3;
    var_20 &= 58986;

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_21 |= arr_2 [i_0];
        var_22 -= (~var_17);
        var_23 *= (arr_2 [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        var_24 = (max(var_24, (arr_5 [i_1])));
        var_25 = (max(var_25, (~var_6)));

        for (int i_2 = 3; i_2 < 24;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 25;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 21;i_4 += 1)
                {
                    {
                        var_26 += var_18;
                        var_27 = (!var_5);
                        var_28 |= (((arr_7 [i_2 - 2] [i_2 - 1]) ? (arr_8 [i_1] [i_2]) : ((var_1 ? 9150574464562618069 : var_17))));
                        var_29 = (arr_3 [i_3] [i_3]);
                    }
                }
            }
            var_30 -= (((arr_11 [i_2 - 2] [i_1] [i_1] [20]) ? 11801 : (-2147483647 - 1)));
            var_31 = ((!(((var_2 ? (arr_16 [i_2 - 3] [9] [9]) : (arr_10 [i_1] [i_1] [i_1]))))));
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 25;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 25;i_6 += 1)
                {
                    {
                        var_32 = var_12;
                        var_33 ^= (((arr_5 [i_2 - 3]) ? (arr_5 [i_2 - 1]) : (arr_5 [i_2 - 3])));
                        var_34 = 106;
                    }
                }
            }
        }
    }
    var_35 = (!-6158753047235224219);
    #pragma endscop
}
