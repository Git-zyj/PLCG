/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160395
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160395 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160395
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 &= (max(var_7, (+-2631132238666951873)));
    var_11 = 2631132238666951869;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 17;i_2 += 1)
            {
                {
                    var_12 += (arr_1 [i_0]);
                    var_13 = (((arr_0 [i_0] [i_0]) ? 2916422388703361951 : var_1));
                }
            }
        }
    }
    #pragma endscop
}
