/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116843
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116843 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116843
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((((var_0 % 24926) + 2147483647)) >> (var_17 + 3479278679886093818)));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_3 [i_0] = var_4;

        for (int i_1 = 0; i_1 < 15;i_1 += 1) /* same iter space */
        {
            arr_6 [i_1] = var_5;
            var_21 -= ((var_2 - (min((arr_2 [7]), var_12))));
            var_22 = (max(var_22, (arr_2 [i_0])));
            arr_7 [i_0] [i_0] [13] = (min(6379, (arr_0 [i_0])));
            var_23 ^= 24926;
        }
        for (int i_2 = 0; i_2 < 15;i_2 += 1) /* same iter space */
        {
            arr_11 [3] [i_0] [i_0] = (var_19 / ((132 / (min((arr_0 [2]), (arr_4 [i_0] [i_2]))))));
            arr_12 [i_2] [i_0] = (min(24935, (arr_4 [5] [5])));
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 15;i_3 += 1) /* same iter space */
        {

            for (int i_4 = 0; i_4 < 15;i_4 += 1)
            {
                arr_17 [i_4] = (24929 != 16069963976845906203);

                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {

                    for (int i_6 = 1; i_6 < 14;i_6 += 1)
                    {
                        arr_24 [i_6 + 1] [i_4] [i_4] [i_0] = ((((-8776251432472675713 || (arr_10 [i_3] [i_5] [14]))) || (var_13 || 246)));
                        var_24 = (max(var_24, ((((((24929 & (arr_10 [i_0] [i_3] [i_4])))) - var_19)))));
                        arr_25 [i_0] [i_0] [4] [i_5] [i_6 + 1] [i_0] [i_4] = (arr_19 [i_0] [i_0] [i_4] [i_0] [1]);
                        arr_26 [i_4] [4] [i_4] = (arr_8 [i_0] [i_0]);
                    }
                    arr_27 [i_4] = (arr_8 [0] [8]);
                    arr_28 [i_4] [i_4] [i_4] = (((((arr_14 [i_0]) * (arr_23 [i_0] [i_0] [1] [i_0]))) * (((arr_20 [8] [i_3] [i_3] [i_3] [8]) / (arr_18 [12] [i_4] [i_4] [i_5] [i_5])))));
                    arr_29 [i_4] = var_19;
                }
            }
            arr_30 [9] = ((-9126856010217012925 - (arr_4 [12] [12])));
            var_25 = var_8;
            var_26 *= (arr_19 [3] [i_3] [i_3] [i_3] [3]);
        }
    }
    #pragma endscop
}
