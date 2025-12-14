/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162071
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162071 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162071
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                {
                    var_20 += (((max(((var_9 ? var_11 : var_8)), 1))) & ((var_5 ? (max(var_9, var_6)) : var_16)));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_21 = ((((((((82 ? 0 : 6089272694796035960))) ? (((min(var_4, (arr_4 [i_1 - 1] [i_1 - 1] [i_0]))))) : (var_3 - -6089272694796035960)))) ? (((((((arr_9 [i_0] [i_1] [3] [i_3] [i_4]) ? var_7 : var_2)) == (~var_1))))) : (((((-31738 ? 1 : var_5))) ? (((var_14 ? -6089272694796035966 : var_15))) : (~var_13)))));
                                arr_12 [i_0] [i_0] = (arr_0 [i_0] [i_2 + 1]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 -= var_7;
    var_23 = ((var_10 <= (max(((var_5 ? var_18 : var_10)), (var_11 % var_5)))));
    #pragma endscop
}
