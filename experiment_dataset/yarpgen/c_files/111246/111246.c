/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111246
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111246 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111246
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 *= ((-((~(~14462)))));
    var_18 = (16270 / 14444);
    var_19 = ((~((((~14462) <= (!var_6))))));
    var_20 = ((((-(65 ^ var_9))) != (((~-12635) & (~37)))));

    for (int i_0 = 0; i_0 < 15;i_0 += 1) /* same iter space */
    {
        var_21 |= ((((~((-(arr_2 [i_0]))))) <= ((~((~(arr_2 [i_0])))))));
        arr_4 [i_0] [i_0] &= ((((((((~(arr_3 [i_0] [i_0]))) <= ((14462 ^ (arr_1 [1]))))))) <= ((var_0 * (97 != var_16)))));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1) /* same iter space */
    {
        var_22 = ((!(((2199023255551 <= 0) >= ((var_8 * (arr_3 [i_1] [i_1])))))));
        var_23 ^= (((((!(!28514)))) != (3 != 65535)));
        arr_8 [1] [i_1] |= ((((-24 / (32256 && 18381))) != (((!15494467957055535822) ^ (57766 * 7770)))));

        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            arr_12 [i_1] [i_1] [i_1] = ((((~(~0))) ^ (!18228)));
            var_24 |= ((((((~0) | ((~(arr_10 [i_2] [i_2] [i_1])))))) / ((-var_7 / (var_15 - 0)))));
        }
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            arr_15 [i_1] [i_3] = ((((24 * 18949) * 24)) >= (!182));
            var_25 = (42436 <= 723227322);
            var_26 = (18228 - 49456);
        }
        var_27 -= ((~((((!168) >= (((arr_2 [i_1]) / 22298)))))));
    }
    #pragma endscop
}
