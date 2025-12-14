/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149823
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149823 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149823
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_16;
    var_19 = min((((~var_15) * 0)), var_5);
    var_20 = ((var_7 ? (((232 != -4096) >> (var_3 + 22626))) : ((var_16 ? var_3 : (7 > 120)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_21 -= (max((min(247, (((arr_1 [i_1]) % (arr_5 [i_0] [i_1] [i_0]))))), ((((((arr_1 [i_0 + 1]) ? 189 : (arr_2 [i_0] [i_1]))) <= 158)))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            var_22 ^= (((~-27688) == 27687));
                            arr_12 [i_0] [3] [i_0] [i_3] [i_0] [i_2] = arr_10 [i_3] [i_3] [i_0 + 1] [i_1];
                            var_23 += (max((arr_10 [i_0] [i_0] [i_0] [i_0 + 1]), (max(var_17, (arr_7 [i_0] [i_1] [10] [10])))));
                        }
                    }
                }
                var_24 = ((((-4143857989 ? 2258200162 : (5 < 189))) + 100));
            }
        }
    }
    var_25 -= var_6;
    #pragma endscop
}
