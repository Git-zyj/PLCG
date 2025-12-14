/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102185
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 += (((190960265 >> (-2147483637 - -2147483647))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    arr_7 [i_2] [i_1] [i_1] [i_0] = ((((min((55195 != 1), (max(var_7, 1))))) ? (-1 & 2599183431) : (((~(var_6 == 16907521600830942293))))));
                    arr_8 [i_2 - 1] [i_1] [i_1] [i_0] = ((!(~5450197428358628984)));
                    arr_9 [13] [1] [i_1] [i_0] = ((7 < ((~(~var_15)))));
                }
            }
        }
    }
    #pragma endscop
}
