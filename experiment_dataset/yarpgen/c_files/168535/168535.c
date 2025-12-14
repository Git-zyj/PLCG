/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168535
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168535 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168535
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, (((((min((-1972582018352140796 - -7189150889891925870), var_2))) + var_7)))));

    for (int i_0 = 0; i_0 < 22;i_0 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            var_13 = var_2;

            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                arr_9 [i_0] [i_2] [5] = ((var_3 < (-25843 <= 1336644465)));

                for (int i_3 = 1; i_3 < 21;i_3 += 1) /* same iter space */
                {
                    arr_12 [14] [i_1] [i_2] [i_3] [3] [i_2] = var_6;
                    var_14 = 1336644465;
                    var_15 = (((!var_5) ? var_8 : 1));
                    var_16 -= (254 | 3);
                }
                for (int i_4 = 1; i_4 < 21;i_4 += 1) /* same iter space */
                {
                    var_17 ^= 16;
                    var_18 = ((-(1525526298 > -1336644465)));
                }

                for (int i_5 = 4; i_5 < 20;i_5 += 1)
                {
                    var_19 += (18548 == var_9);
                    arr_19 [12] [12] [i_2] [12] [i_5] |= (!var_7);
                }
            }
            arr_20 [i_0] [2] = ((-((1 ? var_2 : var_5))));
        }
        var_20 ^= -55;
        var_21 = (((((1279465334 ? var_1 : var_7)))) && ((((32 & var_5) ? (1 || 18570) : var_4))));
    }
    for (int i_6 = 0; i_6 < 22;i_6 += 1) /* same iter space */
    {
        arr_24 [i_6] = ((min(((var_11 ? var_1 : 266664406507448126)), 0)));
        var_22 = 2147483640;
    }
    for (int i_7 = 0; i_7 < 22;i_7 += 1) /* same iter space */
    {
        var_23 = ((((min(8452479589722204816, -90))) ? ((((min(56, 1))) ? -8452479589722204817 : ((0 ? var_11 : var_10)))) : 1));
        arr_29 [20] = ((var_0 ? ((((var_5 ? 1279465334 : var_10)) - ((min(var_1, 67108863))))) : ((((((4079864014612493177 ? 1 : 92))) ? 4079864014612493204 : (var_1 | -16384))))));
        arr_30 [i_7] = ((((239 ? 3333667202 : 1279465359))));
    }
    for (int i_8 = 0; i_8 < 22;i_8 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_9 = 1; i_9 < 19;i_9 += 1)
        {
            for (int i_10 = 1; i_10 < 1;i_10 += 1)
            {
                {
                    var_24 |= (((((var_8 & var_9) <= (var_2 / 63))) ? 8492447023504545086 : (var_7 < 3326941239)));
                    var_25 = 1;
                }
            }
        }
        var_26 = (min(var_26, ((min((((var_6 ? var_4 : -147001178))), (((-18556 ? var_2 : var_1))))))));
    }
    #pragma endscop
}
