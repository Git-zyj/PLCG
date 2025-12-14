/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17234
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17234 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17234
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (-12705 - 976661767);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {
                            var_13 = (min(var_13, (((~(((!(10075 + 60742883)))))))));
                            var_14 &= ((((min((arr_7 [i_0] [i_1] [i_2]), ((0 ? var_1 : (arr_6 [i_2] [i_2])))))) ? ((((976661767 ? 1 : (arr_8 [i_0] [i_1] [i_2] [i_3]))))) : 1781742567));
                        }
                    }
                }
                var_15 = ((!((((((arr_4 [i_0] [i_1] [i_0]) ? 1 : (arr_11 [i_0] [i_0] [i_1])))) && ((((arr_6 [i_0] [i_1]) ? 976661767 : -265904043)))))));
                var_16 = (max(var_16, ((((min((min((arr_6 [2] [2]), 1)), 0))) ? (((var_8 >= (arr_4 [i_0] [i_1] [i_0])))) : (((arr_4 [i_0] [i_0] [i_1]) ^ (arr_4 [i_0] [i_1] [i_0])))))));
                var_17 = (min(700228439, ((max(1856483826, (arr_2 [i_0] [i_1]))))));
            }
        }
    }
    var_18 = (!3318305537);
    #pragma endscop
}
