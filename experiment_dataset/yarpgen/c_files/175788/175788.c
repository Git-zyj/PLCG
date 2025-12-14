/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175788
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175788 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175788
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(((min((var_7 % var_8), -29370))), ((9223372036854775807 ? 85 : 6401145543753892960))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_16 = (max((!85), ((12 ? (0 / var_5) : (min((arr_5 [i_0]), (arr_0 [i_0])))))));

                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    arr_10 [i_0] [i_1] [i_2] [i_2] = (max(((((-75 ? (arr_2 [i_2] [i_2]) : 3)) << (-var_1 + 55052))), (((max(65532, (arr_8 [i_0] [i_0] [i_2])))))));
                    arr_11 [i_0] = ((!((max(var_10, (min(28, (arr_9 [i_0] [i_1] [i_1] [i_2]))))))));
                    var_17 = min((max((max(4523124582899513993, 1)), (((36773 ? var_8 : (arr_9 [8] [i_0] [i_0] [1])))))), (min((var_3 ^ var_4), (!var_0))));
                }
                var_18 = ((((((~((max(65523, 1))))) + 2147483647)) >> ((((+((max((arr_1 [i_0]), 47739))))) - 47713))));
            }
        }
    }
    var_19 = (min((((!((max(var_6, var_5)))))), ((((var_0 >> (var_7 - 1174352187))) & (~28852)))));
    var_20 = (min(var_20, var_14));
    #pragma endscop
}
