/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167592
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167592 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167592
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 ^= var_10;
    var_17 ^= var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        {
                            var_18 = ((!(((-31457 > var_9) > (arr_11 [6] [i_2 + 1] [i_1] [13])))));
                            var_19 ^= (arr_9 [i_0] [i_1]);
                        }
                    }
                }
                var_20 ^= ((((((!(arr_5 [0] [i_1] [i_1])))) == (var_4 < 15271))));
                var_21 *= ((~(arr_10 [i_1] [i_1] [i_0] [3] [i_0])));
            }
        }
    }
    var_22 = (~15271);
    #pragma endscop
}
