/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180231
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180231 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180231
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 10;i_2 += 1)
            {
                {
                    var_16 = (max(var_16, ((((min((!-114333285), (min(var_7, var_0)))) / var_7)))));
                    var_17 = (min(-1, (arr_0 [i_0])));
                    var_18 += (((7900183609731178786 <= (1463681940254313189 | var_0))));
                }
            }
        }
    }
    var_19 = -4294967295;
    #pragma endscop
}
