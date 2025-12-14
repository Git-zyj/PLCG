/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104232
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(((((63 ? 181 : 1)) * (63 | -12246))), (1 > 4)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_11 = 4;
        arr_4 [i_0] = 177;
        var_12 = (min(var_12, (arr_0 [1] [i_0])));
        arr_5 [i_0] [i_0] = (((((12246 << (33 - 27)))) ? var_3 : 1));
    }
    for (int i_1 = 0; i_1 < 0;i_1 += 1)
    {
        arr_10 [1] = ((~var_5) ? ((min(((33457 ? 11 : (-2147483647 - 1))), (arr_6 [i_1 + 1] [i_1])))) : (((var_9 & (arr_9 [i_1])))));
        var_13 = (arr_9 [i_1]);
        arr_11 [i_1] = (((((32067 ? 1 : 33459))) ? (min((arr_7 [i_1 + 1]), var_5)) : (((arr_7 [i_1 + 1]) - (arr_7 [i_1 + 1])))));
    }
    var_14 = ((((((~16824) > ((1 ? var_9 : var_2))))) << var_4));
    #pragma endscop
}
