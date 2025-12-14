/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132032
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132032 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132032
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_10;

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_17 = (min(var_17, (151 | 0)));

        for (int i_1 = 1; i_1 < 21;i_1 += 1) /* same iter space */
        {
            var_18 = (((((var_8 & var_6) ? var_6 : ((28995 >> (760101309 - 760101302))))) * (12801 & var_11)));
            arr_7 [i_0] [i_1 - 1] [i_0] = (max(((var_2 ? var_10 : var_8)), 144));
        }
        for (int i_2 = 1; i_2 < 21;i_2 += 1) /* same iter space */
        {
            var_19 = (max(((!(((3864586974 ? 151 : 65510))))), 1));
            arr_10 [i_2 + 1] [i_2] [i_0] = (((5 % 1) ? ((-(49 & 23802))) : (var_13 <= 1698158874)));

            for (int i_3 = 0; i_3 < 22;i_3 += 1)
            {
                var_20 = ((((((var_10 == var_7) != 1))) | (var_7 >= var_7)));
                var_21 = (min(var_21, ((((((203 * 0) ? var_13 : (min(-391547950350838045, 26732)))) + (var_4 < -11))))));
                arr_13 [i_2] [i_2] [i_3] [i_3] = var_8;
            }
            var_22 += (min((max(51271, 1)), (-102 * 3657918527)));
            var_23 -= var_12;
        }
        for (int i_4 = 1; i_4 < 18;i_4 += 1)
        {
            arr_16 [i_0] &= (11955 * 1);
            var_24 = (246 >= var_0);
        }
    }
    for (int i_5 = 3; i_5 < 11;i_5 += 1)
    {
        var_25 = var_9;
        var_26 *= 1;
        arr_19 [i_5] = (((-968772718 || 12168461476933224763) ? 125 : (73 > 10715)));
    }
    #pragma endscop
}
