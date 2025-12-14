/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1168
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1168 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1168
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (~(((~-2055458398) ? (max(16, var_9)) : (~var_7))));
    var_21 = ((max(-2122469975, (max(3365108371, 1713300046)))) * (((min(var_3, 2364472719)) / var_16)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_22 = min(((-958165344 ? 936734732 : 936734732)), (min(936734732, 936734732)));
                arr_7 [i_0] = ((-((min(536739840, 1898404262)))));
                arr_8 [i_1] = (min((((var_2 & -1461460404) ? (1305228026 | var_5) : (max(1393990896, 936734736)))), ((~((~(arr_2 [15])))))));
            }
        }
    }
    var_23 = var_7;
    #pragma endscop
}
