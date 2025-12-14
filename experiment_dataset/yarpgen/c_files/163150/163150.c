/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163150
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163150 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163150
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 23;i_0 += 1) /* same iter space */
    {
        var_15 = 23;
        arr_2 [i_0] [i_0] = (((((max(var_11, var_8))))) || (((((min(var_10, 35)))) <= (arr_0 [i_0]))));
        arr_3 [i_0] = (arr_1 [i_0]);
        arr_4 [i_0] = var_5;
    }
    for (int i_1 = 2; i_1 < 23;i_1 += 1) /* same iter space */
    {
        var_16 = (max(var_16, ((((var_14 + 9223372036854775807) >> var_0)))));
        var_17 = (min((((((arr_1 [i_1]) == (arr_0 [i_1]))) ? -var_7 : ((7892404235440979690 ? (arr_8 [i_1]) : -1)))), (arr_7 [i_1])));
        arr_9 [i_1 + 2] [i_1] = 220;
    }
    var_18 = (min(var_6, (((var_2 <= var_1) ? var_6 : (var_13 / var_11)))));
    var_19 = ((((min(-8601831012115795106, 43071))) ? var_10 : -64));
    #pragma endscop
}
