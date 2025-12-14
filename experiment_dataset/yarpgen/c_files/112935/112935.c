/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112935
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112935 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112935
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        var_13 = (((((~((3028097901 ? 158 : (arr_1 [i_0] [i_0])))))) ? (arr_1 [i_0] [i_0]) : 1));
        arr_2 [i_0] = (max(((((142 ? 98 : (arr_1 [i_0 + 2] [i_0]))) << (((max(16132121049163911081, 1)) - 16132121049163911069)))), ((((49 && var_5) >= ((((arr_1 [i_0] [i_0]) <= (arr_1 [i_0 + 2] [i_0])))))))));
        var_14 = (max(var_14, ((((((max(98, var_7)))) == (min(((9223372036854775794 ^ (arr_1 [18] [18]))), ((max((arr_0 [i_0 + 2] [i_0 - 2]), (arr_1 [i_0] [0])))))))))));
        var_15 = (~142);
        var_16 = (((((var_7 - (((max((arr_0 [i_0] [i_0 + 3]), -50))))))) ? var_1 : (((min((((!(arr_0 [i_0] [i_0 + 3])))), -27415))))));
    }
    var_17 = 1;
    #pragma endscop
}
