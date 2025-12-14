/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186438
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186438 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186438
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, (-6391563141174887377 + 2430454727)));
    var_13 = var_2;
    var_14 = (~3790435882145477733);

    for (int i_0 = 3; i_0 < 22;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((!(arr_1 [i_0 - 2] [i_0])));
        var_15 = (((arr_1 [i_0] [i_0]) != -1180827973));
        arr_3 [i_0] = ((7632961225389779006 ? 255 : -6771544451608316959));
    }
    for (int i_1 = 3; i_1 < 22;i_1 += 1) /* same iter space */
    {
        var_16 &= -6391563141174887377;
        arr_6 [i_1] [i_1 - 3] = (max((((arr_5 [i_1]) >> (arr_5 [i_1]))), ((min((arr_5 [i_1]), (arr_5 [i_1]))))));
        arr_7 [i_1] [i_1] = (8887453596439725954 + 1581923817);
    }
    #pragma endscop
}
