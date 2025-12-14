/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122079
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122079 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122079
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 0;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_18 = (222 ? (((arr_3 [i_0]) ? 173 : -1736705660)) : (((240 - 1) * ((min(1, var_8))))));
        var_19 |= ((var_5 << (var_9 < var_2)));
    }
    var_20 = ((~(((20 ^ var_4) ? (min(1736705660, var_6)) : var_15))));
    /* LoopNest 2 */
    for (int i_1 = 1; i_1 < 11;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    for (int i_4 = 3; i_4 < 11;i_4 += 1)
                    {
                        {
                            var_21 = (((((((((arr_1 [i_1 + 3]) ? var_1 : 137074061))) ? 1 : (-2147483647 - 1)))) / (max(var_8, (arr_7 [6] [i_3] [i_3])))));
                            var_22 = ((((max((arr_0 [1]), (((arr_3 [8]) % var_3))))) ? (max((((var_11 >> (var_3 - 7010516541944077317)))), var_2)) : 57));
                        }
                    }
                }
                var_23 = ((1804095616197289698 < (~1)));
                arr_16 [6] [4] [4] &= 1529585630;
            }
        }
    }
    var_24 = (((min(var_3, var_11))) ? (((!var_4) ? var_11 : (2147483647 | var_12))) : var_2);
    #pragma endscop
}
