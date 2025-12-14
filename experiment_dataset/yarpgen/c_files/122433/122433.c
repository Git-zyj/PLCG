/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122433
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122433 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122433
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_15 = -784523990147517013;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_16 = (((var_6 ? var_2 : (arr_2 [i_1]))));
                                var_17 |= (max((min((var_9 & var_7), (~-784523990147517014))), (((arr_10 [i_0 - 2]) ? (arr_10 [i_1 + 1]) : (arr_8 [i_1 + 1] [i_2] [i_3] [i_4 + 1])))));
                            }
                        }
                    }
                    arr_12 [i_0] [i_0] [i_0] = (((-784523990147517014 <= 85) ^ (min(-784523990147517008, 14938239672854181593))));
                }
            }
        }
    }
    var_18 = ((((var_2 > var_11) || -var_4)));
    var_19 *= ((var_8 ? ((((var_14 ? 1 : 3508504400855370022)) * 17592186044415)) : var_12));
    var_20 = (min(var_20, ((((min(-7907304139026509125, var_6)) & var_5)))));
    var_21 -= (!var_4);
    #pragma endscop
}
