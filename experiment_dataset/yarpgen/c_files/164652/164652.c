/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164652
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164652 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164652
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((min(var_2, (-1 != -2677)))) > var_7));
    var_17 = (((var_0 / (-105 * 101))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_4 [i_1] = (53 != -101);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        {
                            var_18 = (-(max(-101, ((-101 ? (arr_3 [i_3] [i_1]) : 91)))));
                            var_19 = (((!0) ? 16947381866909622707 : 0));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 17;i_4 += 1)
    {
        for (int i_5 = 1; i_5 < 16;i_5 += 1)
        {
            {
                var_20 = ((-2008631475910037720 >= (((var_14 & 63) ? -70 : var_11))));
                arr_17 [i_4] [i_5 - 1] [12] = (min(((9 ? (-9223372036854775807 - 1) : (-32767 - 1))), ((9223372036854775807 ? -74 : (-2147483647 - 1)))));
                arr_18 [i_4] [i_5] [i_5] = ((max(63, -383411057)));
            }
        }
    }
    #pragma endscop
}
