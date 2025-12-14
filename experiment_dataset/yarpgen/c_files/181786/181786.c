/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181786
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181786 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181786
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(76, 58244));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 19;i_2 += 1)
            {
                {
                    var_17 = var_9;
                    var_18 = (min((max(46169, 1128456583)), ((((arr_2 [i_2 - 2] [i_1]) ? (arr_3 [i_1 - 1]) : (arr_2 [i_0 - 1] [i_1 + 1]))))));
                    arr_8 [i_2] [i_0] = -19367;
                }
            }
        }
    }
    #pragma endscop
}
