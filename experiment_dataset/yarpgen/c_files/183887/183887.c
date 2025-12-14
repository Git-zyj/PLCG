/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183887
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_7 ? (((((-3833221930661657393 ? 1 : 18028))) / var_7)) : ((((((max(var_9, var_9))) || var_2))))));

    for (int i_0 = 4; i_0 < 17;i_0 += 1)
    {
        var_13 = (min(var_13, 4));
        arr_2 [7] = ((((max(64, ((var_1 << (-86 + 149)))))) ? (-1 | -1) : (arr_0 [i_0] [i_0 - 1])));
        var_14 = (max(-0, (max((arr_1 [5] [5]), (arr_1 [i_0] [i_0])))));
    }
    var_15 += (var_10 + var_9);

    for (int i_1 = 4; i_1 < 22;i_1 += 1) /* same iter space */
    {
        arr_7 [18] [i_1] = ((-(arr_3 [i_1 - 3])));
        arr_8 [i_1] = (((arr_6 [i_1 + 1]) - 26));
    }
    for (int i_2 = 4; i_2 < 22;i_2 += 1) /* same iter space */
    {
        var_16 = (arr_6 [i_2]);
        arr_11 [i_2 - 2] = var_4;
    }
    for (int i_3 = 0; i_3 < 21;i_3 += 1)
    {
        arr_15 [i_3] [i_3] = var_3;
        var_17 = (min(var_17, ((max((max((arr_5 [14]), 2535319690284618643)), ((((arr_14 [i_3] [i_3]) ? 6583474874476150985 : (arr_5 [i_3])))))))));
        arr_16 [i_3] = ((((((3179777052 ? var_4 : (arr_13 [i_3])))) || (((var_1 ? (arr_13 [i_3]) : 9))))));
    }
    #pragma endscop
}
