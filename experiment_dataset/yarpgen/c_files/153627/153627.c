/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153627
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153627 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153627
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(1100462407, ((-2096770621 ? (min(2096770638, 1100462399)) : (-2096770621 - -2096770602)))));
    var_11 = 311116838;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] [i_0] = ((var_5 ? -15 : -7601001313076130752));
        var_12 = ((var_8 ? (arr_1 [i_0]) : -1100462407));
        var_13 = ((-4797678711718290512 ? 1100462407 : 45949));
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1) /* same iter space */
    {
        var_14 = ((((1100462382 ? (arr_0 [i_1]) : 6)) >> ((((1 ? 4034326281 : 854813485)) >> ((((var_9 ? (arr_5 [i_1]) : 8146529761276689979)) - 2026311399))))));
        var_15 = (arr_1 [i_1]);
        var_16 = (((((min(-106, 1152921504606845952)) + ((min(-1146894156, (-2147483647 - 1))))))) ? ((((min(var_9, var_3)) != (18 <= -1100462395)))) : var_6);
    }
    #pragma endscop
}
