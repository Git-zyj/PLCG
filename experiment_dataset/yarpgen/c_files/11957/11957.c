/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11957
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11957 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11957
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_17 ^= var_4;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_18 = (((((var_9 ? 2663024387 : 25596))) ? var_16 : (((var_8 ? 16384 : -1450260994)))));
                            var_19 = (((((0 ? -248510794 : 16))) ? (-71 & 418445516) : (var_12 == 1)));
                        }
                    }
                }
                arr_13 [i_1] [i_1] = ((((var_9 <= ((var_7 ? -1 : 32)))) ? -var_7 : 2147483647));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 1; i_4 < 14;i_4 += 1)
    {
        for (int i_5 = 3; i_5 < 15;i_5 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 16;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        {
                            var_20 = ((191 ? 65535 : 2147483647));
                            var_21 = ((((((3876521795 ? var_6 : var_16))) ? (!var_8) : var_15)));
                        }
                    }
                }
                arr_27 [i_4] = ((-var_16 ? 27129 : ((((var_13 ? var_4 : (-2147483647 - 1))) / 768))));
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 16;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 0;i_9 += 1)
                    {
                        {
                            arr_33 [i_8] [i_8] [i_4] [i_4] = ((1 ? var_0 : var_1));
                            var_22 = ((88 ? (((!(((8485893859997965148 ? var_1 : 418445500)))))) : 2147483647));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_10 = 1; i_10 < 15;i_10 += 1)
    {
        for (int i_11 = 3; i_11 < 18;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 1;i_12 += 1)
            {
                {
                    var_23 = ((-(-6002570904432345245 + 32761)));
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 1;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 19;i_14 += 1)
                        {
                            {
                                arr_47 [i_10 + 2] [i_10] [i_10] [6] [i_14] = (((-((var_9 ? -9661 : 3876521795)))));
                                var_24 ^= (((var_3 + var_3) + (((-13847 && 1764052838) >> ((((134760457 ? 8485893859997965144 : var_16)) - 8485893859997965133))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
