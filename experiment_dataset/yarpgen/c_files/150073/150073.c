/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150073
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150073 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150073
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_10 = (var_1 * 2381818656373992413);
                var_11 ^= ((((((arr_1 [i_0]) % (arr_5 [i_0] [i_0] [i_1])))) ? (max(-86, -16)) : (~-1044826300)));
                var_12 -= ((max((((!(arr_4 [1] [i_1] [i_0])))), (~-124))));
                var_13 = (((-1 ? 54439 : (arr_2 [i_1]))));
            }
        }
    }
    var_14 = ((((((var_7 ? var_2 : var_3)))) >= var_6));
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        for (int i_3 = 4; i_3 < 20;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 22;i_4 += 1)
            {
                {
                    arr_16 [20] [i_4] [i_4] [i_4] = (min(1, (((3760 * (arr_3 [i_3]))))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 22;i_6 += 1)
                        {
                            {
                                var_15 = (max(var_15, (~1)));
                                var_16 = ((!((((arr_1 [i_3 - 3]) - (arr_20 [i_5] [i_3 - 4] [i_3] [i_3 - 1] [i_4] [21]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
