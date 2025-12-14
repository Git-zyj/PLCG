/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138889
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138889 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138889
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 &= ((((min(730877906, var_0))) ? var_2 : (var_6 / var_19)));
    var_21 = (((((11 - (((35 ? var_14 : var_5)))))) ? (var_15 * var_5) : ((((var_10 ? var_8 : 2123414020)) - var_17))));

    for (int i_0 = 0; i_0 < 23;i_0 += 1) /* same iter space */
    {
        var_22 = (1712585216 >> (((min((arr_0 [i_0] [i_0]), var_17)) + 53)));
        var_23 ^= (((arr_0 [i_0] [i_0]) * (((arr_1 [i_0]) / (arr_1 [i_0])))));
        var_24 = (max(var_24, 2123414014));
        var_25 = (min(1, (max(var_2, ((((arr_1 [i_0]) <= 126)))))));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1) /* same iter space */
    {
        var_26 |= (arr_4 [i_1]);
        arr_6 [i_1] [i_1] = (((((((2708183895485821283 ? 6682683579899902 : (arr_3 [i_1]))) >= -519909045))) % ((+((((arr_0 [i_1] [i_1]) >= (arr_5 [i_1]))))))));
        arr_7 [i_1] = ((!((((arr_1 [i_1]) | (arr_0 [i_1] [i_1]))))));
        arr_8 [i_1] = ((var_18 ? (((+((max((arr_2 [11]), (arr_3 [i_1]))))))) : ((-(min(10008496518871492816, 2123414014))))));
        var_27 ^= (8438247554838058785 * -730877910);
    }
    var_28 = min(2318739896, ((var_12 ? -450690669 : 3467917)));
    #pragma endscop
}
