/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11495
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11495 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11495
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((min(((min(-22434, var_3))), ((1606167273 ? 1103579417 : 2824053691)))) * var_3));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 24;i_2 += 1)
            {
                {
                    var_18 = (((var_5 ? (arr_0 [i_0] [i_1 - 2]) : 22434)));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_19 = 3660540836;
                                var_20 = (max((3660540836 && 1103579417), (!-6250321745486056637)));
                                var_21 = ((((((arr_7 [i_1] [i_1 + 2] [i_2 - 1] [i_4 + 1]) ? (arr_7 [i_0] [i_1 + 2] [i_2 - 1] [i_3]) : 634426472))) ? (max(634426472, (arr_7 [i_0] [i_1 + 1] [i_2 - 1] [i_3]))) : 16276335162121004820));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
