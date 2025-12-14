/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133242
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133242 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133242
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_14 = (-1768352057 <= 12755991682819348170);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_12 [i_2] [8] [i_2] [i_2] [i_2] = var_6;
                                var_15 = ((var_5 ? 5690752390890203417 : var_12));
                                arr_13 [i_4] [i_3] [i_2] [i_2] [i_2] [i_0] [i_0] = ((((((5690752390890203446 | (-127 - 1))) < var_1)) ? 64 : -6560481446958660171));
                            }
                        }
                    }
                    arr_14 [i_2] [i_1] [i_1] [i_2] = (-4261980883739071250 / (((~172) ? (~6144) : -1298678511712521826)));
                }
            }
        }
        arr_15 [i_0] [i_0] = 179;
        var_16 ^= ((((((((var_1 ? 5690752390890203460 : var_1))) ? 1 : ((-896899087147834318 ? 12755991682819348186 : 6137))))) ? (!var_9) : 59391));
        var_17 += ((~((var_3 ? var_5 : 19212))));
        var_18 = (((var_5 % var_2) << (-5350 + 5393)));
    }
    var_19 = 255;
    var_20 = ((2199023255551 ? ((((1273240362 > ((min(896899087147834317, -1))))))) : (((~0) ? 18446744073709551615 : 2048))));
    var_21 = (min(-var_5, 59394));
    var_22 = (~2199023255551);
    #pragma endscop
}
