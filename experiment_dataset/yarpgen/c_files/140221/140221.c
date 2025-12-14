/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140221
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140221 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140221
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 22;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = 823501823;
        var_16 = (max(var_16, 823501823));

        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            var_17 = (min(var_17, (arr_4 [i_0] [i_1] [i_0])));
            var_18 = (min(var_18, (((((min((arr_0 [i_0 - 1]), -49))) * (((arr_0 [i_0 - 3]) ? (arr_0 [i_0 - 1]) : 0)))))));
            var_19 = ((var_5 ? (((!(arr_5 [i_1])))) : ((((var_7 < var_11) > -58)))));

            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                var_20 = (((((((max(58, var_9))) ? (((arr_4 [i_0] [9] [9]) - (arr_5 [i_1]))) : ((var_5 ? (arr_3 [i_0] [i_1] [i_2]) : 58))))) ? (((((arr_3 [i_2] [i_0] [i_0]) - var_7)) / var_2)) : (arr_3 [i_0] [i_1 + 1] [i_2])));
                var_21 = (min(var_21, 3471465473));
            }
        }
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            var_22 = (max(var_22, (((49 ? ((((min((arr_7 [i_3] [i_3] [i_3]), var_6))))) : (((var_1 || (arr_10 [i_3])))))))));
            var_23 &= 1477803006;
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 23;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 23;i_5 += 1)
                {
                    for (int i_6 = 3; i_6 < 21;i_6 += 1)
                    {
                        {
                            var_24 ^= ((((((arr_12 [i_0] [i_0] [i_4] [i_3]) | (arr_12 [i_0 - 2] [i_5] [i_0 - 2] [i_4])))) ? ((~(arr_12 [i_0] [i_4] [i_5] [i_6]))) : ((3471465472 ? (arr_12 [i_0] [i_0 - 2] [i_0 - 3] [i_0 - 3]) : (arr_12 [i_0] [i_0] [i_5] [i_6 - 1])))));
                            var_25 = (max(var_25, (((((min(823501823, 200))) ? 13493 : 53)))));
                            var_26 ^= (min(-3471465472, (arr_9 [i_4])));
                            arr_19 [i_4] [i_4] = arr_5 [i_4];
                        }
                    }
                }
            }
        }
    }
    for (int i_7 = 3; i_7 < 22;i_7 += 1) /* same iter space */
    {
        var_27 = ((((((((var_1 ? var_4 : -39))) ? (arr_0 [i_7 + 1]) : (((!(arr_9 [i_7]))))))) ? 3471465473 : ((((arr_5 [i_7]) - ((3471465470 ? 58 : 69)))))));
        var_28 = min((4294967295 < -59), (min((arr_8 [i_7 - 2] [i_7 - 2] [i_7] [i_7]), (1073741823 * 55))));
        arr_22 [i_7] [i_7] = (arr_18 [i_7] [i_7]);
    }
    for (int i_8 = 3; i_8 < 22;i_8 += 1) /* same iter space */
    {
        var_29 = min((arr_0 [16]), (((!(arr_16 [i_8] [i_8 + 1] [i_8])))));
        var_30 &= ((-((((arr_13 [13] [i_8 + 1] [i_8 + 1] [i_8 + 1] [i_8]) <= (arr_13 [i_8] [i_8 - 2] [14] [i_8 + 1] [i_8]))))));
    }
    for (int i_9 = 3; i_9 < 17;i_9 += 1)
    {
        var_31 = (min(var_31, (((((var_15 && (!13485))) ? ((min((min((arr_3 [i_9] [i_9] [i_9]), 55)), (min(13472, (arr_17 [i_9] [i_9] [14])))))) : var_13)))));
        var_32 |= (min((arr_29 [i_9 - 3]), (((arr_20 [4] [4]) ? (arr_27 [i_9 - 3] [i_9]) : ((max((arr_15 [i_9]), (arr_24 [i_9] [i_9 - 2]))))))));
    }
    var_33 ^= ((!((min((max(70, 823501823)), var_2)))));
    var_34 = ((((+(((-2147483647 - 1) ? 2549091627319746044 : 52050)))) >> (var_3 - 11606735181795594327)));
    var_35 ^= (((((!((min(var_12, var_10)))))) / var_6));
    var_36 -= ((1096198084 ? (min((max(823501822, var_2)), ((-56 ? var_15 : 3471465473)))) : (((((((var_11 ? 3471465473 : 56))) < (max(var_0, 0))))))));
    #pragma endscop
}
