/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159825
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159825 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159825
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_10 = (max(var_10, (((((((arr_0 [i_0] [i_0]) ? 27432 : -19200))) ? ((var_9 ? var_0 : var_7)) : (((arr_0 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0]))))))));

        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            arr_5 [i_1 - 1] = (max((((~29956) ? ((~(arr_0 [i_1 + 1] [i_0]))) : (((arr_3 [i_0]) ? var_8 : (arr_2 [i_1 + 1] [i_0] [i_0]))))), var_5));
            var_11 = 19201;
            var_12 = (max(var_12, var_6));
        }

        for (int i_2 = 1; i_2 < 8;i_2 += 1)
        {
            arr_8 [i_0] [i_0] = ((!(!-835)));
            var_13 *= ((((842 ? -27999 : 0)) / (834 || var_3)));
        }
    }
    for (int i_3 = 0; i_3 < 12;i_3 += 1)
    {
        var_14 += (((arr_10 [i_3] [i_3]) >> (((((max(-5507, var_1)))) - 2546))));
        arr_11 [i_3] = ((-1 ? 30546 : -27424));
    }
    for (int i_4 = 1; i_4 < 10;i_4 += 1)
    {
        var_15 = (min(var_15, (((((~(~-19200))) - ((~((max((arr_10 [i_4] [i_4]), (arr_6 [7] [4])))))))))));
        var_16 -= ((-((-(arr_1 [i_4 + 1] [i_4 + 1])))));
    }
    var_17 = var_8;
    var_18 ^= (((((-27439 ? ((var_1 ? var_3 : -15859)) : (var_3 * var_5)))) || var_8));
    #pragma endscop
}
