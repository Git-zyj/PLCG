/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111755
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111755 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111755
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_7;
    var_16 = (max((var_8 % var_8), (((((1 ? 1 : -45))) ? 75 : ((var_13 ? 4294967292 : var_10))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {
                var_17 = (min(var_17, (((((var_5 ? -3375531262817552471 : var_11)) <= (19138 >= 62469))))));

                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    var_18 = (min((var_5 * -1), ((((0 * 37209) * (24845 - 1))))));
                    var_19 = (min((((!-2) << (((min(var_1, -6074484625583308015)) + 6074484625583308016)))), (~794867090)));
                }
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    var_20 = (max(var_20, (((+(((2259455686 ? (-2147483647 - 1) : 245))))))));
                    arr_8 [i_0] [i_1] [i_0] = (min((~-114), (var_5 >= -30465)));
                }
                for (int i_4 = 0; i_4 < 13;i_4 += 1)
                {
                    var_21 ^= ((-1 ? ((min(var_8, var_1))) : ((((min(197, var_8))) + var_9))));

                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {

                        for (int i_6 = 0; i_6 < 13;i_6 += 1)
                        {
                            arr_17 [2] [1] [i_0] = ((((max((var_2 % 1), var_13))) ? (var_12 != -10458) : ((((min(var_5, 1536))) ? (3025518624 / -3858048991763315575) : 1335246632))));
                            arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] = max((var_9 <= 18446744073709551609), (~var_11));
                        }
                        var_22 = (max(-1, (16936 <= var_3)));
                    }
                }
                arr_19 [i_0] = (((((195800735 ? 9223372036854775807 : 1709204919955224639))) ? (max((~var_2), ((-1 ? var_0 : 4294967295)))) : (~0)));
                var_23 ^= (!0);
            }
        }
    }
    var_24 = (((((((100 != -972238105) >= (!var_11))))) * var_13));
    #pragma endscop
}
