/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148507
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148507 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148507
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_9;
    var_14 |= var_5;

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_3 [8] |= (!0);
        arr_4 [i_0] = 11919816939341498922;
        var_15 = ((!(!127)));

        for (int i_1 = 0; i_1 < 13;i_1 += 1) /* same iter space */
        {
            var_16 ^= ((var_10 ? (6526927134368052698 / 12467270957642896949) : 11919816939341498917));
            var_17 = 47;
        }
        for (int i_2 = 0; i_2 < 13;i_2 += 1) /* same iter space */
        {
            arr_10 [i_0] [10] = ((-(((!(((var_1 ? 4088 : var_3))))))));
            var_18 -= (arr_0 [i_0] [i_2]);
        }
        arr_11 [1] |= ((~((var_7 ^ (arr_1 [i_0])))));
    }
    for (int i_3 = 2; i_3 < 22;i_3 += 1)
    {
        var_19 = -11;
        var_20 -= var_12;
        var_21 *= (~93);
        var_22 = (max(var_22, (((-27237 ? (((((~(arr_12 [i_3])))))) : 109)))));
    }
    var_23 &= var_2;
    var_24 = var_10;
    #pragma endscop
}
