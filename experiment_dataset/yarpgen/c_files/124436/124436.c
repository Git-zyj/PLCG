/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124436
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_10;
    var_15 |= var_4;

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_4 [i_0] = ((((((arr_3 [i_0] [i_0]) ? var_9 : (arr_3 [i_0] [i_0])))) ? (arr_0 [i_0]) : ((((!(arr_2 [i_0])))))));
        var_16 = (max(var_11, (arr_1 [10] [i_0])));
        var_17 -= (min(var_2, (((((min(8471227407984440004, 64))) ? 1 : (((!(arr_1 [i_0] [i_0])))))))));
        arr_5 [i_0] = (max((((arr_2 [i_0]) ? (!0) : (max((arr_1 [i_0] [1]), (arr_2 [i_0]))))), (((!(arr_1 [i_0] [i_0]))))));
        var_18 *= (((16256 != 144115119356379136) ? 234 : (((!((!(arr_1 [1] [1]))))))));
    }
    for (int i_1 = 1; i_1 < 6;i_1 += 1)
    {
        arr_8 [i_1] [i_1 - 1] = (((((arr_0 [i_1 + 2]) ? (arr_0 [i_1 + 3]) : (arr_1 [i_1 - 1] [i_1 + 3]))) >= (min((arr_0 [i_1 - 1]), (arr_1 [i_1 + 3] [i_1 + 3])))));
        var_19 -= (((!1) ? (-16255 || var_11) : (((((min(var_5, (arr_3 [i_1] [2])))) || var_11)))));
        var_20 = ((((((max(var_5, var_9)) || (arr_2 [i_1]))))));
    }
    for (int i_2 = 0; i_2 < 18;i_2 += 1) /* same iter space */
    {
        arr_12 [i_2] [i_2] = var_6;

        for (int i_3 = 1; i_3 < 15;i_3 += 1)
        {
            var_21 = (min(var_3, 1492));
            var_22 = ((((!(arr_1 [i_2] [i_3 + 3]))) || ((max(((((arr_11 [i_2] [i_3]) < (arr_0 [i_3 + 2])))), var_4)))));
        }
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            var_23 ^= (max(var_2, (arr_1 [i_4] [i_4])));
            var_24 = (max(var_24, (((((((arr_17 [i_2] [i_2] [i_2]) * 2989237653))) ? 13996261089274830940 : (((231 >= ((min(-16257, var_7)))))))))));
        }

        /* vectorizable */
        for (int i_5 = 0; i_5 < 18;i_5 += 1)
        {
            var_25 -= 22074;
            var_26 = (((arr_10 [i_2] [i_2]) - (arr_0 [i_2])));
        }
    }
    for (int i_6 = 0; i_6 < 18;i_6 += 1) /* same iter space */
    {
        var_27 = (min((arr_18 [i_6] [16]), ((var_13 - (arr_15 [i_6] [i_6])))));

        /* vectorizable */
        for (int i_7 = 0; i_7 < 18;i_7 += 1)
        {
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 18;i_8 += 1)
            {
                for (int i_9 = 1; i_9 < 1;i_9 += 1)
                {
                    {
                        var_28 = 2798507324;

                        for (int i_10 = 0; i_10 < 18;i_10 += 1)
                        {
                            arr_34 [i_6] [i_9] [i_6] [i_6] [i_6] = (arr_33 [i_6] [i_7] [i_8] [i_7]);
                            var_29 |= (arr_0 [i_6]);
                        }
                        var_30 = var_5;
                        var_31 *= (arr_27 [i_9] [i_7] [i_6]);
                    }
                }
            }

            for (int i_11 = 0; i_11 < 18;i_11 += 1)
            {
                var_32 = (arr_30 [10] [i_11] [i_11] [i_7] [i_7] [i_6]);
                arr_39 [i_6] [i_7] [i_11] = (1 ^ ((((!(arr_27 [4] [i_7] [4]))))));
            }
            var_33 = ((((((arr_1 [i_6] [i_6]) << var_0))) ? (arr_28 [i_6] [i_6] [i_6]) : (arr_21 [i_6])));
            var_34 = (((((var_10 ? (arr_32 [i_7] [i_7] [1] [i_7] [8] [i_7] [i_7]) : var_6))) ? (arr_15 [i_7] [i_6]) : var_6));
        }
    }
    #pragma endscop
}
