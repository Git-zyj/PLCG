/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168120
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 ^= (((((var_2 | ((min(0, 1)))))) ^ -14014619526597247203));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_13 -= (max((((((max(9223372036854775797, 32740))) && ((((-5741911974849381600 + 9223372036854775807) << (56203 - 56203))))))), 0));
                                var_14 = (max(var_14, ((max(8191, 8388607)))));
                                var_15 = (((-(min(18385458044192394120, 2147483647)))) ^ (((((min(18446744073709551593, -7)) == 69)))));
                                arr_12 [i_4] [i_4] [i_2] [4] [i_0] = ((((((-(min(16384, 255)))) + 2147483647)) << (((max((min(17179869183, 36427)), (((0 ? -4695788496047497106 : 127))))) - 36427))));
                                var_16 ^= (min(0, 8589934591));
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_5 = 2; i_5 < 18;i_5 += 1)
                    {

                        for (int i_6 = 0; i_6 < 20;i_6 += 1)
                        {
                            var_17 = (max(var_17, ((243 & (56203 ^ 1)))));
                            var_18 = 65528;
                        }
                        for (int i_7 = 2; i_7 < 19;i_7 += 1)
                        {
                            var_19 = 18;
                            var_20 = (--56194);
                            var_21 = ((-70368744177663 % (-1 % 274869518336)));
                            var_22 += (56190 == -8388630);
                        }
                        var_23 = (((~18446744073709551613) != 0));
                        var_24 = (1 << 0);
                        var_25 = (((864691128455135232 / 4396972769280) * (-12 && 0)));
                    }
                    arr_20 [i_0] [i_0] = (56203 - (251 | 16384));
                    var_26 = (max(var_26, 4294967287));
                }
            }
        }
    }
    var_27 += (max((min(-0, ((max(-111, 118))))), ((min(-32, -65528)))));
    #pragma endscop
}
