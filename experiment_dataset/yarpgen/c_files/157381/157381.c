/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157381
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157381 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157381
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (var_9 / var_0);
    var_14 = (!-127);
    var_15 = 121;

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_16 = ((-56 ? (max((arr_1 [i_0] [i_0]), ((7444607006960781294 ? 2574524814 : 124)))) : (-32767 - 1)));
        arr_2 [i_0] [i_0] = ((~(max(((var_6 ? -6413677228920695440 : -587862308)), (((-117 ? (arr_1 [i_0] [i_0]) : (arr_0 [i_0]))))))));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        var_17 = ((1 == (max(3325127964, -6517176271960002539))));
        var_18 = (max(var_11, -7367628011042367432));
        arr_7 [0] [0] = (min(((-(arr_4 [i_1]))), ((((((var_2 ? -587862315 : -1797740718))) ? var_11 : 1)))));

        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            var_19 -= (((((-(min(4337092530027594968, -2241))))) ? -22 : ((max(1, -117)))));
            arr_10 [i_1] [i_2] [i_1] = max(-27, (max((((-6517176271960002539 ? var_12 : (-9223372036854775807 - 1)))), var_8)));
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                for (int i_4 = 3; i_4 < 12;i_4 += 1)
                {
                    {
                        var_20 = var_10;
                        var_21 = (max(var_21, ((max(1, ((0 ? (max((arr_4 [5]), (arr_4 [6]))) : (arr_6 [6]))))))));
                    }
                }
            }
            var_22 = (max(var_22, (((((max(var_1, 7444607006960781312))) ? (((((((-587862321 ? -2098476248012010012 : 7444607006960781288))) || -32746)))) : (-9223372036854775807 - 1))))));
        }
        for (int i_5 = 1; i_5 < 10;i_5 += 1)
        {
            var_23 = (min(var_23, ((max((max(-6517176271960002561, (arr_12 [i_1] [i_1] [i_1] [i_5 + 1]))), var_3)))));
            arr_19 [7] = 1;
            var_24 = (max(var_10, (max((max(4800934630709222561, 1)), var_4))));
        }
    }
    #pragma endscop
}
