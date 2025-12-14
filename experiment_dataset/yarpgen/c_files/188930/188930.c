/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188930
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188930 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188930
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((((((var_5 ? 19571 : var_11)) << (-var_13 - 2431119585257953276)))) || 3614963504332837358));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_17 += ((((((min(var_9, var_9))) > (var_15 || var_0))) ? (max(((~(arr_0 [i_0 + 2]))), (arr_5 [i_0] [i_0 - 2] [i_0 - 2]))) : (((max((arr_5 [i_0 + 1] [i_0 - 2] [i_0 - 2]), var_11))))));

                    for (int i_3 = 2; i_3 < 11;i_3 += 1)
                    {
                        arr_11 [i_1] = (((max((arr_3 [i_0] [i_0 - 1]), var_5)) << (((arr_9 [i_0] [i_0 - 1] [i_3 + 1] [i_0 - 1] [i_3]) - 771210))));
                        var_18 = (((((((arr_8 [i_3 - 2] [i_3 - 2] [i_0] [i_0] [i_0]) ? 14831780569376714267 : (arr_5 [i_0 - 1] [i_0 - 1] [i_3 - 1]))) * ((max((arr_10 [i_0]), var_15))))) & (((((~(arr_6 [i_0] [i_0]))) * -7)))));
                    }
                    var_19 = (min(var_19, ((max((((-(arr_9 [i_0] [i_0] [i_0] [i_0] [i_0])))), 3614963504332837347)))));
                }
            }
        }
    }
    #pragma endscop
}
