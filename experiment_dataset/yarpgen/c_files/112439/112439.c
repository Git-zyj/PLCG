/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112439
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112439 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112439
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_7;
    var_16 = (min((max((~var_10), var_9)), var_10));
    var_17 = var_14;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                {
                    var_18 = (((arr_4 [i_0] [i_0]) ? (((var_11 == var_9) ? ((min(65523, 5))) : (min((arr_0 [i_0]), 1745263804)))) : ((max((((arr_2 [i_2]) != (arr_4 [i_1] [i_0]))), ((!(arr_6 [i_0] [i_0] [i_0] [i_0]))))))));
                    var_19 ^= ((var_12 == (arr_3 [i_1])));
                }
            }
        }
    }
    var_20 += var_2;
    #pragma endscop
}
