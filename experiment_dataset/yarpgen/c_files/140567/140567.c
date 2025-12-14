/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140567
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140567 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140567
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((max((max(var_0, 0)), var_5)) % ((max(var_8, (var_9 & -108342348))))));
    var_18 = ((var_0 ? ((((max(var_6, var_12))) ? (var_6 >= var_7) : var_10)) : (((min(19421, (0 < 1)))))));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_19 = (max(var_19, ((((max((arr_1 [i_0] [i_0]), var_3))) ? ((min((arr_1 [i_0] [i_0]), var_3))) : (arr_1 [i_0] [1])))));
        var_20 = (-(arr_1 [i_0] [i_0]));

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            var_21 = (min(var_21, ((max(((max(((0 < (arr_0 [i_0]))), ((!(arr_4 [i_0] [i_0])))))), var_0)))));
            arr_5 [i_0] [i_0] = ((~(((arr_2 [12] [i_1] [i_1]) ? (arr_0 [i_1]) : (((arr_1 [i_1] [i_0]) ? (arr_0 [i_1]) : (arr_0 [i_0])))))));
        }
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_22 &= (((min((max(var_4, (arr_4 [i_0] [i_2]))), ((((arr_2 [i_0] [i_2] [i_2]) ? (arr_8 [22] [22]) : (arr_0 [i_2])))))) ^ (((-110 ? 255 : 3223197052)))));
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                for (int i_4 = 3; i_4 < 20;i_4 += 1)
                {
                    {
                        arr_14 [i_0] [i_0] [17] [6] = (max(((-63 ? 398163297835844726 : 121)), (min((arr_13 [9] [i_3] [i_2] [i_0]), ((max(65, (arr_6 [i_0] [i_2] [i_4]))))))));
                        var_23 = (((((1793370973 ? (arr_0 [i_4 + 2]) : (((3223197052 && (arr_1 [i_0] [i_4]))))))) & (max((((arr_6 [i_0] [i_0] [i_0]) ? 2501596323 : var_1)), -30))));
                    }
                }
            }
            arr_15 [i_0] [i_0] [10] &= ((((arr_13 [i_0] [i_0] [i_2] [21]) < (arr_4 [i_0] [i_2]))));
        }
    }
    #pragma endscop
}
