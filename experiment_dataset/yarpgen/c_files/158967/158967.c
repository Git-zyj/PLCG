/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158967
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158967 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158967
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 &= ((((min(-var_10, -32756))) ? ((((min(-32754, 81))) ? 18446744073709551615 : 32749)) : (((-32756 ? 3216075472 : (-7543507152107273556 + -16906))))));
    var_17 += (max(((min(1, 1))), 63892));
    var_18 = 7543507152107273556;
    var_19 = ((var_13 >= (var_6 | var_6)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 17;i_3 += 1)
                    {
                        {
                            arr_13 [i_3] [i_1] [i_1 + 2] [i_0] = var_3;
                            var_20 = -7;
                        }
                    }
                }
                arr_14 [i_0] = ((+(((arr_5 [i_1] [i_1 - 1] [i_1 - 1]) - 1))));
                var_21 = (max(((max(-8223, 79))), (min((min(var_3, (arr_4 [i_0]))), ((min(-1669, (arr_11 [i_0]))))))));
            }
        }
    }
    #pragma endscop
}
