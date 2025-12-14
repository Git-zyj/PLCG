/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104710
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104710 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104710
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_7;

    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        arr_2 [12] = ((((((((arr_1 [i_0]) && (arr_1 [i_0])))) / var_10)) >> ((((((var_8 + 2147483647) >> (arr_1 [i_0 - 2]))) >= (!var_9))))));
        arr_3 [1] = ((!(((var_7 <= var_7) <= var_10))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_16 = ((((((arr_0 [i_1]) & ((((arr_4 [i_2] [i_1]) >> (var_8 + 999230935))))))) / ((var_1 | (228 * var_13)))));
                    arr_9 [i_0] [i_2] [i_0] = ((((((-(arr_8 [i_0] [5] [i_0]))) + var_8)) <= (var_13 > var_8)));
                }
            }
        }
    }
    for (int i_3 = 1; i_3 < 17;i_3 += 1)
    {
        arr_14 [i_3] &= (((((((var_3 + 2147483647) >> var_13)) < var_3)) && var_11));
        var_17 = ((~(((arr_11 [i_3]) / (arr_12 [i_3])))));
        var_18 ^= (((((var_13 > (!var_11)))) >> (((((arr_13 [i_3]) + (~var_12))) - 2625438645))));
    }
    for (int i_4 = 1; i_4 < 9;i_4 += 1)
    {
        var_19 = (max(var_19, var_9));
        var_20 = var_10;
        var_21 = 0;
    }
    var_22 = (((((((var_3 / var_4) + 2147483647)) >> (var_2 || var_1))) > ((-(var_12 * var_14)))));
    var_23 = -var_5;
    var_24 = (((((var_6 << (((~var_2) - 4204013190001476907))))) <= (((var_2 ^ var_1) >> ((((var_1 >> (var_7 - 731688976))) - 176))))));
    #pragma endscop
}
