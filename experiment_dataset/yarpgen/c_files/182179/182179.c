/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182179
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182179 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182179
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_2, ((var_4 ? var_6 : var_5))));
    var_16 = 18014398508957696;
    var_17 = (min(var_4, (((var_9 != (!var_3))))));
    var_18 += var_1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_19 &= (((arr_4 [i_0] [i_0]) || 914486737));
                arr_7 [i_1] [i_0] = (((arr_1 [i_0]) ? ((max(var_13, ((var_2 | (arr_0 [16] [i_1])))))) : (var_9 / 914486739)));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {
                            arr_13 [i_0] [5] [16] [i_0] [i_0] [i_0] = (((((arr_0 [i_2] [i_3]) ? var_10 : (((((arr_12 [i_0] [i_1] [i_1] [i_1] [i_1]) && (arr_6 [i_0] [i_1] [i_3]))))))) << (((max(((var_5 ? 914486738 : var_7)), ((var_7 ? (arr_11 [i_0]) : (arr_11 [18]))))) - 1988151491))));
                            var_20 = (((((22970 >= ((-3820 ? var_11 : 41))))) <= ((min(-18412, 18411)))));
                            var_21 = arr_4 [1] [i_2];
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
