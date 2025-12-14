/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1119
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1119 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1119
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((var_1 ? (-1493896742 != 0) : -var_16)) ^ (((min(946488260, 1926786061847426035))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_0] = (0 * 81);
                arr_7 [i_1] = ((((min((arr_4 [i_0] [i_1]), (arr_4 [i_0] [i_1])))) != ((-760235508 ^ ((22775 ? 19 : 27))))));
                arr_8 [i_1] = var_10;
            }
        }
    }
    #pragma endscop
}
