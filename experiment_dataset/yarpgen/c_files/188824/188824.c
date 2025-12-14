/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188824
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188824 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188824
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 7;i_1 += 1)
        {
            {
                var_15 = ((((-5427504059127505645 ? 8028353145806644827 : var_13)) + -8028353145806644828));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        {
                            arr_9 [i_1] [i_2] [i_0] [i_1] = 1927443126;
                            arr_10 [2] [i_1] [i_1] [i_0] = -67;
                            arr_11 [i_0] [i_1] [i_1 + 3] [i_2] [7] = ((!(arr_7 [i_3] [i_2] [i_1] [i_0])));
                        }
                    }
                }
            }
        }
    }
    var_16 = (max(var_16, (((((((((262143 ? -8028353145806644813 : var_2))) ? (9223372036854775807 != 28672) : 2107203744465522492))) ? ((4294938651 ? -8028353145806644827 : ((1073217536 ? -5427504059127505631 : 123)))) : 4611685949707911168)))));
    #pragma endscop
}
