/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124007
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124007 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124007
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                var_12 = ((((arr_1 [i_0] [i_0]) ? var_2 : var_5)));
                var_13 = (~var_8);
            }
        }
    }
    var_14 *= -18151470407946184389;
    var_15 = (min(var_5, (var_6 < var_9)));
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 11;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 11;i_3 += 1)
        {
            {
                var_16 ^= (!var_0);
                var_17 = var_10;
                /* LoopNest 2 */
                for (int i_4 = 2; i_4 < 9;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        {
                            var_18 = (min(var_18, 8160));
                            var_19 = ((var_3 ? (min((((arr_7 [1]) ? 18446744073709551615 : 0)), ((((arr_15 [i_2] [7] [i_2]) ? var_3 : var_6))))) : var_3));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
