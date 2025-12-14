/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149617
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149617 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149617
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 7436677319376863877;
    var_21 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_22 = 536870784;

                for (int i_2 = 1; i_2 < 21;i_2 += 1)
                {
                    var_23 = (min(var_23, 37236));
                    var_24 = (!(((-45 / ((max(91, 28297)))))));
                }
                arr_9 [i_0 + 2] = ((!(14515 || 734189283)));
            }
        }
    }
    #pragma endscop
}
