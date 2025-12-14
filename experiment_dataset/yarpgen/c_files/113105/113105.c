/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113105
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max((max(var_10, (var_3 == var_13))), (((1212750641 || ((min(var_4, 80))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 14;i_2 += 1)
            {
                {
                    var_15 += 2721841138;
                    var_16 |= (((((arr_0 [2] [4]) ? (2721841138 >= 1) : (((arr_1 [i_1] [14]) ? 2721841138 : 20046)))) * (arr_4 [i_2] [i_2 - 1] [i_2 - 2])));
                }
            }
        }
    }
    var_17 += ((((((var_9 ? 2721841160 : 1991244701503059725)))) ? ((163 ? var_2 : var_7)) : -1701999450));
    var_18 = (max(var_18, 1628073678));
    #pragma endscop
}
