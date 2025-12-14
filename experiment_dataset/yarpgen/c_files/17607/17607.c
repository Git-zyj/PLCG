/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17607
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17607 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17607
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        {
                            var_11 ^= ((var_6 + ((var_9 ? var_10 : -8094725859460188014))));
                            arr_12 [i_0] [i_1] [i_2] = 6588392791125297444;
                            arr_13 [i_0] [i_1] [i_2] [i_1] |= (((arr_4 [i_0]) && 8227116803850048423));
                            arr_14 [i_0] [i_0] [i_2] [i_3] [i_3] |= (((((-6778886932027158104 + 9223372036854775807) << (((arr_10 [i_0] [i_1] [i_2] [i_3]) - 9055546213017455552))))) ? ((-(5644236621224820455 % 4503324749463552))) : (arr_10 [i_0] [i_1] [i_0] [i_3]));
                            var_12 = 8093278052677197634;
                        }
                    }
                }
                arr_15 [i_0] [i_1] = max(((var_8 / ((264965918909330673 ? 8093278052677197625 : (arr_9 [i_0] [i_1] [i_0]))))), var_2);
                arr_16 [i_0] = ((((min(8093278052677197625, 627449252723168226)))) ? ((((var_4 != (arr_8 [i_0] [i_0] [i_0]))) ? -7984423335277971200 : -4837294571728947533)) : ((var_2 ? var_5 : ((((var_6 <= (arr_10 [13] [i_1] [i_0] [i_0]))))))));
                arr_17 [i_0] [i_1] [4] |= ((((var_8 ? var_2 : var_9))) - (min(-7068190716994504205, 4331754007757284545)));
            }
        }
    }
    var_13 = -2341694121016478311;
    var_14 = (((var_6 && var_1) && var_7));
    var_15 = ((!(((((var_8 && (-9223372036854775807 - 1))) ? var_7 : ((8093278052677197611 ? var_7 : var_4)))))));
    #pragma endscop
}
