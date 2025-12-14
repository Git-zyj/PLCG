/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136954
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136954 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136954
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            arr_7 [i_1] [i_0] [i_0] &= 1;
            arr_8 [i_1] [i_0] = 24588;
            var_14 = (min(var_14, 24590));

            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {

                for (int i_3 = 2; i_3 < 13;i_3 += 1) /* same iter space */
                {
                    arr_15 [i_1] [7] [7] [i_1] [i_1] [i_0] = (((-24588 != (3072 || -3062))));
                    var_15 = ((1 ? 15028941784875561557 : -3062));
                    arr_16 [i_3 + 1] [i_2] [i_2] [i_1] [i_0] = ((24591 ? (((((1 == 3072) >= 32767)))) : 0));
                    var_16 |= 68652367872;
                }
                for (int i_4 = 2; i_4 < 13;i_4 += 1) /* same iter space */
                {
                    var_17 = 32762;
                    arr_19 [i_4] = 15697504752578580033;
                }
                for (int i_5 = 2; i_5 < 13;i_5 += 1) /* same iter space */
                {
                    var_18 = (149 >= -147724638);
                    arr_23 [i_0] [i_1] [i_2] [i_5] |= ((((0 ? -24600 : 288230376151711743))) ? -3062 : 2749239321130971606);
                }
                arr_24 [i_2] = 3411459720;
            }
            /* LoopNest 3 */
            for (int i_6 = 0; i_6 < 16;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 16;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 16;i_8 += 1)
                    {
                        {
                            var_19 = (15 - 3224692546587732364);
                            var_20 &= 1;
                            arr_32 [i_6] [i_1] [12] [i_6] [i_1] = (-24576 || (((((1 ? 24588 : 0))) && -24588)));
                            var_21 |= ((1 ? -24594 : 15222051527121819264));
                        }
                    }
                }
            }
        }
        arr_33 [i_0] = 3224692546587732361;
    }
    var_22 = 3411459714;
    var_23 = ((((-1 ? 5 : 4294967294))));
    var_24 = ((var_9 * (24607 > 34036326)));
    #pragma endscop
}
