/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158038
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158038 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158038
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_17;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_20 = (min(((((arr_5 [i_0] [i_0 + 1] [11] [i_0]) < var_17))), -1553061860));
                    var_21 = (((((((min(45, (arr_6 [i_2] [i_1] [i_1] [i_0]))))) > 18446744073709551615)) ? ((0 ? 3975383342586527833 : 1)) : (+-0)));
                }
            }
        }
    }
    var_22 = 1;
    #pragma endscop
}
