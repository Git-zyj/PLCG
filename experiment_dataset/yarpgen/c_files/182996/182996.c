/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182996
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182996 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182996
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 -= (min((51951 | var_5), var_15));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1 - 1] [i_0] = var_10;
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {
                            arr_9 [i_0] [i_1] [i_2 - 1] [i_0] = ((-(((var_9 * var_6) * ((min(var_4, (arr_5 [i_0] [i_0] [i_0]))))))));
                            var_18 += ((-32152 ? ((var_0 ? ((min(var_5, 8900))) : 51951)) : ((((arr_7 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1]) == (arr_0 [i_1 - 1]))))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 11;i_4 += 1)
    {
        for (int i_5 = 2; i_5 < 10;i_5 += 1)
        {
            {
                arr_16 [i_4] [i_4] [i_5] = 13607;
                var_19 = (((((((max(1, 13581))) || (arr_5 [i_4] [i_5] [i_5])))) - -13570));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_6 = 1; i_6 < 1;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                {
                    var_20 = (max(((min(var_6, 51954))), (((arr_21 [i_6 - 1] [i_6 - 1] [i_6 - 1]) << (arr_3 [i_6] [i_6 - 1] [i_6 - 1])))));
                    var_21 -= ((var_1 ? ((var_12 | (arr_3 [i_6 - 1] [i_6 - 1] [i_6 - 1]))) : (((arr_18 [i_6 - 1] [0]) ? (arr_25 [i_6 - 1] [i_6]) : var_8))));
                }
            }
        }
    }
    #pragma endscop
}
