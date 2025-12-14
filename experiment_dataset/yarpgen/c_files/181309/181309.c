/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181309
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181309 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181309
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_5;
    var_15 = (min(((min(18001726206489857812, 16870))), -4842));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    arr_7 [i_2] = (arr_2 [14] [i_0]);
                    var_16 = (max(var_16, ((max(((+(((arr_5 [i_0] [i_0] [i_0]) ? 1 : (arr_6 [i_0] [i_0] [i_0] [i_1]))))), (arr_1 [i_0]))))));
                    var_17 = (min(var_17, ((max(16873, 18001726206489857793)))));
                }
            }
        }
    }
    var_18 = var_12;
    #pragma endscop
}
