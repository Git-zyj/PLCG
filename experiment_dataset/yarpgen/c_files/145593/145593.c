/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145593
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145593 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145593
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 15;i_0 += 1) /* same iter space */
    {
        var_14 = (((((-(1071421307 | 4294967295)))) ? (((((max((arr_1 [i_0 - 1]), (arr_1 [i_0]))))) / ((~(arr_0 [i_0]))))) : ((~(((arr_0 [i_0]) % 3498881092))))));
        arr_3 [14] = (((((max(511, (arr_2 [i_0] [i_0 - 1])))) || ((((((arr_0 [i_0]) + 9223372036854775807)) >> (var_8 - 2664331755)))))));
    }
    for (int i_1 = 1; i_1 < 15;i_1 += 1) /* same iter space */
    {
        var_15 = (arr_0 [i_1 + 1]);
        var_16 = (((((((4294967295 ? (arr_1 [i_1]) : (arr_2 [i_1 - 1] [i_1 - 1])))) ? (arr_1 [i_1]) : var_5)) > (max((((-(arr_6 [i_1] [i_1 - 1])))), var_5))));
        arr_8 [i_1] &= 4294967295;
    }
    var_17 = (((((!var_5) ? (var_0 * 1245576041) : ((1048575 ? -49 : var_4))))) ? (max(((var_8 ? var_3 : 4294967295)), var_8)) : (min(-85, 4293918712)));
    var_18 = (max(var_4, 1));
    var_19 = (max(((((var_13 || var_12) ? -var_9 : var_0))), ((18 ? (((var_11 ? 94 : var_13))) : ((13178 ? 2971 : var_11))))));
    #pragma endscop
}
