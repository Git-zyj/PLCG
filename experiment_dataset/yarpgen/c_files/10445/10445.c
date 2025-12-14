/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10445
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10445 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10445
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, var_10));

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            var_13 = (arr_1 [i_0 - 1] [3]);
            arr_4 [i_0 + 3] [i_1] [0] = -1;
            arr_5 [i_0 + 3] [9] = (((var_6 + var_2) ? 4294967295 : -1));
        }
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            var_14 = ((!(~-1)));
            arr_9 [1] [0] [i_2] = -9;
            arr_10 [i_0 + 1] [6] [i_0] = (arr_2 [i_0] [12]);
            arr_11 [i_0] [i_0 + 3] [i_2] = (max(-14044, var_11));
        }
        var_15 = ((max(9, (-32767 - 1))));
        arr_12 [i_0] = (((((var_11 % (arr_7 [i_0 - 1] [i_0 + 3] [i_0 + 1])))) ? 14049 : -114));
        arr_13 [i_0 + 2] = -11;
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {
        arr_17 [i_3] = ((-((107 ? -23819 : 246))));
        arr_18 [i_3] = (197 ? 6753665556451637805 : 8);
        var_16 = (max(var_16, (arr_15 [i_3] [2])));
        var_17 = (min(var_17, (-14049 + 105)));
        arr_19 [i_3] [i_3] = ((var_1 ? -122 : 10));
    }
    for (int i_4 = 0; i_4 < 22;i_4 += 1)
    {
        var_18 = (((((20222 ? -28 : 0))) ? (arr_20 [i_4]) : (-25968 || 9714)));
        var_19 = (min(var_19, ((max(var_5, (((arr_22 [i_4]) ? 12538834408668167430 : (arr_22 [2]))))))));
        arr_23 [i_4] = arr_22 [i_4];

        /* vectorizable */
        for (int i_5 = 0; i_5 < 22;i_5 += 1)
        {
            var_20 = (min(var_20, -var_7));
            var_21 *= (var_6 / 1328473879);
            var_22 ^= var_4;
        }
    }
    for (int i_6 = 1; i_6 < 11;i_6 += 1)
    {
        var_23 &= ((((((122 > (arr_22 [i_6 + 2]))))) % (~18446744073709551612)));
        var_24 -= max((min(25, 21583)), var_4);
        var_25 = (((((5 ? 12038 : -25091))) ? ((((18446744073709551575 ? 18446744073709551615 : 4418182724049135104)) * (arr_24 [i_6 + 1]))) : 2497923663));
    }
    #pragma endscop
}
