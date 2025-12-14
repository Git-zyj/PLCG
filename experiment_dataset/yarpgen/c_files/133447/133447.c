/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133447
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133447 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133447
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {
                var_17 ^= (-((-((min(1, (arr_2 [i_1] [2] [i_0 - 1])))))));
                var_18 ^= ((!((min(1588150725200127079, (arr_1 [i_1]))))));
                var_19 |= (arr_2 [i_0] [i_1 - 2] [i_1]);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 4; i_2 < 10;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 0;i_3 += 1)
        {
            {
                arr_8 [i_2] [i_3] = 18446744073709551615;
                var_20 = ((!(((1 ? -1 : 937466039)))));
                var_21 ^= (arr_6 [i_2] [i_3 + 1] [0]);
            }
        }
    }
    #pragma endscop
}
