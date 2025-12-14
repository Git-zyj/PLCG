/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154774
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154774 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154774
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((min((((var_6 ? -691162426 : -691162426)), ((var_8 ? var_1 : var_8))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_17 = (!96);
                    var_18 -= (((arr_6 [i_2] [i_1]) ? (arr_1 [i_0] [i_1]) : ((3648114800144592242 ? 691162425 : (arr_6 [i_0] [i_1])))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 25;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {
            {
                var_19 = (min(var_19, (arr_9 [i_3] [i_3])));
                arr_14 [i_3] [i_3] [i_4] = (!691162428);
                var_20 = (min(var_20, (((var_7 ? var_1 : (~var_9))))));
                var_21 = (max(var_21, (((-((37380 ? 691162434 : (arr_10 [i_3]))))))));
            }
        }
    }
    #pragma endscop
}
