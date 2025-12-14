/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129585
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129585 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129585
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((~(max(((var_1 << (var_8 - 182))), ((((var_2 + 2147483647) << (var_0 - 41))))))));

    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        var_18 |= ((((((21 << (-22 + 29)))) ? (((arr_1 [1]) ? var_4 : (arr_1 [i_0 - 3]))) : (arr_0 [i_0]))));
        arr_2 [i_0] |= (((max((min(8110092755068129734, 10657007302418551)), -3)) + (((max(24935, 40))))));
        arr_3 [12] [i_0 - 1] = (arr_0 [i_0]);
        var_19 = var_12;
        arr_4 [i_0] = max(((max((arr_1 [i_0 + 2]), (arr_1 [i_0])))), ((~(-38 & 3009297126548071348))));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        arr_7 [i_1] = (arr_5 [19]);

        for (int i_2 = 2; i_2 < 18;i_2 += 1)
        {
            var_20 = (((arr_6 [i_2 + 2] [i_2 + 1]) ? 21 : 3584));

            for (int i_3 = 3; i_3 < 17;i_3 += 1)
            {
                var_21 = (((((-(arr_0 [i_3 + 3])))) ? ((((!(arr_13 [i_2 - 1] [i_3 + 1]))))) : -7729796843296659443));
                var_22 = (((9398194087691126559 + var_9) ^ (((-(arr_10 [i_3 + 2] [i_2 + 2] [i_1]))))));
            }

            /* vectorizable */
            for (int i_4 = 2; i_4 < 18;i_4 += 1)
            {
                arr_17 [i_1] [i_1] = (arr_10 [i_2 - 1] [i_2 - 2] [i_4 - 1]);
                var_23 = var_9;
            }
            arr_18 [1] [i_2] [i_1] = (max(var_8, (max(-50, 205))));
            arr_19 [i_1] [i_2] = ((((((-10737 ? 17 : 4294967295)))) / 1870211529746982642));
        }
    }
    var_24 = (min(((var_12 << ((((max(97, 1))) - 97)))), 45));
    #pragma endscop
}
