/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143299
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143299 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143299
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_19 = (((min((15360 - -52), -28)) + 28));
                                var_20 = ((52 ? 65535 : (((!(-32767 - 1))))));
                                arr_15 [i_2] [i_1] [i_2] [i_3] [i_4] = 732123978;
                            }
                        }
                    }
                    arr_16 [i_2] [i_0] [3] = (min(54, (!114)));
                }
            }
        }
    }
    var_21 -= ((((((732123980 >= 17) * 0))) ? (max((((255 ? 65518 : 32767))), (min(732123978, 65516)))) : ((((min(32767, 124)))))));

    for (int i_5 = 0; i_5 < 21;i_5 += 1)
    {
        var_22 = -1;
        var_23 = min((1 - 3562843297), (max(1211999054, -35)));
    }
    for (int i_6 = 0; i_6 < 18;i_6 += 1)
    {
        var_24 = (1 ? (min(-8192, ((17 ? 1 : 45)))) : (65518 & 65519));
        var_25 *= (((((min((48 || 11114324566000089419), 0)))) > ((((max(18356868341683225930, -1))) ? -64 : ((min(4294967295, 0)))))));
    }
    for (int i_7 = 2; i_7 < 16;i_7 += 1)
    {
        var_26 = ((!((((0 ? 65518 : 2713544429))))));
        var_27 ^= (min(((65535 ? ((min(1581422867, 45))) : (min((-127 - 1), 11039531805112113942)))), 65535));

        for (int i_8 = 2; i_8 < 17;i_8 += 1)
        {
            var_28 = ((!((min((max(32704, 0)), (0 == 18446744073709551615))))));
            arr_27 [12] = (min((min((0 == -7394425463712106149), 1)), (min((((117 >> (-1 + 23)))), (min(18446744073709551615, 0))))));
        }
    }
    var_29 = (max(var_29, ((max(-9223372036854775807, (((((max(65535, 1))) ? (!-105) : var_18))))))));
    #pragma endscop
}
