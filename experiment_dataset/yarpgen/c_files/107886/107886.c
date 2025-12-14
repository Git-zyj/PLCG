/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107886
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107886 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107886
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (1079076236365869294 || var_3);
    var_17 = -1079076236365869307;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1) /* same iter space */
    {
        var_18 *= 55;
        arr_2 [i_0] = ((1079076236365869294 ? 255 : 148));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 13;i_1 += 1) /* same iter space */
    {
        var_19 = (max(var_19, ((((arr_4 [i_1]) ? 40712 : (arr_0 [i_1]))))));
        arr_6 [i_1] = -3755854218560670937;
    }
    for (int i_2 = 0; i_2 < 13;i_2 += 1) /* same iter space */
    {

        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {

            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                var_20 = (min(var_20, ((max(1079076236365869288, ((min((arr_5 [i_3]), (((arr_14 [0] [0] [i_4] [0]) ? 24809 : 206))))))))));
                var_21 = min((max((arr_5 [i_2]), (min(1079076236365869294, var_0)))), ((((arr_14 [i_3] [i_3] [i_4] [i_4]) + (arr_14 [i_3] [i_3] [i_2] [i_3])))));
                var_22 ^= (~(arr_13 [i_3] [2]));
                arr_17 [i_3] [i_3] = (((~(min((arr_9 [i_4]), (arr_7 [i_2]))))));
            }
            arr_18 [i_2] [i_3] [i_3] = (max((max((~2085159194139000657), (arr_7 [i_3]))), (((-20570 <= (max((arr_8 [i_2]), 9223372036854775805)))))));
            var_23 = (min(var_23, ((max((((((max(1079076236365869276, 1377458369))) && (arr_8 [i_3])))), (min((((!(arr_5 [i_3])))), (arr_15 [i_3] [i_3] [i_2]))))))));
            arr_19 [i_2] [i_3] [i_2] = ((~(arr_8 [i_2])));
        }
        var_24 = (min((arr_15 [i_2] [i_2] [i_2]), ((max(40712, (arr_8 [i_2]))))));
    }
    #pragma endscop
}
