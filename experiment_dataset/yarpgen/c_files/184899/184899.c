/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184899
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184899 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184899
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, (((15919703759120424105 * (((((var_11 ? 4828 : -1549197520)) < (1 & -1199269445)))))))));
    var_14 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] &= max(114, (((!(arr_2 [i_0] [i_1])))));
                var_15 = ((8268 ? -9011990206826301843 : 1));
                var_16 = ((1539 << (243 - 241)));
            }
        }
    }
    var_17 = (max(var_17, -1));
    #pragma endscop
}
