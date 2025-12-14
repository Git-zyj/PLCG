/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170705
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170705 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170705
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_13;
    var_19 = (((var_1 / -136908811) + 834238381));
    var_20 = -var_5;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 24;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        var_21 = (((-1 / 65535) + -15));
                        arr_13 [i_0] [i_0 - 3] [i_3] [i_0] [6] [i_0] = (arr_1 [i_0]);
                        var_22 = (min((((((arr_3 [i_0]) ? (arr_9 [i_0] [i_0] [i_0] [12] [12] [i_3]) : 42299)) / (((((-32767 - 1) + 2147483647)) >> (4294967291 - 4294967269))))), (-32767 - 1)));

                        for (int i_4 = 1; i_4 < 24;i_4 += 1)
                        {
                            var_23 += ((var_10 > ((((((arr_15 [i_4 - 1] [i_1] [i_3] [i_0] [i_0] [i_1] [i_0]) & -1625460841))) ? (!-834238380) : (max(var_6, 4294967283))))));
                            var_24 = (max(var_24, ((((arr_7 [i_0]) ? ((((arr_15 [i_4] [i_3] [i_3] [23] [i_1] [i_0 + 1] [i_0]) ? 136908787 : 2147483647))) : ((((834238387 < (arr_4 [i_1] [i_0]))))))))));
                        }
                        for (int i_5 = 2; i_5 < 23;i_5 += 1)
                        {
                            var_25 = (((((min(33, 4294967283))) != var_16)));
                            var_26 = (min(var_26, ((max((arr_1 [i_3]), -22093)))));
                        }
                        var_27 -= (((((var_14 ? var_12 : (arr_4 [i_0 - 2] [i_0 + 3])))) && var_13));
                    }
                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {
                        var_28 ^= ((max((-2147483647 - 1), 14197)));
                        arr_20 [i_0 + 3] [i_6] [i_0] [i_0] [i_0 + 3] = 136908814;
                    }
                    var_29 -= (((!10) ? (max((((arr_0 [i_2 - 1] [i_0 + 1]) & var_5)), 51350)) : ((~(~var_4)))));
                    var_30 |= ((-(max(-9482, (((arr_9 [i_0] [2] [2] [i_2] [18] [i_1]) ? 0 : var_12))))));
                }
                var_31 = 8128;
                var_32 += (((16180949531942412843 * var_3) + var_16));
                arr_21 [i_0] = 0;
                var_33 -= (((min(4294967263, 11493283513459783818)) % -15413));
            }
        }
    }
    #pragma endscop
}
