/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173567
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173567 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173567
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((((var_12 ? ((var_9 ? var_6 : var_11)) : -var_8))) ? 32373 : var_1));

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            arr_4 [i_0] [i_0] = (min((min(((10 ? 16527 : -9223372036854775796)), (arr_0 [i_0 + 3]))), (min(var_4, (arr_0 [11])))));

            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                var_15 += (((var_11 < var_6) ^ (((arr_2 [i_1]) ? (arr_2 [i_1]) : (arr_2 [i_1])))));
                var_16 *= -9223372036854775803;
                arr_7 [i_0] = 43114;
                arr_8 [12] [i_0] [1] = 65535;
            }
            var_17 = ((((((arr_1 [i_0]) == (arr_1 [23])))) - (((min(var_10, (arr_2 [i_0])))))));

            for (int i_3 = 0; i_3 < 25;i_3 += 1)
            {
                arr_11 [i_0] [i_0 + 1] [i_1] [i_0] = (max((arr_9 [i_0 - 1] [i_0 + 3] [i_0 + 4]), (arr_3 [i_0] [i_0])));
                var_18 = ((-(max(var_11, (min(-540344161157303190, var_2))))));
                var_19 = ((~((var_13 ? (arr_2 [i_0]) : (!var_8)))));
            }
        }
        for (int i_4 = 0; i_4 < 25;i_4 += 1) /* same iter space */
        {
            var_20 *= (max((max(7, ((min(-16528, var_9))))), -23040));
            var_21 = (min(var_21, ((((((arr_3 [i_0 - 1] [i_4]) ? var_2 : (arr_3 [i_0 + 2] [i_4]))) - (var_12 > var_1))))));
            var_22 += (arr_1 [18]);
        }
        for (int i_5 = 0; i_5 < 25;i_5 += 1) /* same iter space */
        {
            arr_18 [11] [i_0] = ((((max(122, 0))) >> (((arr_5 [i_0 + 3] [i_0 + 1] [7] [i_0 + 1]) >> (var_5 - 41)))));
            var_23 ^= (min((((!(((var_3 ? var_3 : 9)))))), ((~(arr_13 [i_0 + 1])))));

            for (int i_6 = 2; i_6 < 24;i_6 += 1)
            {
                var_24 = -103;
                arr_23 [i_5] [i_0] [24] [i_5] = ((2280446531173422174 ? (~7) : (min(var_4, ((((arr_1 [i_5]) && -1397)))))));
            }
            for (int i_7 = 0; i_7 < 25;i_7 += 1)
            {
                var_25 += (((arr_5 [i_0 + 3] [i_0] [i_0 + 3] [10]) ? -469 : var_7));
                var_26 = (arr_3 [i_0] [i_0]);
                arr_28 [i_0] [i_5] [i_7] = (max((38 >= -82), (((~((~(arr_27 [i_0 + 4] [i_0 + 4]))))))));
                arr_29 [i_0] [i_5] [i_7] = (!((((min((arr_15 [i_0 + 2] [11] [i_0]), var_13))) || 3968)));
            }
        }
        var_27 = (min(var_27, ((min(((-(arr_17 [i_0 + 2]))), var_0)))));
    }
    var_28 = (max(var_3, (((((min(var_10, var_8))) == ((148 ? var_10 : 63)))))));
    #pragma endscop
}
