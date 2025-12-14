/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114532
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_6;
    var_17 = ((var_7 ? ((((((1 ? var_8 : var_3))) ? ((var_7 ? var_12 : var_8)) : var_7))) : var_6));
    var_18 = (min(((((min(var_13, -64))) ? 59 : var_12)), var_1));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 12;i_3 += 1)
                    {
                        {
                            arr_11 [13] [i_1] = (((((arr_10 [11] [9] [i_2]) ? 3954232241994094386 : (arr_3 [i_0])))) ? (var_2 + 84) : var_10);
                            arr_12 [i_0] [i_0] [i_1] [11] = var_9;
                            arr_13 [i_1] = (((arr_7 [5] [i_3 + 2] [i_3 + 1] [i_3 + 1]) / (((85 < 3954232241994094390) % (max(64628, -7031730509531786714))))));
                        }
                    }
                }
                arr_14 [i_1] = (arr_6 [i_1 - 2] [i_1 - 1] [i_1 - 2]);
            }
        }
    }
    #pragma endscop
}
