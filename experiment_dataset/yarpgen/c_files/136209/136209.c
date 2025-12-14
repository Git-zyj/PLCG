/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136209
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136209 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136209
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_3 [i_0] = (((((var_1 << (((var_0 + 23682) - 22))))) ? var_2 : var_10));
        arr_4 [i_0] = (((((var_5 ? 1 : 12910836764317815644))) ? ((12910836764317815666 ? 5535907309391735988 : -2191352446460197726)) : (~-2191352446460197705)));
        arr_5 [i_0] = ((var_7 ? 5535907309391735987 : var_1));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {
        arr_8 [i_1] [i_1] = ((var_10 ? ((-2191352446460197695 ? var_2 : 2934905625380819363)) : (var_12 - 5535907309391735980)));
        /* LoopNest 3 */
        for (int i_2 = 1; i_2 < 7;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    {

                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            var_14 -= (var_0 || 84);
                            arr_19 [i_1] [i_2 - 1] [i_3] [i_1] [4] = ((0 ? 103 : 0));
                            arr_20 [3] [3] [i_2] [i_3] [i_2] [i_1] = (var_7 ? 6 : 0);
                        }
                        arr_21 [i_1] [i_2] [i_2 + 1] [i_1] = ((-71 ? 11 : 84));
                    }
                }
            }
        }
    }
    var_15 = var_13;
    var_16 = 188;
    #pragma endscop
}
