/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123210
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123210 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123210
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = (arr_0 [i_0]);
                arr_7 [0] = ((((arr_0 [i_0 + 1]) ? (arr_5 [i_0] [i_0] [i_1 + 2]) : (min(1372523778, (arr_2 [10]))))));
            }
        }
    }
    var_12 = ((~((var_6 ? 1 : 24308))));
    var_13 &= ((-8405 ? 1372523778 : ((max(1, var_2)))));
    var_14 = ((((max((!var_6), var_4))) < var_3));
    #pragma endscop
}
