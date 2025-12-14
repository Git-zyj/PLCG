/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187164
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187164 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187164
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                {
                    arr_8 [i_2] [i_2] [i_1] [i_1] = (min((min((min((arr_1 [i_0] [i_0]), -7150654958977520398)), ((min(var_14, (arr_5 [i_0] [i_1] [i_1])))))), (((!(arr_0 [i_0 - 2]))))));
                    arr_9 [i_2] [i_2 - 1] [i_0] [i_2] = ((!((min(var_3, 1050555349)))));
                    var_16 = (min(var_9, ((64 ^ ((min(var_12, -2048)))))));
                }
            }
        }
    }
    var_17 = (min(var_17, ((min(((var_12 <= (!var_2))), (!192))))));
    #pragma endscop
}
