/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184657
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 ^= var_12;
    var_19 = ((((min(var_9, ((min(3268, var_6)))))) ? var_4 : var_8));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_3 [i_0] = ((((((arr_2 [11] [i_0]) ? (arr_1 [i_0]) : ((2840 ? 3255 : 137438953471))))) > (arr_0 [i_0])));
        var_20 = ((var_3 % (((arr_0 [i_0]) ? (arr_1 [i_0]) : 19441))));
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 4; i_3 < 14;i_3 += 1)
                {
                    {
                        var_21 = (min(var_21, ((min(var_5, (max(var_1, 62257)))))));

                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            var_22 += (arr_12 [i_0] [i_1] [12] [i_1] [i_1] [6]);
                            var_23 = 1;
                            var_24 = ((((max((arr_10 [i_1] [i_1] [i_1] [7] [i_1 + 1] [i_1]), var_11))) ? (arr_5 [i_0] [i_1]) : (arr_6 [1] [1] [i_2] [i_3])));
                            var_25 = (max(var_25, (((((var_5 >> ((((min(8569, 56967))) - 8548)))) <= (arr_8 [i_1] [i_1] [14] [6] [i_1]))))));
                            var_26 -= 1;
                        }
                    }
                }
            }
        }
        var_27 *= (arr_0 [i_0]);
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        arr_16 [i_5] = (((-92 ? 32767 : (arr_8 [i_5] [i_5] [i_5] [4] [i_5]))));
        var_28 = (min(var_28, -11));
    }
    #pragma endscop
}
