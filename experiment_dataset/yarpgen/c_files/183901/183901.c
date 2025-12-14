/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183901
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183901 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183901
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_0] [1] = (arr_9 [i_0 + 2] [i_1 + 2] [i_2 - 1]);
                    var_11 = (max(var_11, 241));
                    var_12 = ((!((max(var_5, 233)))));
                }
            }
        }
    }
    var_13 = (max(var_13, ((((241 != 241) ? (((!(-7 != var_1)))) : (((!((max((-127 - 1), var_0)))))))))));
    var_14 = (!var_9);
    #pragma endscop
}
