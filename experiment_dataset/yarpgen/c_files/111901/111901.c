/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111901
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111901 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111901
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            arr_6 [i_0] [i_0] [i_1] = -44;
            arr_7 [i_0] [12] &= 21082;
            var_18 &= ((~(var_1 <= var_3)));
        }
        arr_8 [i_0] = (32767 || 34);
        arr_9 [i_0] [i_0] = (min((((((max(32767, (arr_1 [i_0]))))) == (max((arr_3 [i_0] [i_0]), var_15)))), (!var_8)));

        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            arr_12 [i_0] [i_0] = ((-(arr_1 [i_0])));
            arr_13 [i_0] [i_2] [i_0] = ((((min(((max(13, 1))), (arr_5 [i_0])))) ? (arr_10 [i_0] [i_2] [i_2]) : ((((var_5 | (arr_1 [i_0]))) ^ ((max((arr_4 [i_0] [i_0]), var_9)))))));
            var_19 = ((59734 ? (((5809 ? 1 : (arr_0 [i_0] [9])))) : 18446744073709551615));
            arr_14 [14] |= (arr_2 [i_0] [3]);
        }
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            var_20 = (((((-(arr_17 [i_0] [i_0] [i_0])))) >= (arr_10 [i_0] [i_0] [i_3])));
            arr_18 [i_3] &= min(-35, 18446744073709551615);
        }
        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            var_21 = (((((14915482075306353871 == var_12) || 35)) ? -35 : (((~35516) ? (((arr_0 [i_0] [i_4]) ? (arr_5 [i_0]) : (arr_19 [i_0] [i_0]))) : (arr_4 [i_0] [i_0])))));
            arr_21 [i_0] = (min((((((((arr_19 [i_0] [i_4]) ? 65535 : 12))) || (var_2 && 34)))), 255));
        }
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        arr_24 [i_5] [i_5] = ((~(arr_23 [i_5])));
        var_22 = (((~(arr_23 [i_5]))));
        var_23 |= (((arr_22 [i_5] [3]) ? (arr_22 [i_5] [i_5]) : (arr_22 [i_5] [12])));
    }
    var_24 &= var_7;
    var_25 = (((~17) ? (((var_17 ? var_1 : var_2))) : (((var_2 ? -var_17 : (((var_3 ? var_0 : 65535))))))));
    #pragma endscop
}
