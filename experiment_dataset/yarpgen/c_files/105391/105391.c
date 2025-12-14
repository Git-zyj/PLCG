/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105391
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105391 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105391
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_6 [i_1] = (max(163, 1));
                    var_19 = ((281474976710655 ? -8466 : 92));
                }
            }
        }
    }
    var_20 = max((30743 ^ 0), (!var_9));
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 19;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 0;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 17;i_5 += 1)
            {
                {
                    arr_15 [i_4] [i_4] = ((127 ? (((2082395147 ? 127 : (arr_10 [i_3] [i_4] [17])))) : (!var_10)));
                    arr_16 [i_4] [i_4] = ((0 ? 30743 : 1));
                    arr_17 [i_3] [i_4] = 5380461833132467293;
                    var_21 = ((8 ? 3 : 90));
                }
            }
        }
    }
    #pragma endscop
}
