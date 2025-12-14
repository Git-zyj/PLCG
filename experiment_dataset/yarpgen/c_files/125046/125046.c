/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125046
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125046 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125046
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((((~((max(var_0, 167)))))) ? var_10 : 28));
    var_18 = (min(var_18, var_5));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_19 = ((0 ? -46 : 3));
                        arr_13 [i_2] [i_0] [i_1] [i_2] [i_2] [i_3] = (~var_12);
                        arr_14 [i_2] [i_1] [i_1] = (77 ? var_15 : (((arr_2 [i_3]) ? 81 : 11800)));
                        var_20 = ((~(arr_6 [i_2] [i_1] [i_2 + 1] [i_2 + 1])));
                    }
                    var_21 = (max(var_0, ((var_9 ? 112 : 1920))));
                }
            }
        }
    }
    var_22 = (min(var_22, (((var_8 ? var_11 : ((((max(10, var_5))) ? (-18 / var_16) : 1)))))));
    var_23 = (min(var_9, (max(((max(1, -17))), 0))));
    #pragma endscop
}
