/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108194
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108194 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108194
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((var_0 ? (((((~23099) + 2147483647)) << (((-23096 ^ var_11) - 810993975835105463)))) : (!var_7)));
    var_15 = ((var_10 && (!var_3)));

    for (int i_0 = 0; i_0 < 13;i_0 += 1) /* same iter space */
    {
        var_16 = (arr_1 [i_0]);

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                var_17 = var_1;

                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    arr_8 [i_0] [i_0] [i_0] = var_0;
                    var_18 = arr_3 [i_0] [i_1] [i_2];
                    arr_9 [i_1] [i_1] [i_1] [i_1] = -23099;
                    var_19 = var_12;
                    arr_10 [i_0] [i_0] [i_1] [i_2] [i_3] = (((((761790492 ? 23095 : -4316))) ? 4316 : ((~((var_1 >> (var_1 - 939692925)))))));
                }
            }
            var_20 = 2042263392;
        }
        for (int i_4 = 0; i_4 < 13;i_4 += 1)
        {
            arr_14 [i_0] &= (min(var_11, ((min(805306368, var_10)))));
            var_21 = (max((~var_13), (((~(arr_1 [i_4]))))));

            for (int i_5 = 0; i_5 < 13;i_5 += 1)
            {
                var_22 = (min((min(((var_11 ? var_3 : var_13)), (~4316))), ((min(var_4, var_0)))));
                arr_18 [i_5] [i_5] = (((~(arr_6 [i_5] [i_4] [i_4] [i_0]))));
                var_23 = 23098;
            }

            for (int i_6 = 0; i_6 < 13;i_6 += 1) /* same iter space */
            {
                arr_22 [i_6] = 28;
                var_24 = (arr_15 [i_0] [i_0] [i_0] [i_0]);
            }
            for (int i_7 = 0; i_7 < 13;i_7 += 1) /* same iter space */
            {
                var_25 = var_5;
                var_26 *= (arr_5 [i_0] [i_4] [i_7] [i_0]);
            }
        }
        var_27 = 4300;
    }
    for (int i_8 = 0; i_8 < 13;i_8 += 1) /* same iter space */
    {
        arr_28 [i_8] [i_8] = (((min(1099444518912, (1 | 279223176896970752))) | (((min((arr_15 [i_8] [i_8] [i_8] [i_8]), (6501538928608702581 < 11575586338270339055)))))));
        var_28 = -1404104241;
        arr_29 [i_8] [i_8] = (((((min(var_11, var_5)) & (var_1 <= var_12))) << ((min((min(var_10, var_5)), (!-1422941387441778242))))));
        arr_30 [i_8] [i_8] = (((((min(1090052096, var_7)) ^ var_6)) + var_8));
        arr_31 [i_8] [i_8] = ((((~(~var_11))) & (((~(16128 | 23099))))));
    }
    for (int i_9 = 0; i_9 < 21;i_9 += 1)
    {
        var_29 = (((((4163659737 ? var_7 : 814959710)))) ? (!var_2) : (1090052096 / 3480007593));
        var_30 = (min(((-(6501538928608702587 ^ 0))), ((min(var_8, (arr_33 [i_9]))))));
    }
    #pragma endscop
}
