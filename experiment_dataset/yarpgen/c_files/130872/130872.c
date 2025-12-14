/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130872
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130872 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130872
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 19;i_2 += 1)
            {
                {
                    var_19 = (2722779008 ? 31 : 1056964608);
                    var_20 = (min(var_20, ((7 ? 4294967292 : 1056964608))));
                    arr_7 [20] [17] [i_2] = 1444240519;
                }
            }
        }
    }
    var_21 = var_6;
    #pragma endscop
}
