/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115862
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115862 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115862
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = -33554431;

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_12 = (min(var_12, (arr_3 [i_0])));
        var_13 = (max(var_13, ((min((!1631206619), (min(978728287, 890539433)))))));
        arr_4 [i_0] [i_0] = arr_1 [i_0];
        var_14 = (max(var_14, ((min(((((~(arr_1 [i_0]))) >> (var_3 + 14821))), ((~(min((arr_1 [i_0]), (arr_2 [i_0]))))))))));

        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            var_15 = (i_1 % 2 == zero) ? ((((!-37) >> ((((min((arr_6 [i_1]), (!3131310736498403232)))) + 21051))))) : ((((!-37) >> ((((((min((arr_6 [i_1]), (!3131310736498403232)))) + 21051)) - 21043)))));
            arr_8 [i_0] [i_1] = (((-(arr_2 [i_0]))));
        }
        for (int i_2 = 1; i_2 < 1;i_2 += 1)
        {
            var_16 -= (((arr_7 [i_2 - 1] [i_2 - 1]) + var_0));
            arr_12 [i_0] = (arr_5 [6] [12]);
            var_17 -= ((+(((-2147483647 - 1) ? 93630416 : 1))));
        }
        /* vectorizable */
        for (int i_3 = 2; i_3 < 19;i_3 += 1)
        {
            arr_16 [i_0] [i_3] = (1 | -978728290);
            var_18 = ((-(arr_6 [i_3])));

            for (int i_4 = 2; i_4 < 19;i_4 += 1) /* same iter space */
            {
                var_19 ^= ((!(arr_9 [i_3 - 1] [i_3] [i_4 + 1])));
                arr_20 [i_0] [4] [i_4 - 1] = -25352;
                var_20 = ((var_5 >= (arr_11 [i_3 - 1] [i_3 - 1])));
                var_21 = (arr_11 [i_3 + 2] [i_4 - 2]);
                var_22 = (max(var_22, (((arr_11 [i_0] [i_4 - 1]) ? -25352 : (arr_18 [i_0])))));
            }
            for (int i_5 = 2; i_5 < 19;i_5 += 1) /* same iter space */
            {
                arr_24 [i_0] [i_0] [i_5] = (1 == 15);
                var_23 = (arr_21 [i_0] [11] [1]);
            }
            var_24 = 16777200;
        }
    }
    #pragma endscop
}
