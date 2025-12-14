/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125856
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125856 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125856
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_13 ^= (((0 & 13808) ? (((max((arr_0 [12]), var_6)))) : var_11));
        var_14 = var_12;
        var_15 = ((((max(var_0, var_2))) ^ (2994624092 + 0)));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_16 = ((-(arr_5 [i_1] [i_1])));

        for (int i_2 = 1; i_2 < 22;i_2 += 1)
        {

            for (int i_3 = 1; i_3 < 21;i_3 += 1) /* same iter space */
            {
                var_17 = ((var_8 ? (arr_10 [i_1] [i_3 + 2] [i_2 - 1] [i_3]) : (arr_6 [i_2 + 1] [i_1] [i_3 + 1])));
                var_18 = ((-(arr_5 [i_2 - 1] [i_2 + 1])));
                var_19 = ((!(((4294967295 - (arr_4 [i_1]))))));
                var_20 = (((arr_11 [i_3 + 1] [i_1] [i_3] [i_2 + 1]) ? (arr_11 [i_3 - 1] [i_2] [i_3 - 1] [i_2 - 1]) : (arr_11 [i_3 + 1] [i_2 + 1] [i_3] [i_2 - 1])));
            }
            for (int i_4 = 1; i_4 < 21;i_4 += 1) /* same iter space */
            {
                var_21 = 4527223281131401911;
                var_22 *= -15795970439245978544;
                var_23 = (!-32758);
            }
            for (int i_5 = 1; i_5 < 21;i_5 += 1) /* same iter space */
            {
                var_24 = (((((~(-127 - 1)))) ^ (((arr_7 [i_1]) ? -5427280740465604672 : var_4))));
                var_25 = (arr_7 [i_1]);
                var_26 &= 0;
            }
            var_27 = (((((arr_4 [i_1]) <= (arr_11 [i_1] [i_1] [i_1] [i_2 + 1]))) && ((((arr_11 [i_1] [i_1] [i_1] [i_2]) * (arr_4 [i_1]))))));
        }
    }
    /* LoopNest 3 */
    for (int i_6 = 0; i_6 < 15;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 15;i_7 += 1)
        {
            for (int i_8 = 4; i_8 < 13;i_8 += 1)
            {
                {
                    var_28 = (((((~(max(0, 32767))))) ? (arr_20 [i_6] [i_7] [i_8] [9]) : var_7));
                    var_29 = (((((-15380 / (arr_20 [i_7] [2] [i_6] [i_8 - 4])))) ? (max(8378919793603342594, (arr_20 [8] [i_7] [3] [i_8 - 2]))) : (((3981854642357830388 ? (arr_6 [i_8] [i_7] [i_8]) : (arr_6 [i_6] [i_7] [6]))))));
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 15;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 15;i_10 += 1)
                        {
                            {
                                var_30 = (((((1249970648 ? (12251 <= -4527223281131401935) : 1))) || ((max((arr_10 [i_6] [i_7] [i_7] [i_10]), var_7)))));
                                var_31 = (max((min(2173565691, var_4)), (((113 && (arr_3 [i_8 + 1]))))));
                                var_32 = ((((max(76, 778103555)))) ? ((var_2 ? (max((arr_8 [i_6] [i_7] [i_8]), 1)) : (((max(65521, 1)))))) : 0);
                                var_33 |= ((!(((-(arr_17 [i_6]))))));
                                var_34 = var_3;
                            }
                        }
                    }
                }
            }
        }
    }
    var_35 = (min(var_35, ((max(-16086, var_0)))));
    var_36 ^= ((((max(var_6, (var_2 <= 1)))) ? (((min(-32761, var_5)))) : ((((max(-20764, 4527223281131401910))) ? (max(0, 2121401604)) : var_4))));
    #pragma endscop
}
