/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153631
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153631 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153631
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((3843976231 ? 0 : 109) % ((min(var_8, var_5))))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 21;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 3; i_1 < 24;i_1 += 1)
        {
            arr_5 [i_1] = 3780600234;
            arr_6 [i_1] = (((((-31 ? 49 : 0))) ? (((arr_2 [i_0]) & var_8)) : (arr_0 [i_0])));
        }
        for (int i_2 = 3; i_2 < 24;i_2 += 1)
        {
            var_17 = (((arr_9 [i_0] [i_0] [i_0]) ^ ((((arr_3 [i_0] [i_0]) <= (arr_1 [i_0]))))));
            var_18 ^= (61249 ^ -3832522871856178914);
            var_19 = ((((((arr_7 [i_0] [i_0] [i_0]) ? var_14 : var_7))) && (arr_2 [i_2])));

            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                var_20 = (min(var_20, ((((arr_12 [i_0 + 2] [i_2 + 1] [i_2 + 1] [i_2 + 1]) ? (arr_12 [i_0 - 1] [i_2 - 2] [i_2 - 2] [i_2 - 2]) : (arr_12 [i_0 + 3] [i_2 - 3] [i_0 + 3] [i_2 - 3]))))));
                var_21 = (max(var_21, ((((arr_10 [i_0] [i_0 - 1] [i_0] [i_2 - 3]) ? (arr_10 [i_0] [i_0 + 2] [i_0] [i_2 - 3]) : (arr_2 [i_0 + 3]))))));
            }
            for (int i_4 = 3; i_4 < 23;i_4 += 1)
            {
                var_22 -= (arr_7 [i_0 - 1] [i_0 - 1] [i_4 - 1]);
                arr_16 [i_4] [i_4] = (!107);
            }
        }
        var_23 &= (((~(arr_14 [i_0] [i_0]))));
    }
    for (int i_5 = 1; i_5 < 21;i_5 += 1) /* same iter space */
    {
        var_24 &= (-49 & 18446744073709551596);
        arr_19 [i_5] = (((!552469252) - ((((arr_10 [i_5] [i_5] [i_5] [i_5]) < 178407313928926192)))));
        var_25 = ((+((var_10 / (((arr_8 [i_5] [i_5] [i_5]) ? -1132357995602994795 : (arr_1 [i_5])))))));
    }
    #pragma endscop
}
