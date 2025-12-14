/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106774
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106774 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106774
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((~-7746) / var_14));

    for (int i_0 = 1; i_0 < 9;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0 - 1] [i_0] = (max(((0 ? 7 : 241)), (((12 != ((241 ? -16 : 32758)))))));
        var_18 ^= 15;
    }
    for (int i_1 = 1; i_1 < 9;i_1 += 1) /* same iter space */
    {
        var_19 = (min(var_19, ((((~0) / ((126 / (42474 != 60752))))))));
        var_20 *= ((!(((1355608505 && 982560686) || ((max(23072, 31662)))))));
        arr_5 [i_1] [i_1] = (min((-17 | 1), (~245760)));
    }
    #pragma endscop
}
