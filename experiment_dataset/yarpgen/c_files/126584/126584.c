/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126584
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126584 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126584
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (-6727149112101335451 >= 6727149112101335451);
    var_14 = ((((((~28) ? 6727149112101335448 : (~var_7)))) ? (((((28 ? var_7 : var_4))) ? (~16278359742318660444) : (var_0 | 8))) : (((var_11 | ((var_10 ? 1 : 6727149112101335451)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_4 [i_0] = (((((((arr_2 [i_0] [i_1]) < (arr_2 [16] [i_1])))) + (arr_2 [i_0] [i_1]))));
                arr_5 [i_0] = (arr_0 [12]);
                var_15 = (min(var_15, ((((((((arr_2 [i_0] [1]) ? 1 : 24)) ^ (((224 & (arr_0 [i_1])))))) - (arr_0 [i_0]))))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 16;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_1] [i_0] [i_3] = (4227858432 ? (((-6727149112101335448 ? 235 : 38792))) : 1596559930);
                            var_16 = (max((min(((max((arr_8 [6] [i_1] [i_2 - 1] [i_1] [i_3] [i_2 - 1]), (arr_9 [10])))), ((4274096889 / (arr_10 [i_0] [i_0] [8] [1] [4] [8]))))), ((((arr_7 [i_0] [i_1] [i_2 + 2] [15]) ? -67 : 0)))));
                            var_17 ^= max((((((arr_8 [i_0] [i_0] [i_0] [3] [i_0] [i_0]) ? (arr_9 [i_1]) : -6727149112101335449)))), (((arr_10 [i_3 - 1] [i_2] [i_2 - 1] [0] [i_2 + 1] [i_2 + 2]) ? ((min(6727149112101335448, -125))) : (max((-127 - 1), 24)))));
                            var_18 = (((min((arr_7 [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_2 + 1]), (arr_7 [i_3 - 2] [12] [i_2] [i_2 + 2]))) * (((((-(arr_10 [i_0] [i_0] [i_1] [8] [i_2] [i_3 - 1]))) <= (-102 < 28))))));
                        }
                    }
                }
            }
        }
    }
    var_19 += var_11;
    #pragma endscop
}
