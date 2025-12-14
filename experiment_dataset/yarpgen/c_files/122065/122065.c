/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122065
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122065 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122065
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        var_19 = (min(var_19, (((~((max(1, 1))))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_20 = ((((var_5 ? var_5 : ((max(var_12, var_7))))) >> (!var_6)));
                                var_21 = (max(var_21, ((((var_18 ? var_11 : var_14))))));
                                var_22 = ((max(var_9, var_6)));
                            }
                        }
                    }
                    var_23 = (((32767 | 1) ? (var_16 != 12134250850473756651) : 1));
                }
            }
        }

        for (int i_5 = 0; i_5 < 23;i_5 += 1)
        {
            var_24 = (((var_16 || var_6) << ((((-11533 ? 4294967286 : 1)) - 4294967261))));
            var_25 = (min((max(var_14, (~var_7))), ((857877210 ? 1 : 1))));
            var_26 &= (((var_17 ? var_17 : var_18)));
            var_27 = min((min(var_14, ((var_3 ? var_1 : var_0)))), ((var_7 ? ((max(var_17, var_11))) : var_9)));
        }
        var_28 *= ((((min(var_16, var_13))) ? var_12 : (var_2 < var_11)));
        var_29 = (((var_2 ? var_15 : var_4)) << (0 || 1));
    }
    var_30 |= var_18;
    var_31 -= var_1;
    #pragma endscop
}
