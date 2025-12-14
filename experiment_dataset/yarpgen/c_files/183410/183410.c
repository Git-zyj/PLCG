/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183410
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183410 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183410
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 196745172;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_11 = (((min((arr_0 [i_0]), (arr_0 [i_0]))) - (arr_0 [i_0])));
                arr_5 [i_1] [i_1] [i_0] = 4;
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {
                            var_12 = 1106943148;
                            var_13 |= (2172143536 && 1);
                            var_14 = (arr_1 [i_3]);
                            var_15 ^= 2024413990894762543;
                        }
                    }
                }
                arr_10 [i_0] [i_0] = (~-18964);
            }
        }
    }
    #pragma endscop
}
