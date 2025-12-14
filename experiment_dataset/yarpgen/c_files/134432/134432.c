/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134432
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134432 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134432
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((((var_8 || var_14) < var_15))) < (((var_1 >= var_9) % (var_0 != var_10)))));
    var_18 = (((186578266 || -1) == ((((-8805309841800914456 ^ var_3) && (4108389026 == var_11))))));

    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] = (((((arr_0 [i_0 + 1]) - (var_1 - var_3)))) - ((var_16 - ((((arr_0 [i_0 + 1]) - (arr_0 [7])))))));

        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            var_19 = (min(var_19, (((((((var_13 / var_15) >= 4108389029))) * ((((((var_15 << (-149803504 + 149803512)))) || (arr_4 [i_1] [i_1 + 1])))))))));
            var_20 -= (((((var_13 / (arr_3 [i_1] [i_1 + 1])))) * (((((arr_0 [i_0]) * 0)) * ((((arr_3 [9] [i_1 + 3]) * -1)))))));
            var_21 *= (((((4108389011 == var_11) & (0 <= 29266))) - ((((arr_4 [i_0] [i_0 - 2]) || (arr_3 [9] [i_0 + 2]))))));
        }
    }
    /* vectorizable */
    for (int i_2 = 2; i_2 < 13;i_2 += 1)
    {
        var_22 = (max(var_22, (((arr_5 [i_2 + 4] [i_2 + 2]) - (arr_5 [i_2 + 4] [i_2])))));
        arr_7 [i_2 + 1] [i_2] = (((arr_5 [i_2 - 1] [i_2 - 1]) != (arr_6 [i_2])));
        var_23 = ((-14702 / (arr_5 [i_2] [i_2 + 2])));
    }

    for (int i_3 = 0; i_3 < 13;i_3 += 1)
    {
        var_24 = (((((((((arr_4 [i_3] [i_3]) >= -1))) < (1 < var_3)))) != ((((var_8 ^ var_3) > (var_10 >> 1))))));
        var_25 *= (((var_0 & -50) || (((arr_0 [i_3]) > var_2))));
        arr_10 [i_3] [i_3] = (((((var_2 && var_16) && (var_9 && var_6))) || (((arr_6 [i_3]) || var_4))));
        var_26 = (min(var_26, (4108389029 + 0)));
        arr_11 [i_3] [i_3] = (254 - 0);
    }
    #pragma endscop
}
