/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102899
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102899 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102899
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 1;

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_14 = (max(((+(((arr_0 [i_0]) & 1)))), (arr_0 [i_0])));
        var_15 = (max(var_15, (((!((((var_7 & 0) ? -1145712994 : 48))))))));
        var_16 = ((-(((arr_2 [i_0]) - (var_5 ^ 232)))));
        var_17 = (max(var_17, ((((arr_0 [17]) ? ((((max((arr_0 [i_0]), (arr_1 [i_0] [i_0]))) << (43666 - 43665)))) : (((max((arr_2 [i_0]), var_4)) | (((~(arr_0 [i_0])))))))))));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        arr_6 [i_1] = ((((arr_5 [i_1]) ? 2743085529 : (arr_5 [i_1]))));

        /* vectorizable */
        for (int i_2 = 0; i_2 < 10;i_2 += 1) /* same iter space */
        {
            arr_11 [3] = (0 ? (arr_10 [i_1]) : (arr_10 [i_1]));
            arr_12 [i_1] [i_2] [i_2] &= (arr_4 [i_1] [i_2]);
            var_18 = (min(var_18, ((((arr_5 [i_1]) ^ (arr_7 [i_1]))))));
        }
        for (int i_3 = 0; i_3 < 10;i_3 += 1) /* same iter space */
        {
            arr_15 [i_1] [i_3] = (max(((4667970932825212595 % (arr_1 [i_1] [i_1]))), ((min((arr_1 [i_3] [i_1]), (arr_1 [i_1] [i_3]))))));
            var_19 |= (max(32232, 18446744073709551615));
            var_20 = (arr_1 [i_1] [i_3]);
        }
        var_21 = (max(var_21, (arr_5 [8])));
        var_22 = (max(var_22, (((~(((arr_10 [i_1]) ? (arr_10 [i_1]) : (arr_3 [i_1] [i_1]))))))));
    }
    for (int i_4 = 0; i_4 < 18;i_4 += 1) /* same iter space */
    {
        arr_19 [i_4] &= -578502020;
        arr_20 [i_4] = (arr_18 [i_4]);
        var_23 = (((((arr_1 [i_4] [6]) || (arr_17 [i_4]))) ? ((~(max((arr_1 [6] [6]), 0)))) : -1));
    }
    for (int i_5 = 0; i_5 < 18;i_5 += 1) /* same iter space */
    {
        var_24 = (((((((7 ? 496 : 19705891))) ? 2111838098 : (max(0, 3236098998514893324))))) ? (arr_23 [i_5]) : 56477);
        var_25 = (!(((+((((arr_16 [1] [i_5]) != 2415866504)))))));
        var_26 ^= (((((((max((arr_22 [i_5] [i_5]), (arr_1 [i_5] [i_5])))) ? (((arr_21 [i_5]) ? var_5 : (arr_21 [i_5]))) : (arr_0 [i_5])))) ? (max(((10054 ? -91 : 2352748539863791967)), -var_7)) : ((max(var_2, -16)))));
        var_27 &= (arr_3 [i_5] [i_5]);
        arr_24 [10] = (((((arr_22 [i_5] [i_5]) < 0)) ? var_8 : (((((((arr_21 [i_5]) > (arr_23 [3])))) > (!3917))))));
    }
    #pragma endscop
}
