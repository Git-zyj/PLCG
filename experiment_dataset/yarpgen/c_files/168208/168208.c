/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168208
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168208 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168208
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, (max((((3793060038 ? var_1 : -1))), ((249 ? -165655863506496459 : var_10))))));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = 165655863506496458;
        arr_3 [i_0] [i_0] = (~(((((var_1 ? (arr_0 [i_0]) : -165655863506496459))) ? (arr_0 [i_0]) : var_5)));

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            var_13 = 501907250;
            arr_6 [i_1] [i_1] = ((!((-4686314535710414746 && ((max(97, 3793060038)))))));
            arr_7 [i_1] [i_1] = var_3;
            var_14 = (((-(3793060059 / 5469))));
        }
    }
    var_15 = 30892;
    var_16 = max((((min(0, var_6)))), ((max(var_0, 156))));
    var_17 &= (((max((142 + -165655863506496474), 3793060045))) ? (var_11 + var_9) : (-9223372036854775807 - 1));
    #pragma endscop
}
