/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165823
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165823 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165823
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = -var_7;
    var_20 = 88;

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_21 = (-3068866084145369314 % 96);
        arr_4 [i_0] = ((min((arr_0 [i_0]), (min(var_14, var_7)))) << (((((arr_0 [i_0]) ? (arr_0 [i_0]) : var_10)) - 759318765)));

        for (int i_1 = 0; i_1 < 23;i_1 += 1) /* same iter space */
        {
            arr_8 [i_0] [i_1] [22] = ((65515 ? 0 : ((var_13 ^ (min(18446744073709551613, -3068866084145369314))))));
            var_22 = ((~(((!((max(3068866084145369323, var_11))))))));
            var_23 += var_15;
        }
        for (int i_2 = 0; i_2 < 23;i_2 += 1) /* same iter space */
        {
            arr_11 [i_0] [i_0] = max(52155, 1154062733);
            arr_12 [i_0] [i_0] = (((min((max(18446744073709551615, 1839326247)), (((!(arr_6 [i_0] [7] [3])))))) <= (213340725 % 127)));
            arr_13 [i_0] = (((max(((var_5 ? 193760251 : var_18)), var_11)) - (+-723165905)));
        }
        var_24 |= (!4160891955381300327);
    }
    #pragma endscop
}
