/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169945
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169945 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169945
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_2 [4] [i_0] = ((!((715432055 || (((5539986222282258596 ? -715432050 : var_0)))))));
        var_10 = ((3102005210296995101 ? 9223372036854775788 : 35111));

        for (int i_1 = 4; i_1 < 10;i_1 += 1)
        {
            arr_5 [10] = ((var_3 ? ((((!var_3) ? (!12906757851427293025) : 715432055))) : ((((((arr_0 [11] [i_1]) % (arr_0 [5] [i_0])))) ? -var_5 : 112))));
            arr_6 [i_0] [i_0] [i_1] = (max(var_4, (min((arr_4 [i_1 - 1] [i_1 + 1]), (arr_1 [i_1 + 2] [i_1 - 4])))));
        }
        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            /* LoopNest 3 */
            for (int i_3 = 2; i_3 < 9;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 12;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 11;i_5 += 1)
                    {
                        {
                            var_11 = ((-((-var_5 ? var_3 : var_3))));
                            arr_21 [i_0] [i_2] = (~-0);
                            arr_22 [i_0] [i_0] [i_2] [i_3] [i_3] [i_5] = (903847223 << (772586347 - 772586346));
                            var_12 = (var_5 - var_8);
                        }
                    }
                }
            }
            arr_23 [i_0] [i_0] [0] = 688306309;
        }
        arr_24 [i_0] = ((-((-var_0 ? var_4 : -4095))));
    }
    for (int i_6 = 0; i_6 < 13;i_6 += 1)
    {
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                {
                    arr_33 [i_6] [i_6] [i_6] = (((((-32763 ? 1 : var_1))) ? 1 : ((13608 ? 62 : ((245 ? 10112431235640299865 : var_5))))));
                    arr_34 [i_6] [i_6] [i_6] [i_8] = (min((arr_28 [i_6]), ((-(arr_29 [i_6])))));
                }
            }
        }
        arr_35 [i_6] [i_6] = (min(((~((~(arr_32 [i_6] [i_6] [10]))))), ((~(arr_30 [i_6] [0] [i_6])))));
        arr_36 [i_6] = (min(20695, 1));
        var_13 = (!var_7);
    }
    var_14 = var_5;
    var_15 = (~((~(51928 & 5539986222282258614))));
    var_16 = ((var_5 % ((var_4 ? ((0 ? var_3 : var_1)) : var_4))));
    var_17 |= (15 / -5);
    #pragma endscop
}
