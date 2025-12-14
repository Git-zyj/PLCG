/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128567
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128567 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128567
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((((min(1, var_4))))) == var_10));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    var_18 += (!18446744073709551615);
                    var_19 *= (min((1 < 18446744073709551615), 18446744073709551615));
                }
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {
                        {
                            arr_13 [i_0] [i_3] [i_0] [1] = (min((((max(-1, 18446744073709551598)))), (((((32767 ? var_6 : 6381637318198176315))) ? (-32767 - 1) : 134217727))));
                            var_20 = (max(-var_16, ((min(-68, var_11)))));
                            var_21 = (-(max(32761, 896142801)));
                        }
                    }
                }
                arr_14 [i_0] [i_0] = var_15;
                var_22 = max((min(914796342, 18446744073709551615)), (((67 ? 155 : (var_4 <= 1)))));
            }
        }
    }
    var_23 = var_5;
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 12;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 12;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                {
                    arr_24 [i_5] [8] [i_5] = ((-(max(-95, 1))));

                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 12;i_8 += 1)
                    {
                        var_24 = -1;
                        arr_27 [i_8] [i_8] [i_8] [i_8] [i_8] = 2897097017;
                    }
                    for (int i_9 = 0; i_9 < 12;i_9 += 1)
                    {
                        arr_31 [i_5] [i_6] [i_7] [i_9] = (min(var_15, (max(896142801, 0))));
                        var_25 = ((min(var_7, var_3)));

                        for (int i_10 = 0; i_10 < 12;i_10 += 1)
                        {
                            var_26 = (max(var_8, (((min(95, var_3))))));
                            arr_34 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10] [i_10] &= (-51 == 255);
                            arr_35 [6] [i_9] [i_6] [i_5] = min(18421535566469576438, (((6 ? -1544144809 : var_10))));
                            var_27 = (max((1 - 50), ((((min(var_10, -12103))) ? (7443 >= 9) : (min(var_8, 15517704373615092273))))));
                            var_28 = (min(var_28, ((max(2897097044, (min(var_14, var_8)))))));
                        }
                        for (int i_11 = 0; i_11 < 12;i_11 += 1)
                        {
                            var_29 = ((var_4 ? (!var_6) : ((max(-32755, 255)))));
                            var_30 += (max(57, var_11));
                            var_31 = min((((~(~-32767)))), (((1397870252 & 19) ? (~1397870239) : (min(1397870254, 1)))));
                            arr_38 [i_9] [i_9] [i_9] [i_9] [i_9] = 243;
                        }
                        for (int i_12 = 0; i_12 < 12;i_12 += 1)
                        {
                            var_32 = (min(var_32, (((!(((max(4294967295, (-32767 - 1))))))))));
                            var_33 = -46;
                            var_34 |= (min((min(var_14, 2897097044)), var_14));
                            arr_41 [i_6] = var_9;
                        }
                    }
                    /* vectorizable */
                    for (int i_13 = 0; i_13 < 12;i_13 += 1)
                    {
                        arr_45 [i_5] [i_5] [i_5] [5] [i_5] |= var_8;
                        var_35 = -1;
                    }
                }
            }
        }
    }
    #pragma endscop
}
