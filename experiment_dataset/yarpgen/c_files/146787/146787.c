/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146787
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146787 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146787
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((max((var_8 >= -12), var_10)) < var_8));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 11;i_2 += 1)
            {
                {
                    var_15 = (arr_0 [i_0 - 1] [i_0 - 2]);
                    var_16 = (max((arr_2 [i_2 + 1] [i_2 - 1] [i_2 - 1]), (arr_1 [i_0 - 2])));
                }
            }
        }
    }
    #pragma endscop
}
