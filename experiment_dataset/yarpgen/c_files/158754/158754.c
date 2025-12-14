/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158754
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158754 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158754
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            {
                var_17 = (-2147483647 - 1);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {
                            var_18 |= (arr_7 [i_0] [i_3] [i_3]);
                            var_19 *= ((((((-103 ? 3642562725 : (arr_8 [i_3] [22]))))) >= 60));
                            var_20 -= max((min((8448127758341863196 + -103), ((-8448127758341863196 + (arr_2 [i_0]))))), ((min((arr_8 [i_3] [8]), 4035149911))));
                        }
                    }
                }
            }
        }
    }
    var_21 += (max(((4286578688 & (~var_14))), (-2147483647 - 1)));
    var_22 = ((!((((3522769226 + var_0) ? (min(var_4, var_7)) : 44462)))));
    var_23 = (max(var_23, var_15));
    #pragma endscop
}
