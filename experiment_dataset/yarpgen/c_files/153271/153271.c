/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153271
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153271 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153271
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
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_20 += ((19183655436619952 ? 0 : 7887));
                    arr_6 [i_0] [i_1] [i_0] [i_0] = ((16384 ? ((((((arr_4 [i_1]) ? 1 : 1))) * 432345564227567616)) : -6937));
                }
            }
        }
    }
    var_21 += ((3136416738 ? ((7124981748952332635 ? 7124981748952332646 : 25)) : ((-(7124981748952332635 - 4677)))));
    #pragma endscop
}
