/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117893
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117893 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117893
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (var_13 ? var_7 : ((var_1 ? var_5 : 0)));
    var_19 = var_6;
    var_20 = 4294967295;
    var_21 = var_13;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_22 = (((((((~(-127 - 1))) / ((-111 ? 49984 : 49972))))) ? 65280 : ((var_2 ? (((var_2 ? (arr_11 [i_0] [i_1] [i_2] [i_4]) : 0))) : (min(var_6, (arr_14 [i_0] [i_1] [i_0] [i_3])))))));
                                var_23 += -26;
                            }
                        }
                    }
                }
                arr_16 [i_1] = (-127 - 1);
                var_24 |= (arr_5 [i_0]);
            }
        }
    }
    #pragma endscop
}
