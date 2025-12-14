/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167691
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167691 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167691
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((!var_7) ? 157 : 45419);
    var_16 = (min((((var_2 < (~var_12)))), var_3));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                {
                    var_17 = (!25402);
                    var_18 |= ((((max((((arr_3 [i_0] [i_1] [i_2]) | 207562322)), (arr_7 [10])))) ? ((-15198 ^ ((-(arr_7 [2]))))) : (((((var_0 / (arr_6 [i_0] [11] [i_0 + 1])))) % (850088648402001163 + -100)))));
                }
            }
        }
    }
    #pragma endscop
}
