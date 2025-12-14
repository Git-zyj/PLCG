/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154167
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154167 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154167
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        var_15 = (max(var_15, ((min((!var_11), (min(-21, 24)))))));
        var_16 = ((((var_12 ? (var_5 && 7493) : var_9))) ? (var_9 & 17317) : ((-(!var_10))));
        var_17 = ((-2668515657 ? (((((1 ? var_7 : var_1))) ? (((74848040 ? var_0 : var_1))) : ((var_1 ? (arr_1 [i_0] [i_0]) : var_14)))) : (((-(var_0 >= var_13))))));
        var_18 = ((-var_5 * (((arr_1 [i_0 - 2] [i_0]) * var_13))));
        var_19 = ((((min(var_4, var_4))) >= 5159));
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            {
                var_20 = (max(var_20, -24));
                var_21 = ((2147483647 ? ((-(arr_1 [i_1] [i_2]))) : (((min(57, var_3))))));
                var_22 = (max(var_22, ((min((7 & 1), 58043)))));
            }
        }
    }
    var_23 = 73;
    var_24 = ((36756 ? (min(((48 ? -2147483647 : 1716213071667969944)), var_5)) : ((((!((min(73, 9)))))))));
    var_25 = (max(var_25, (min(((var_7 >> (3857451238895880711 - 3857451238895880708))), var_4))));
    #pragma endscop
}
