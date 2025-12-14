/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186996
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186996 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186996
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(((var_2 ? var_7 : -114)), ((1023 ? (~var_1) : (min(var_10, var_13))))));
    var_18 &= (~var_3);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0 + 1] [i_0] = (((((~(113 < -101266704)))) ? 1 : 158));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_19 -= (((arr_13 [i_0] [i_2]) <= (((var_5 != ((((arr_11 [i_0 + 1] [i_0 + 1] [i_1 + 1] [i_1 + 1] [i_3] [i_3]) ? (arr_6 [i_0 - 1] [i_0 - 1] [i_3] [i_4]) : var_14))))))));
                                var_20 = (((((-12646 ? ((-114 ? 136182659 : 158)) : 2240122426))) || 2));
                            }
                        }
                    }
                }
                var_21 = 0;
                var_22 = (((((~((150 ? 1 : -23486))))) ? -3840 : 0));
            }
        }
    }
    var_23 |= (max((((((365 ? 12658 : 6144))) ? (var_2 * 65535) : 0)), var_11));
    #pragma endscop
}
