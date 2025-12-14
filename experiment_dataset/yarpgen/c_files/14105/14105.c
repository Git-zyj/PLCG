/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14105
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {
                            var_10 = (min(var_10, (var_1 > 1)));
                            arr_14 [i_0 + 3] [i_1 - 2] [i_2] [i_1] = ((~(((((~(arr_8 [i_0] [5] [i_1])))) ? ((var_4 ? -769148711 : var_4)) : var_6))));
                            arr_15 [17] [i_1] [i_0] = ((max((arr_1 [i_1 + 1] [i_0 + 2]), (arr_7 [i_0 + 1] [i_1] [0] [i_1 - 2]))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    for (int i_5 = 3; i_5 < 16;i_5 += 1)
                    {
                        {
                            var_11 = (max(((-(arr_8 [i_1] [i_0] [i_1]))), ((max((arr_5 [i_0 - 3] [i_0]), (arr_2 [i_0]))))));
                            var_12 = (max(var_12, 1000064440));
                            var_13 *= 5;
                            arr_22 [1] [i_1] [i_1] [15] [12] [i_1] = (((((-769148701 ? (var_4 != var_2) : 4906312614352285211))) ? var_2 : (min((((arr_0 [11]) ? (arr_3 [i_1]) : (arr_3 [i_0]))), (643076473 > 1292310096)))));
                        }
                    }
                }
            }
        }
    }
    var_14 = ((((min((max(0, var_9)), var_1))) ? 226 : (min(34011737528386783, (((1599356540 ? 323802098 : var_4)))))));
    var_15 = (((min(var_2, (max(var_5, 2197020161))))) ? ((((!((min(var_1, 1))))))) : ((min(84, 3355120008))));
    var_16 = (max(var_0, ((min((min(var_1, var_5)), (((var_8 ? 541620245 : -1295803877))))))));
    var_17 = (min(var_2, 1599356540));
    #pragma endscop
}
