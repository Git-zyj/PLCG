/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137217
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137217 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137217
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = ((4392338644021753208 >= -3306396832724753030) ? (arr_3 [2] [i_1]) : (arr_0 [i_0 - 1] [i_1 + 1]));
                var_19 *= var_18;
            }
        }
    }
    var_20 = ((~(((var_2 % var_18) / var_4))));
    var_21 = var_16;
    #pragma endscop
}
