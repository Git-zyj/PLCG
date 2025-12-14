/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120704
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120704 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120704
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_5;
    var_15 = ((-1371203339 && ((max((max(-88, var_6)), var_1)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [i_1] = ((min((!var_12), (arr_3 [i_1]))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        {
                            var_16 = ((+((~((502064491 ? (arr_8 [i_3] [17] [24] [17]) : (arr_5 [i_0])))))));
                            var_17 = (min(var_17, ((min(((~(arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))), ((max((arr_8 [i_0] [19] [i_2] [i_3]), (arr_9 [i_0] [i_1] [i_1] [i_2] [i_2] [i_3])))))))));
                        }
                    }
                }
                var_18 = var_7;
            }
        }
    }
    #pragma endscop
}
