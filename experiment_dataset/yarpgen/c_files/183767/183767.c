/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183767
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183767 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183767
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
        {
            var_19 ^= ((-(arr_3 [i_0 - 1])));
            var_20 = (~var_8);
        }
        for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
        {
            var_21 ^= arr_4 [i_0] [i_2];
            var_22 = (max(var_22, ((-100 ? (((arr_1 [i_0 - 1]) ? (253 + var_3) : var_2)) : (253 / 11817209637537258589)))));
        }
        arr_8 [i_0 - 1] = ((96 ? 4611686018427387903 : 15));
        var_23 = ((var_1 ? ((-(arr_6 [i_0 + 1] [i_0] [i_0 + 1]))) : (min((arr_6 [i_0] [i_0 + 1] [i_0 - 1]), (arr_6 [i_0 - 1] [i_0 - 1] [i_0 - 1])))));
        var_24 = (var_6 ^ var_14);

        for (int i_3 = 1; i_3 < 23;i_3 += 1)
        {
            var_25 = (max(var_25, (5443 + 1723899525)));
            var_26 ^= (((max(1023, 65535))));
        }
        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            var_27 -= var_2;
            arr_13 [i_4] = ((((((arr_1 [i_0 + 1]) ? 1 : 1))) || (arr_5 [i_0 - 1] [2] [i_0 - 1])));
        }
    }
    for (int i_5 = 0; i_5 < 22;i_5 += 1)
    {
        arr_18 [i_5] = ((((((9223372019674906624 ? (arr_11 [i_5] [i_5]) : (arr_17 [i_5]))) % var_3)) >= (((((var_15 ? (arr_14 [i_5]) : 73))) ? ((4195551050992899836 ? (arr_5 [i_5] [i_5] [i_5]) : (arr_5 [i_5] [i_5] [i_5]))) : ((var_9 * (arr_11 [i_5] [i_5])))))));
        var_28 = var_0;
        var_29 *= ((((-((((arr_6 [i_5] [i_5] [i_5]) >= (arr_2 [i_5])))))) + (--1)));
        var_30 = (min(var_30, (((-((64517 ? (arr_15 [i_5]) : (arr_17 [i_5]))))))));
    }
    var_31 = -7740;
    #pragma endscop
}
