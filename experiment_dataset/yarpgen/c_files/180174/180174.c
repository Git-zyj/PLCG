/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180174
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180174 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180174
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_5;
    var_20 &= (((var_13 >> (var_15 - 16797660530081182708))));
    var_21 = (var_4 - var_13);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = (arr_0 [i_0] [i_0]);
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_22 = (min(var_22, ((((arr_3 [i_4 - 1] [i_0]) == ((((((var_5 ? var_1 : (arr_6 [i_1] [i_1])))) ? var_10 : var_18))))))));
                                var_23 = var_11;
                            }
                        }
                    }
                }
                var_24 = (~30386);
            }
        }
    }
    #pragma endscop
}
