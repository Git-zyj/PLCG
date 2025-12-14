/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170681
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170681 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170681
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((((var_6 ? 8673156232531269809 : 134217727)))) ? 1 : ((min(((var_6 ? var_6 : var_8)), ((var_9 ? var_9 : var_6)))))));
    var_11 = (((((((min(var_6, var_2)))) == (min(var_6, 3579686580)))) ? var_5 : (max(var_9, (!var_3)))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        var_12 = (max(var_12, var_8));
        var_13 = (max(var_13, ((((arr_2 [i_0]) ? ((1 >> (((arr_2 [i_0 - 1]) - 5106987873946255584)))) : ((var_0 ? var_6 : var_1)))))));
        var_14 = (33410 | var_5);
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        var_15 ^= ((var_0 ? (((18374153213763022631 ? (arr_6 [i_1]) : 17950713047692991730))) : ((8673156232531269809 ^ (arr_4 [i_1] [i_1])))));
        arr_7 [i_1] = ((((!(((var_4 ? 496031026016559885 : 1850306544429317393)))))));
        var_16 = (arr_4 [i_1] [i_1]);
        var_17 -= var_2;
        arr_8 [i_1] [i_1] = ((min(((~(arr_6 [i_1]))), (arr_3 [i_1]))));
    }
    var_18 = (max(var_18, (((-8192 ? (((((max(var_4, var_2))) ? (!var_5) : var_4))) : (((((var_4 ? var_6 : 127))) | ((var_8 ? 5 : 33554431)))))))));
    #pragma endscop
}
