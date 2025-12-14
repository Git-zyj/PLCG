/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14012
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14012 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14012
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, (min((var_0 + 32756), var_9))));

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        var_11 += ((((((var_3 && 1276) - (0 < var_2)))) ? (max(((var_6 ? var_7 : var_3)), var_4)) : ((((max(var_9, 18296))) ? 0 : ((((arr_0 [2] [i_0]) != -9716)))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    arr_8 [i_1] [i_1] [i_1] [i_1] = (max(var_9, ((max((arr_4 [i_1]), (arr_4 [i_1]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_15 [i_1] [10] = (max(((((min(var_2, 9716))) ? ((-1276 % (arr_9 [14] [i_1] [i_1] [i_1] [i_1] [i_1]))) : ((min(var_5, var_4))))), ((min(var_2, (max(var_2, var_2)))))));
                                arr_16 [i_1] = 8160;
                                arr_17 [i_1] = ((((max(-1276, var_5))) ? ((min((arr_12 [i_0 - 1] [i_1] [i_0 - 1] [i_0 + 1]), var_0))) : 18299));
                                arr_18 [i_1] = (max((var_1 / 32767), (8 - var_0)));
                            }
                        }
                    }
                    arr_19 [i_2] [i_1] [i_1] [i_0 + 1] = var_3;
                }
            }
        }
        var_12 = ((((((var_0 ? -22527 : var_6)) + (arr_14 [2] [i_0 + 1] [i_0] [2] [2]))) - 22072));
    }
    var_13 = (max(var_13, (((var_3 ? (((min(var_1, var_5)))) : var_6)))));
    var_14 = var_7;
    var_15 = var_8;
    #pragma endscop
}
