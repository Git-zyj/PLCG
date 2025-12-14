/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168449
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168449 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168449
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((var_5 & -210850745367072662) >> (123 - 103)));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_16 ^= ((3551221649 ? 2794361663 : 58354));
                    var_17 ^= (2794361663 <= (arr_2 [i_0 + 2] [i_0 - 2] [i_1 - 1]));
                }
            }
        }
    }
    #pragma endscop
}
