/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123694
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123694 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123694
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_11 &= ((32759 ? 7 : 1));
                    var_12 = (max(((((-8 ? 1 : 4)))), ((1 ? -122 : 6))));
                }
            }
        }
    }
    var_13 = ((((max(var_3, -123))) > (17105682040160282484 + -16168)));
    #pragma endscop
}
