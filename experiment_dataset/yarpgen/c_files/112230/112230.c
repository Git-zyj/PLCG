/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112230
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112230 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112230
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, ((((min((var_14 * 3089086387), var_4)) * var_9)))));

    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        var_16 = (min(var_1, (min(((var_3 ? (arr_1 [i_0] [7]) : 7705427886341637509)), (3629127935 ^ 11014877518699597177)))));
        var_17 = var_14;
        var_18 = (max(var_18, ((min(7705427886341637509, (min((arr_2 [i_0 + 1]), 1434847162)))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        var_19 &= 3784492855325563235;
        var_20 &= (((180789088 ? 6030117416800080336 : var_13)));
    }
    #pragma endscop
}
