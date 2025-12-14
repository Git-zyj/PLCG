/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154632
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154632 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154632
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, var_1));

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        var_19 = (max(var_19, ((((max(27814, (min(3103319001, 12714)))) - 99)))));

        /* vectorizable */
        for (int i_1 = 4; i_1 < 18;i_1 += 1)
        {
            var_20 = ((-157952825990836072 ? -157952825990836068 : (arr_1 [i_0])));

            for (int i_2 = 4; i_2 < 20;i_2 += 1) /* same iter space */
            {
                var_21 = (max(var_21, (((-557393388 ? ((-157952825990836083 | (arr_0 [11]))) : (var_13 & 0))))));
                arr_6 [i_0] [i_0] = (((arr_0 [i_0 - 1]) == (arr_5 [i_0 + 1] [i_1 - 4] [i_0])));
            }
            for (int i_3 = 4; i_3 < 20;i_3 += 1) /* same iter space */
            {
                var_22 = -2051099229;
                arr_9 [i_0] [i_0] [i_1 - 3] [i_0] = 198;
                arr_10 [i_0] [i_1] [i_0] [i_3] = (((arr_5 [i_0] [i_1] [i_0]) > (arr_5 [i_0 - 1] [i_0 - 1] [i_0])));

                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {
                    var_23 ^= ((-(arr_2 [19] [i_3 - 2] [i_3 - 3])));
                    var_24 = ((var_17 << ((((arr_11 [i_0] [i_0] [i_1] [i_3 - 3] [i_4]) == var_9)))));
                }
            }
            arr_15 [i_0] = ((-(arr_5 [i_0 + 4] [i_0 + 4] [i_0])));
        }
        arr_16 [i_0] = (max((~-21771), 1670928663));
        var_25 = ((-(max((((var_14 * (arr_1 [i_0])))), var_7))));
    }
    #pragma endscop
}
