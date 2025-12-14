/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138648
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138648 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138648
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_0] [i_0] [i_2] [i_0] &= (9482233263225385371 % 5184017430530982639);
                                arr_14 [i_0] [i_1] [i_0] [i_3] [i_4] = ((((((!(((var_7 ? var_9 : (arr_4 [i_0] [i_3] [i_2])))))))) < ((-5184017430530982665 ? var_16 : ((((arr_2 [i_0] [i_0] [i_0]) / (arr_4 [4] [i_3] [0]))))))));
                                var_17 &= (arr_2 [i_0] [i_1 + 1] [i_1 + 1]);
                                var_18 ^= (min((arr_7 [i_0] [i_0] [i_0] [i_0] [i_2]), 17069));
                                var_19 = (min(var_19, (arr_8 [i_2] [i_2] [i_2] [i_2])));
                            }
                        }
                    }
                    arr_15 [i_0] [i_0] [i_2] = (min(288230371856744448, (arr_9 [i_0] [i_1 - 1] [i_0] [i_2])));
                    arr_16 [i_0] [i_0] [i_0] = (arr_7 [1] [i_0] [i_1 - 1] [i_2] [i_0]);
                    var_20 = ((((max((var_3 > var_0), ((!(arr_1 [i_2])))))) & (arr_8 [i_0] [i_1] [i_2] [i_0])));
                }
            }
        }
    }
    var_21 += (2834234204 && 34359738367);
    var_22 = var_12;
    var_23 -= var_0;
    var_24 = (min(var_24, (((!(((-6179 >= 26) < ((var_10 ? var_5 : var_5)))))))));
    #pragma endscop
}
