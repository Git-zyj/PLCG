/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127518
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127518 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127518
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((((((59169 ? 1 : -119)) + 202))) ? (((((((min(1, 255)))) > (max(var_11, var_12)))))) : (max(((min(17, 54656))), (min(2147483647, 2147483647))))));
    var_14 *= (!255);
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1) /* same iter space */
                    {
                        var_15 = 4294967295;
                        arr_9 [i_1] [i_1] = (((4133054438 - 17) != 32767));
                    }
                    for (int i_4 = 0; i_4 < 17;i_4 += 1) /* same iter space */
                    {
                        var_16 = (max(var_16, 238));
                        arr_12 [i_4] [i_1] [i_2] [i_1 + 1] [i_1] [i_0] = ((238 ? (65535 ^ -1) : (((max(((!(-9223372036854775807 - 1))), (min(1, 0))))))));
                        var_17 = ((((((min(3666605474244000998, 17))) ? -0 : (max(161912857, 18)))) > (((-(127 && 73))))));
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 15;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 17;i_6 += 1)
                        {
                            {
                                var_18 = ((((((max(255, 0))) ? (~1952033102) : (~1590711006)))) | 9223372036854775807);
                                arr_18 [i_1] = (((((-198 ? 1 : ((1 ? -26127 : -1))))) / -6242137468692943836));
                                arr_19 [i_1] [i_5] [i_1] [i_1] [i_1] [i_0] = ((~((-((1 ? -1425375153 : 55708))))));
                                var_19 = ((~((((max(1, 95))) ? (1 != var_1) : ((255 ? -24905 : 58128))))));
                            }
                        }
                    }
                    var_20 = (((((((-2147483639 ? 34498 : 11)) ^ var_11))) && ((((~1403803220) >> (((36 % 255) - 11)))))));
                    /* LoopNest 2 */
                    for (int i_7 = 2; i_7 < 16;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 15;i_8 += 1)
                        {
                            {
                                var_21 = ((((((1 ? var_4 : -49)))) ? (36 && 5839) : (50681 % 3310486252)));
                                arr_24 [i_7] [i_1] [i_0] [i_1] [i_0] = (max((((((var_8 ? 0 : 2467756309))) ? ((65535 ? 63 : var_10)) : ((var_0 ? var_8 : 0)))), ((~(((-5822 + 2147483647) >> (27890 - 27861)))))));
                                var_22 = ((((!58128) - (var_3 || var_1))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
