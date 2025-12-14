/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130553
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130553 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130553
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (-32767 - 1);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] [i_1] = -15238;

                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    var_11 = (min(var_11, ((max(661053796, -32746)))));
                    var_12 = max(-3705, (max(3201428969, -19628)));
                }
            }
        }
    }
    #pragma endscop
}
