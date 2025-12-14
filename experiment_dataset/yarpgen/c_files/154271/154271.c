/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154271
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154271 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154271
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 |= var_3;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = ((((((arr_0 [i_0]) ? (arr_4 [i_0]) : (arr_4 [i_0])))) ? (arr_4 [i_0]) : var_13));
                arr_7 [i_0] [i_0] = var_2;
                var_15 = (arr_4 [i_0]);
                arr_8 [i_1] [i_0] [i_1] = ((+(((arr_5 [i_0] [i_0]) ? 1761324359 : ((((arr_3 [i_0]) ? 120 : (arr_1 [i_0]))))))));
            }
        }
    }
    #pragma endscop
}
