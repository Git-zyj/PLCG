/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179880
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((var_1 != (var_8 / var_4)));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_17 = ((((((var_2 ? var_10 : var_3)))) | (min((arr_1 [i_0]), var_14))));
        arr_4 [i_0] [10] = ((((((((var_7 >> (var_6 - 28276)))) && var_15))) > ((var_12 << (((arr_0 [i_0]) + 6124))))));
    }

    for (int i_1 = 1; i_1 < 17;i_1 += 1) /* same iter space */
    {
        arr_8 [1] = (((((~var_2) % var_15)) < 256));
        var_18 = (max(var_18, (((((((var_8 + 2147483647) << (var_4 - 89)))) ? (((7 <= 1) ? (!var_12) : ((15 ? 0 : var_12)))) : (((((!(arr_7 [i_1])))) - (128 != 1))))))));
        var_19 = ((-((var_8 ? ((min(var_4, -68))) : var_0))));
    }
    for (int i_2 = 1; i_2 < 17;i_2 += 1) /* same iter space */
    {
        var_20 = ((-85 - ((((0 + var_10) != 81)))));
        var_21 = ((0 >> (min(((min(var_2, 0))), (min((arr_5 [1]), 2723746485084468816))))));
        arr_11 [i_2 - 1] = -var_6;
        arr_12 [i_2] = ((5991 ^ var_15) || ((4265670577235386890 > (arr_9 [i_2]))));
    }
    var_22 = (max(var_22, ((((var_12 % var_7) <= var_0)))));
    #pragma endscop
}
