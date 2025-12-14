/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188873
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188873 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188873
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_4;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1) /* same iter space */
    {
        var_21 = (arr_0 [i_0] [i_0]);
        arr_4 [i_0] = (6040784444967478925 * 1853851739319833665);
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1) /* same iter space */
    {
        var_22 ^= (min(((var_10 + (arr_0 [5] [7]))), ((((var_0 + (arr_3 [i_1] [i_1]))) % var_0))));
        arr_7 [i_1] &= ((((min((var_7 && 72), 6040784444967478925))) || 1826211622946301839));
        var_23 = var_10;
    }
    var_24 += ((var_15 ^ (max(var_11, (6040784444967478934 || var_3)))));
    #pragma endscop
}
