/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182918
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182918 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182918
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((677343362 ? 2521369071 : 129)));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_19 = ((((min((arr_3 [i_1] [i_1]), (arr_3 [i_1] [i_1])))) % ((-(arr_3 [i_1] [i_1])))));
                var_20 = (min((arr_0 [i_0] [i_0 + 2]), (min((arr_0 [i_0 - 4] [i_0]), var_7))));
            }
        }
    }
    #pragma endscop
}
