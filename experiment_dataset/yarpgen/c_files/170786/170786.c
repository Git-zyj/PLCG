/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170786
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170786 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170786
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_20 = -7641;
        var_21 = 7355987093325885317;
        var_22 = (((((((max(var_11, var_10))) ? var_3 : ((-7377580762191580262 ? -7377580762191580262 : 249))))) ? (min(((48161 ? 2533448817 : 7355987093325885317)), var_2)) : (var_13 && var_8)));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        var_23 = (arr_0 [i_1]);
        var_24 |= ((6 ? -73 : 54));
        var_25 += ((-(arr_2 [i_1] [i_1])));
        var_26 = ((7377580762191580248 ? 253 : (arr_0 [i_1])));
    }
    var_27 = ((((min(-1227, -7377580762191580259))) ? -7377580762191580262 : 5024573939409665394));
    var_28 &= var_2;
    var_29 = 9186;
    #pragma endscop
}
