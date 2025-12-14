/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165793
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165793 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165793
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((!(((-3982191812955575293 ? -4693992401427566885 : -39))))) ? 4294967295 : var_15));
    var_18 = (max(var_18, 1));
    var_19 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 13;i_3 += 1)
                    {
                        {

                            for (int i_4 = 4; i_4 < 11;i_4 += 1)
                            {
                                arr_12 [i_0] [i_0] [0] [i_3] [i_4] = (var_2 >> (var_12 && 0));
                                var_20 = (((0 == -4693992401427566885) % (arr_10 [i_1 - 2] [i_1 + 2] [i_1] [i_1 - 2] [i_3] [i_1])));
                                var_21 += (arr_5 [i_0] [2] [1]);
                                var_22 = 84;
                            }
                            var_23 = (var_13 * -var_8);
                            var_24 = (arr_3 [i_2 + 1]);
                            arr_13 [i_3] [11] [11] [i_3] = ((+(max((arr_10 [i_0 + 1] [i_0] [i_1] [i_2 - 3] [i_3] [i_2]), (arr_10 [i_0 + 2] [i_0] [i_0] [i_2 - 3] [i_3] [i_0])))));
                        }
                    }
                }
                var_25 = ((((((arr_8 [i_0] [i_1] [i_1 - 2]) && var_13)) ? (max(-1, 18446744073709551615)) : 84)) * var_4);
                arr_14 [1] = ((0 ? ((((((arr_6 [i_0] [i_0] [0] [10]) ? -6743946077011975711 : -39))) ? (172 == var_8) : (max(18274562062317015354, 99)))) : 1));
            }
        }
    }
    var_26 = ((((~(var_9 | var_9)))) ? var_11 : ((((max(2266433035, var_6))) ? var_12 : (((var_5 ? var_1 : var_16))))));
    #pragma endscop
}
