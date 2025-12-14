/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152893
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152893 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152893
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_10, var_1));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 23;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_0] [i_1] [i_1] = (((((!(((var_7 ? var_9 : (arr_0 [i_2 - 1]))))))) != (((!((min(176, 79))))))));
                    var_12 = arr_3 [i_1];
                }
            }
        }
    }
    var_13 ^= var_1;
    #pragma endscop
}
