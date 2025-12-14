/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137247
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 ^= ((((max((var_4 >= var_5), var_2))) && var_13));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            {
                var_15 += (((arr_2 [i_0] [i_1 + 2]) != (arr_4 [i_0] [i_0])));
                var_16 = (-1 ? 1482554177 : 18446744073709551607);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 23;i_3 += 1)
                    {
                        {
                            var_17 -= (arr_4 [18] [i_1]);
                            var_18 = ((3 ? -8 : (((var_10 ? var_10 : var_3)))));
                        }
                    }
                }
                var_19 ^= ((((var_3 ? var_9 : ((18446744073709551607 ? -1766513187033621625 : (arr_11 [i_0] [i_1] [7]))))) == (arr_3 [i_0])));
            }
        }
    }
    var_20 = (1766513187033621610 != (((207 ? -var_4 : var_12))));
    #pragma endscop
}
