/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178990
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178990 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178990
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((var_0 ? (((((-2147483647 - 1) || (-2147483647 - 1))))) : var_5));
    var_15 = (~var_13);
    var_16 = max((~2147483647), var_10);

    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 13;i_1 += 1) /* same iter space */
        {
            var_17 = (((((arr_2 [i_0 - 1]) ? ((var_3 ? var_10 : (arr_0 [i_0]))) : ((((arr_2 [i_0]) >> (((arr_1 [i_0]) - 1819211955))))))) <= (((((max((arr_3 [i_1]), var_13))) ? (arr_0 [i_0]) : (arr_0 [i_0 - 2]))))));
            arr_4 [i_1] [i_0] = (arr_1 [i_0]);
            var_18 ^= (min((max((((arr_0 [1]) ? 1855503459664525602 : (arr_3 [10]))), ((max((arr_1 [i_0]), (arr_0 [i_0])))))), (arr_0 [i_0])));
        }
        for (int i_2 = 0; i_2 < 13;i_2 += 1) /* same iter space */
        {
            var_19 = (arr_2 [i_0]);
            arr_7 [i_0 + 2] [i_2] = (((arr_1 [i_0 + 1]) ^ (arr_3 [i_0 + 1])));
            arr_8 [i_0] = ((((((-103 / (arr_1 [i_2]))) * 238)) <= (arr_3 [i_2])));
            var_20 = (((-(arr_3 [i_0 - 2]))) >= ((-(arr_1 [i_0 - 2]))));
            var_21 = (max((((~(min(var_8, (arr_1 [i_0])))))), (min(-1855503459664525598, -1855503459664525610))));
        }

        for (int i_3 = 2; i_3 < 12;i_3 += 1)
        {
            arr_12 [i_0 + 1] = ((1 ? 2147483647 : ((((!321335247342447808) < -2147483643)))));
            var_22 = ((var_6 / (((arr_6 [i_3] [i_3 + 1]) ? (arr_10 [i_3 - 2] [i_3 + 1] [i_3]) : (arr_6 [9] [i_3 + 1])))));
        }
        for (int i_4 = 1; i_4 < 12;i_4 += 1)
        {
            arr_16 [i_0] = (max((((((arr_1 [i_4]) / var_2)) / 2147483647)), ((2147483647 ? 1 : ((88 ? 149 : 243))))));

            for (int i_5 = 0; i_5 < 13;i_5 += 1) /* same iter space */
            {
                arr_19 [i_5] = arr_9 [i_5];
                var_23 = (min(var_23, (((((max((arr_18 [1] [i_4 - 1] [i_0 + 2] [i_0 + 2]), (arr_18 [i_4] [i_4 - 1] [i_4 - 1] [i_0 - 2])))) ? ((((arr_18 [i_5] [i_4 + 1] [i_4] [i_0 - 1]) ? var_3 : -2147483643))) : (((((arr_18 [i_5] [i_4 - 1] [i_0] [i_0 + 1]) + 9223372036854775807)) >> (2147483647 - 2147483623))))))));
            }
            for (int i_6 = 0; i_6 < 13;i_6 += 1) /* same iter space */
            {
                arr_23 [i_6] = ((((max((((var_1 | (arr_11 [i_0 + 2] [i_0 + 2])))), (((arr_5 [i_0] [i_4]) / -1855503459664525596))))) ? (((((arr_18 [i_4] [i_4] [i_4] [i_4 - 1]) || (arr_18 [i_4 + 1] [i_4 - 1] [i_4 - 1] [i_4 - 1]))))) : (min((max(-2147483644, 1948799651911779805)), ((min((arr_13 [i_0 + 2]), (arr_13 [i_6]))))))));
                arr_24 [i_6] [i_6] = (((((!(((808527051 << (((var_7 + 796228044) - 8)))))))) >= ((~(arr_0 [i_4 + 1])))));
                var_24 = ((((((max((arr_21 [i_0] [i_6] [i_6]), var_9))) ? (arr_2 [i_0 - 2]) : ((max(var_8, var_12))))) - ((((max((arr_10 [i_0] [i_4 + 1] [i_6]), var_7))) ? ((95 + (arr_11 [i_4] [i_4]))) : ((max(var_3, var_2)))))));
                arr_25 [i_0] [i_6] = ((((((-2147483647 ? var_13 : (arr_21 [i_0] [i_6] [i_6])))) ? (arr_5 [i_0 - 2] [i_4 - 1]) : (((arr_13 [i_4 - 1]) ? (arr_17 [i_0 - 2] [i_0 + 2] [10]) : var_4)))));
            }
        }
        var_25 = ((((((arr_9 [i_0 + 2]) ? var_1 : ((((arr_6 [i_0] [i_0]) < (arr_15 [i_0 - 1]))))))) | (((arr_17 [i_0] [i_0 - 1] [i_0 + 1]) ? (arr_17 [i_0] [i_0 - 1] [i_0]) : (arr_17 [i_0] [i_0 - 1] [i_0])))));
    }
    #pragma endscop
}
