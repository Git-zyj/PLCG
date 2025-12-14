/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124417
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124417 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124417
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        arr_4 [i_0] = ((((!(!11012))) ? (((((arr_3 [i_0]) != (min(-11021, (arr_1 [5]))))))) : ((+(min((arr_0 [i_0]), (arr_3 [i_0])))))));
        arr_5 [2] [i_0] = (arr_3 [i_0]);

        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            var_13 = (max((66 / 241), (((247 * 45) ? ((max(-72, -119))) : 16513))));
            var_14 = 112;
        }
        for (int i_2 = 1; i_2 < 10;i_2 += 1)
        {
            var_15 *= (max((((((var_2 ? 65535 : 60)) * (arr_0 [i_2 - 1])))), (arr_6 [8])));
            arr_12 [i_0] [i_0] = ((-113 ^ ((((32762 ? 138 : 217))))));
            arr_13 [10] [i_2] = ((-((~(((arr_3 [0]) ? var_9 : (arr_7 [i_0 + 1] [8])))))));
        }
    }
    for (int i_3 = 2; i_3 < 18;i_3 += 1)
    {
        arr_17 [i_3] [i_3] = (((((!var_2) ? (((-(arr_16 [i_3] [i_3])))) : 18446744073709551615)) != ((((125 << (var_7 - 7894)))))));
        arr_18 [i_3] [i_3] = (max((!3793437899986490910), ((~((1 ? 15 : 108))))));
    }
    for (int i_4 = 2; i_4 < 17;i_4 += 1)
    {
        var_16 = 1;
        var_17 = (max(var_17, (((13390961500799394091 ? (1715517704 == -18562) : (((!(((arr_21 [i_4]) || 2389584345169093960))))))))));
        var_18 -= ((-(((((arr_21 [i_4]) < var_5)) ? (arr_21 [i_4 - 2]) : ((((arr_14 [i_4] [i_4]) < var_7)))))));
    }
    var_19 = (min((((4 ? 36 : -7814))), (((var_10 == (!var_8))))));
    var_20 = ((1345867151 << (10617 - 10607)));
    #pragma endscop
}
