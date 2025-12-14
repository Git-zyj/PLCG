/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155921
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155921 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155921
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        var_20 = (min(var_20, ((((var_5 > var_2) >= (((!((((arr_0 [i_0]) + -18254)))))))))));
        arr_2 [3] = (((arr_1 [16]) ? var_4 : (((((-16497 ? 5399203994829822744 : 16496))) ? 1685 : 16501))));
        var_21 = ((((((arr_0 [i_0]) != (arr_0 [i_0 - 3])))) >= ((var_19 >> ((((var_18 ? var_14 : 4253965629)) - 1234884553))))));
    }
    var_22 = (min((var_5 + 8), var_18));
    var_23 = ((((63155 ? var_12 : 63173)) >= (((((113 ? 25 : var_11))) ? var_13 : 2380))));
    #pragma endscop
}
