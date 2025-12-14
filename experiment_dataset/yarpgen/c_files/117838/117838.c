/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117838
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_15 = (--41);
                    var_16 = (min(25, ((max(1, 1)))));
                    var_17 = ((!(((~(min(17133509809968674235, 74)))))));
                    arr_8 [i_0] [i_0] [i_0] [i_0] |= max((~1), (~200));
                    arr_9 [i_0] [i_0] [i_2] = ((!(((-(!3079410400))))));
                }
            }
        }
    }
    var_18 = ((!(+-1)));
    #pragma endscop
}
