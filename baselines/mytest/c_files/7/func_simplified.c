/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7
Invocation: ../scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7 -o /data/zyj/loop_generator/baselines/yarpgen/mytest/c_files/7
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_19 * (((var_6 ? -2147483617 : var_18)))));

    for (int i_0 = 2; i_0 < 10; i_0 += 3)
    {
        arr_2 [i_0] [i_0] = (2078200668U);
        var_21 = (max(var_21, (((+(max(var_12, (arr_0 [i_0 - 2] [i_0 + 2]))))))));
    }
    for (int i_1 = 0; i_1 < 13; i_1 += 4)
    {
        arr_5 [i_1] = ((-(((((-(arr_4 [7LL] [i_1])))) ? 1 : (var_15 / 1)))));
        arr_6 [i_1] = (((((max((arr_3 [i_1] [i_1]), (2078200666U))) * -68)) / (arr_1 [i_1])));
        arr_7 [i_1] = (arr_3 [i_1] [6ULL]);

        for (unsigned int i_2 = 0; i_2 < 13; i_2 += 1)
        {
            var_22 = (min((max((arr_3 [i_1] [i_2]), (2216766631U))), var_13));
            var_23 = (min((((arr_8 [i_1] [i_2]) + 2512)), ((min((arr_8 [i_1] [i_1]), (arr_4 [i_1] [i_1]))))));
            arr_10 [5] = 87;
            var_24 = 2078200645U;
        }
        for (int i_3 = 1; i_3 < 11; i_3 += 3)
        {
            var_25 *= var_9;

            for (int i_4 = 0; i_4 < 13; i_4 += 3) /* same iter space */
            {
                var_26 *= (arr_15 [i_1] [i_3 - 1] [i_3 + 1]);
                var_27 = 1;
                var_28 = (arr_15 [i_4] [i_3 + 2] [i_4]);
                arr_18 [i_1] [i_4] [i_4] = (arr_15 [i_4] [i_3 + 1] [11]);
            }
            for (int i_5 = 0; i_5 < 13; i_5 += 3) /* same iter space */
            {
                var_29 = (2216766615U);

                for (int i_6 = 0; i_6 < 13; i_6 += 3)
                {
                    var_30 -= (((((((arr_9 [i_3 + 1] [i_3 + 1]) >= (arr_19 [i_1] [i_3] [i_3 - 1]))))) > (min(var_1, 0))));
                    var_31 = (max(var_31, ((max(1, (((+(arr_14 [i_1] [i_3])))))))));
                    arr_25 [i_5] = (0U);
                    var_32 = ((+(3125270183U)));
                    var_33 = var_5;
                }
                arr_26 [i_5] = min((max(((((arr_9 [i_1] [i_3]) ? (arr_4 [i_1] [i_1]) : (arr_24 [i_1] [i_1] [i_3] [i_5] [i_5])))), var_1)), ((max(var_0, 156))));
            }
        }
        for (int i_7 = 1; i_7 < 10; i_7 += 3)
        {
            var_34 = var_17;
            arr_29 [i_1] [i_7] [i_7] = (((((var_19 ? var_19 : var_11))) ? ((((arr_28 [i_1] [i_7 + 1]) || 2524))) : (!var_3)));
        }
        var_35 = (arr_24 [1] [i_1] [11] [i_1] [i_1]);
    }
    var_36 = var_10;
    #pragma endscop
}
