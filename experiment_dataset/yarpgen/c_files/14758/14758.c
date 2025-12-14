/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14758
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14758 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14758
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = -1745595937;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_4 [i_1] = ((-(~-1745595937)));
                var_17 = -1745595955;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            {
                var_18 = (arr_10 [i_2] [i_2] [i_2]);
                arr_11 [i_2] [i_3] [i_2] = ((-(((!(!var_4))))));
            }
        }
    }
    var_19 = ((-((1745595936 ? -1745595919 : 16384))));
    #pragma endscop
}
