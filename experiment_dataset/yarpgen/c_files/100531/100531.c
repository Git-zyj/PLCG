/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100531
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100531 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100531
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((~74) == (((!1) + var_5))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_1] [i_2] = (((~2285030076285909274) % (max(var_12, (((54022 ? 34070 : (arr_3 [i_0] [i_1] [i_2 + 1]))))))));
                    arr_11 [i_0] [i_2] [i_2] = ((-212858137 ? (max(((min(var_7, 208))), -0)) : (((~((60631 ? 0 : 212858141)))))));
                }
            }
        }
    }
    #pragma endscop
}
