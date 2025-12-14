/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129359
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129359 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129359
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_11;
    var_20 = 3389262383;
    var_21 = var_15;
    var_22 = (max(var_22, (((((((max(var_0, 1219168005))) ? 3389262383 : 48761)) == var_14)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_2] = 983040;
                    arr_9 [9] [i_2] [i_2] [i_2] = (min((arr_5 [i_0] [i_1]), (((arr_2 [i_0]) ? 3389262399 : ((((var_11 || (arr_2 [i_0])))))))));
                    var_23 = (max(var_23, (arr_4 [12])));
                }
            }
        }
    }
    #pragma endscop
}
