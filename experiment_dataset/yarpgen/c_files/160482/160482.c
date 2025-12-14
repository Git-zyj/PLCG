/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160482
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160482 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160482
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_14 = ((!(((((max(var_0, 17))) ? 1 : ((var_2 ? var_12 : 9007197107257344)))))));
                var_15 *= (((((var_9 ? var_3 : var_9)) & (arr_1 [4] [i_1]))));
                var_16 &= (!2);
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_17 = (((arr_10 [i_2] [i_3]) != (!var_1)));
                                arr_12 [i_0] [2] [i_0] [i_3] [i_0] [2] [2] = ((9007199254478848 || (var_4 || var_5)));
                            }
                        }
                    }
                }
            }
        }
    }
    var_18 = (-127 - 1);
    var_19 = (max(var_19, ((max(var_3, ((var_4 & (var_3 & var_7))))))));
    var_20 = (!248);
    #pragma endscop
}
