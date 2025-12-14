/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158687
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158687 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158687
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 *= (max(((((max(524287, 0))) ? var_10 : (min(var_11, var_10)))), ((((((1 ? 1 : -45))) ? 1 : ((0 ? 4294967294 : var_15)))))));
    var_17 = (max(var_17, var_2));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_18 = ((-(arr_1 [i_0] [i_0])));
        var_19 = (min(var_19, (((((var_9 ? (arr_0 [i_0]) : 9223372036854775807)) * (((min(1, var_14)))))))));
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        arr_4 [i_1] = var_15;

        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            var_20 = ((((((arr_6 [i_1]) * var_10)) + ((((arr_5 [i_1] [5] [5]) ? (arr_3 [i_1] [i_1]) : var_8))))));
            arr_8 [i_1] [i_1] [i_2] = ((~(~1)));
        }
        for (int i_3 = 4; i_3 < 21;i_3 += 1) /* same iter space */
        {
            var_21 += (min((min(-1, 116)), (min(-92, (((!(arr_2 [i_1] [1]))))))));
            var_22 = ((~(var_9 != 1563618955)));
            arr_11 [i_1] [2] = (i_1 % 2 == 0) ? ((min(((((var_8 + 2147483647) << (((arr_7 [i_1] [i_3 - 4] [i_3 - 3]) - 15431150981447993551))))), 6844977393261711827))) : ((min(((((var_8 + 2147483647) << (((((arr_7 [i_1] [i_3 - 4] [i_3 - 3]) - 15431150981447993551)) - 11768624910655824201))))), 6844977393261711827)));
        }
        for (int i_4 = 4; i_4 < 21;i_4 += 1) /* same iter space */
        {
            var_23 = (max(var_23, var_8));
            var_24 &= ((var_1 / (arr_5 [i_4] [i_4 + 1] [i_4 - 3])));
            var_25 = 15910115145457268403;
            var_26 = (min(var_26, ((max(4294967272, 0)))));
        }
        var_27 ^= ((~((((((0 ? 1 : 191))) || (((arr_3 [i_1] [2]) || var_3)))))));
        var_28 = (min(var_28, ((((632380995 * 0) ? ((((((var_9 ? 1 : 25790))) ? (min(-1587931434, 63769)) : ((-43 ? var_7 : (arr_3 [i_1] [12])))))) : 47005)))));
    }
    var_29 = var_6;
    var_30 = (((((var_10 ? -55 : var_4))) / 9223372036854775807));
    #pragma endscop
}
