/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165527
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165527 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165527
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, ((((((-((var_4 ? 65511 : var_6))))) ? 1 : -29785)))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 10;i_3 += 1)
                    {
                        {
                            var_11 = (arr_7 [1] [i_1] [i_2] [i_2]);
                            var_12 ^= 4135097447973317874;
                            var_13 = 23204;
                            var_14 = 453064659;
                            var_15 *= (arr_4 [1]);
                        }
                    }
                }
                var_16 = -8318889042186979823;
                var_17 = (arr_6 [i_1] [i_0 - 2] [i_0 + 3]);
            }
        }
    }
    #pragma endscop
}
