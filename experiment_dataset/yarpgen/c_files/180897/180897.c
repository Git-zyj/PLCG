/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180897
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180897 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180897
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, (min(var_16, (((((min(var_9, var_10))) ? var_3 : ((min(var_14, 31))))))))));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] = 1625438492;
        var_21 = ((-(arr_1 [i_0] [i_0])));
    }
    var_22 = (max(var_22, ((((((min(0, var_6)) << (((var_11 ^ 13816264394597585866) - 13816264394597551226)))) / ((min(-1, var_3))))))));
    var_23 = ((-(min(29, var_3))));

    for (int i_1 = 2; i_1 < 11;i_1 += 1) /* same iter space */
    {
        var_24 = ((((((-1254324369 != (arr_0 [i_1 - 1]))))) - (((arr_0 [i_1 - 2]) ? (arr_0 [i_1 - 2]) : -49))));
        var_25 = ((+((0 ? (arr_4 [i_1 + 3]) : (arr_4 [i_1 + 3])))));
    }
    /* vectorizable */
    for (int i_2 = 2; i_2 < 11;i_2 += 1) /* same iter space */
    {
        arr_7 [i_2 - 2] [i_2 + 2] = (((arr_0 [i_2 + 2]) << (((arr_0 [i_2 + 2]) - 7245492220401331232))));
        var_26 = (!115);
    }
    for (int i_3 = 2; i_3 < 11;i_3 += 1) /* same iter space */
    {
        arr_10 [i_3 + 2] [i_3] = ((~(((((arr_6 [i_3] [i_3 + 1]) + 940963306)) + (4 / -34)))));
        var_27 = (min(((var_12 ? 10376956688884679569 : 17268946637396882440)), ((((arr_0 [i_3 - 2]) < (((min(var_8, -2609)))))))));
        arr_11 [9] = ((~(~-76)));
        var_28 -= ((((min(((2297547137368897183 ? 62 : 6)), (arr_8 [i_3 + 1])))) ? ((~((var_5 + (arr_3 [i_3] [i_3]))))) : (arr_5 [i_3 - 2] [4])));
    }
    #pragma endscop
}
