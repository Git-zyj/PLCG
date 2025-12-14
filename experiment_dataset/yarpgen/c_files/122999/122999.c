/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122999
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122999 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122999
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_9;

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = var_11;
        arr_3 [i_0] = ((((min((arr_0 [i_0] [i_0]), (((var_7 ? (arr_1 [i_0] [i_0]) : 3977202721)))))) ? (arr_1 [i_0] [i_0]) : var_0));
        arr_4 [i_0] = (((((-357406543 ? (arr_0 [i_0] [i_0]) : ((min(8191, 1564282360)))))) ? (((((317764572 ? 1 : 33))) ? (((arr_1 [i_0] [i_0]) * (arr_0 [i_0] [i_0]))) : (((((arr_1 [i_0] [i_0]) == (arr_1 [i_0] [i_0]))))))) : (arr_0 [i_0] [0])));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        var_18 = ((((max((arr_0 [1] [i_1]), (~1)))) ? ((((3780481175176749632 - (arr_1 [i_1] [i_1]))) ^ 3363601356103402332)) : (((arr_5 [i_1]) ? ((2305843009213693951 ? 15994864130679848453 : 137438953408)) : ((((arr_0 [i_1] [i_1]) ? (arr_6 [i_1] [4]) : (arr_5 [i_1]))))))));

        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            var_19 = (max(var_19, (((1 ? (((arr_1 [i_1] [i_1]) + (min(-2147483637, (arr_6 [i_1] [i_1]))))) : 3423344552)))));
            var_20 += var_14;
        }
    }
    #pragma endscop
}
