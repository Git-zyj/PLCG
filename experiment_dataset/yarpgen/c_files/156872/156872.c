/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156872
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156872 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156872
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 584367773;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_14 = 5121707733536863662;
                    var_15 = (arr_2 [i_2] [i_1]);
                    var_16 = ((~0) ? (arr_0 [i_0]) : 65528);
                }
            }
        }
    }
    var_17 = (max(var_17, ((var_6 ? var_7 : var_9))));
    var_18 -= (max(var_3, var_3));
    #pragma endscop
}
