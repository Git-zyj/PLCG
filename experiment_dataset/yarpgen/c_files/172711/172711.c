/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172711
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172711 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172711
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_0] = 62444;
                    arr_9 [i_0] [i_0] [i_0] = 0;
                }
            }
        }
    }
    var_10 = ((max((195 ^ var_6), (min(var_9, 1028023986)))) > (-2021095162 > var_5));
    var_11 = (min(((-((min(15852, 49430))))), var_1));
    #pragma endscop
}
