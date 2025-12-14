/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173238
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173238 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173238
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, ((max((((var_10 ? var_10 : var_4))), var_8)))));

    for (int i_0 = 0; i_0 < 22;i_0 += 1) /* same iter space */
    {
        var_13 = (var_2 / var_8);
        arr_2 [i_0] [i_0] = (min((((((-(arr_0 [1])))) ? (arr_1 [i_0]) : (((arr_0 [i_0]) ? (arr_0 [i_0]) : var_9)))), ((var_4 ? (arr_1 [i_0]) : (((((arr_1 [i_0]) + 2147483647)) >> (((arr_0 [i_0]) - 5225))))))));
        var_14 = arr_1 [i_0];
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = min(13657838348912642233, (arr_0 [i_1]));
        var_15 = ((-(((arr_4 [i_1] [i_1]) ? (arr_4 [i_1] [i_1]) : (arr_3 [i_1] [i_1])))));
        var_16 = arr_4 [i_1] [i_1];
        var_17 = (((arr_1 [1]) ? 4788905724796909404 : ((((!(32767 * 420054006)))))));
        arr_7 [16] [i_1] = (((arr_5 [i_1] [i_1]) + ((50177 ? 59 : (arr_5 [i_1] [i_1])))));
    }
    for (int i_2 = 1; i_2 < 24;i_2 += 1)
    {
        var_18 = ((((((arr_9 [i_2]) ? (arr_9 [i_2]) : (arr_9 [i_2])))) ? ((((((var_6 ? var_6 : var_7))) ? (arr_8 [i_2]) : (arr_8 [i_2])))) : (((arr_8 [i_2]) ? ((245 ? 4788905724796909373 : (arr_9 [i_2]))) : var_9))));
        var_19 -= (arr_8 [18]);
        var_20 = (!var_5);
    }
    var_21 = (min(var_21, ((min(var_6, (((((min(4788905724796909379, 32767))) ? var_5 : var_7))))))));
    var_22 = (max(var_22, ((((0 <= 32766) ? var_3 : var_5)))));
    #pragma endscop
}
