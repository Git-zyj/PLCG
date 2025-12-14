/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151057
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151057 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151057
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_15 = (min(var_15, (~255)));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 24;i_4 += 1)
                            {
                                var_16 = (max(var_16, ((min(14569972574633414272, -583697189)))));
                                var_17 = min(((min((arr_2 [i_0]), (arr_2 [i_1])))), (((arr_1 [i_0]) >> ((min(1, var_10))))));
                            }
                            var_18 = (arr_3 [i_0]);
                            var_19 = ((255 + ((1937753160149024695 ? (((!(arr_1 [i_0])))) : (3876771499076137343 || -78)))));
                            var_20 = (arr_3 [i_0]);
                        }
                    }
                }
                var_21 = (((arr_3 [i_0]) ? ((((var_9 || (arr_3 [i_0]))))) : (arr_10 [i_0] [i_1] [i_0] [i_1])));
            }
        }
    }
    var_22 = (max(var_22, (((1 + ((var_6 ? var_13 : 1)))))));
    #pragma endscop
}
