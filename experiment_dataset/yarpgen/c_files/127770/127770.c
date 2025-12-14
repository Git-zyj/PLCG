/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127770
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127770 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127770
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_20 = (((((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0]))) < (!21751)));
        var_21 = ((159 ? 255 : -21752));
    }
    for (int i_1 = 3; i_1 < 8;i_1 += 1) /* same iter space */
    {
        var_22 = ((((((arr_3 [i_1 - 3]) ? (arr_3 [i_1 - 1]) : (arr_3 [i_1 + 3])))) ? -25014 : (((arr_3 [i_1 - 3]) ? (arr_3 [i_1 - 2]) : var_3))));
        var_23 ^= (min(1, 6474));
        var_24 = (min(var_24, (((((-1 ? (max(64348430, 21758)) : ((max(1, 21751)))))) ? (max((((arr_3 [i_1]) * 7792290579172390039)), ((var_19 ? (arr_3 [7]) : var_19)))) : (max((max(17788961560928799186, (arr_0 [i_1]))), ((min(var_4, -11936)))))))));
    }
    for (int i_2 = 3; i_2 < 8;i_2 += 1) /* same iter space */
    {
        arr_7 [i_2 - 2] [5] = ((((arr_0 [i_2 - 2]) ? (arr_0 [i_2 + 2]) : (arr_4 [i_2 - 3] [i_2 + 3]))));
        var_25 ^= (((1 % (min(var_17, (arr_3 [i_2 + 3]))))) % ((((arr_0 [i_2 - 2]) ? (-127 - 1) : 241))));
    }
    var_26 = (((((((max(27698, var_18))) ? (var_9 > var_5) : var_0))) ? var_11 : var_16));
    var_27 = var_8;
    var_28 = (-15556 >= var_0);
    #pragma endscop
}
