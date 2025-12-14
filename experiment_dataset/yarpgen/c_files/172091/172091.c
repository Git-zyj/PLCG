/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172091
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172091 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172091
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_9;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_0] [12] [12] [7] [i_2] = ((+((((((arr_12 [9] [i_1] [9] [i_2] [i_1] [i_4]) ? var_11 : (arr_5 [i_1])))) ? ((max(var_11, var_18))) : ((-(arr_10 [i_2] [i_2])))))));
                                var_21 = (min(var_21, -var_10));
                            }
                        }
                    }
                    var_22 = (max(var_22, ((((~(arr_11 [i_0])))))));
                    var_23 = -1193639495;
                    var_24 += ((((arr_8 [i_2] [i_2] [i_1] [i_0]) - (var_17 >= var_6))));
                }
            }
        }
    }
    var_25 = (var_17 & 127);
    var_26 = max((~var_6), ((~(var_6 & var_3))));
    var_27 = (~(var_17 != var_10));
    #pragma endscop
}
