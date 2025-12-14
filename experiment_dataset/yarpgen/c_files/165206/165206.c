/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165206
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165206 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165206
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_16 = ((((min((arr_0 [i_0]), ((-4229209012423835904 ? 0 : 3492187303))))) ? ((max((((arr_0 [i_0]) ? var_15 : 25877)), var_7))) : (min((((3492187299 ? var_5 : (-127 - 1)))), var_9))));
        var_17 *= var_6;
        var_18 = 2736615041415904802;
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 1; i_2 < 13;i_2 += 1)
        {
            arr_7 [12] [i_1] [i_1] &= (arr_3 [1] [i_2]);

            for (int i_3 = 1; i_3 < 11;i_3 += 1)
            {
                var_19 = var_6;
                var_20 = (max(var_20, (((var_1 ? ((((max(var_1, 13))) ? (((arr_9 [i_1] [i_2] [i_3]) ? 3675116704239774750 : (-9223372036854775807 - 1))) : var_5)) : ((((arr_2 [i_1] [i_2]) ? 9223372036854775807 : (((var_9 ? var_7 : 0)))))))))));
            }
            for (int i_4 = 2; i_4 < 13;i_4 += 1) /* same iter space */
            {
                arr_15 [1] [1] [i_4 + 1] = (max(70368744177663, 802779966));
                arr_16 [i_2] = var_9;
                var_21 = (max((max(4294967295, ((max(var_12, 255))))), ((max(((25866 ? var_11 : var_2)), (((142 ? var_9 : (arr_9 [i_1] [i_2] [i_4])))))))));
                var_22 = ((((((var_10 ? var_1 : var_5)))) ? var_7 : 1));
            }
            for (int i_5 = 2; i_5 < 13;i_5 += 1) /* same iter space */
            {
                var_23 = (var_0 ? var_10 : ((max(1, (arr_0 [9])))));
                var_24 = (max(var_24, 2070));
            }
            for (int i_6 = 2; i_6 < 13;i_6 += 1) /* same iter space */
            {
                arr_21 [i_1] [14] = ((((min(210, var_14))) ? ((((max(9223372036854775807, (arr_9 [i_1] [i_2 + 2] [12])))) ? (arr_1 [i_2] [i_6]) : var_13)) : -54));
                arr_22 [i_1] = (((-9223372036854775807 - 1) ? ((((min(var_0, var_6))))) : 8311387449370538311));
                var_25 = (min(var_25, ((max(25877, 18446744073709551601)))));
            }
            arr_23 [i_2] [i_1] [i_1] = (max((((((min(9223372036854775807, 20))) ? 16 : 29))), (max(((max(1017403297, (arr_12 [i_1] [6] [i_2])))), var_10))));
            arr_24 [i_1] [i_1] [i_2 - 1] = (min(var_6, var_6));
        }
        var_26 -= 802779987;
        arr_25 [i_1] = ((var_3 ? 3492187308 : var_2));
    }
    for (int i_7 = 0; i_7 < 15;i_7 += 1) /* same iter space */
    {
        arr_29 [i_7] [14] = ((((((((255 ? var_9 : (arr_0 [i_7])))) ? ((max(-51, var_4))) : ((0 ? var_5 : 2031616))))) ? var_15 : (((-32767 - 1) ? (((var_6 ? (arr_2 [i_7] [i_7]) : (arr_28 [i_7] [1])))) : (max(255, 1865809194))))));
        var_27 = (max(var_27, 8));
        var_28 |= 24;
        var_29 += 4023217881;
        var_30 *= 15710129032293646802;
    }
    var_31 = (min(var_31, ((max(((max((max(var_5, var_4)), ((var_12 ? var_12 : 11469))))), 4023217881)))));
    #pragma endscop
}
