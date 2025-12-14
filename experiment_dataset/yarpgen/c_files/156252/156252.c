/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156252
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156252 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156252
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_10, ((255 ? var_1 : (min(var_0, var_4))))));

    for (int i_0 = 0; i_0 < 23;i_0 += 1) /* same iter space */
    {
        var_20 *= ((~(max((var_1 || 2097151), (min(var_9, 255))))));
        var_21 = ((var_3 ? var_2 : ((min(var_13, ((var_16 ? var_1 : (arr_1 [i_0]))))))));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1) /* same iter space */
    {
        var_22 &= ((var_0 ? (max((arr_4 [i_1]), ((243 ? var_15 : (arr_3 [i_1] [i_1]))))) : (((((max(var_6, var_5))) ? (arr_1 [i_1]) : ((-(arr_2 [i_1]))))))));
        arr_5 [i_1] [i_1] = -2644754910485975835;
    }
    var_23 = (max(var_23, var_3));
    #pragma endscop
}
