/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106414
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106414 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106414
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = min(var_6, (97 - 164));
        var_16 = (min((((arr_1 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0]))), (arr_1 [i_0] [i_0])));
        var_17 = ((((((0 ? 4946457504189187961 : 1)))) <= (arr_1 [i_0] [i_0])));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1) /* same iter space */
    {
        var_18 = ((((min(28769, -1755285029))) * (((((-99 ? (arr_5 [i_1] [i_1]) : 15807))) | (var_10 & -812121457)))));

        for (int i_2 = 0; i_2 < 21;i_2 += 1) /* same iter space */
        {
            arr_8 [i_1] [i_2] = 28770;
            var_19 = var_13;
            arr_9 [i_1] = (((1755285016 + 2147483647) >> (var_9 + 8014461350782990797)));
        }
        for (int i_3 = 0; i_3 < 21;i_3 += 1) /* same iter space */
        {
            var_20 = (arr_11 [i_1] [i_1] [i_1]);
            var_21 = (min(var_21, (((arr_1 [i_1] [i_1]) ? 23935 : 678021395524682232))));
            arr_12 [i_1] = (arr_10 [i_3] [i_3] [i_1]);
        }
    }
    var_22 = (min(var_22, ((((-((var_5 ? -23874 : var_3))))))));
    #pragma endscop
}
