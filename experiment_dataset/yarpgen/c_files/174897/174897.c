/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174897
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174897 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174897
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_15 = var_10;
                arr_5 [i_0] [i_1] [i_0] = (arr_3 [5] [11]);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        {
                            arr_12 [i_0] [i_3] [4] [12] = (min((max(2164914633, 381905810)), (((~(arr_9 [i_0] [i_3] [i_0 + 2] [i_0]))))));
                            var_16 = ((((-30678 <= ((1754637615 ? 2130052653 : (arr_8 [i_1]))))) ? (((arr_0 [i_2]) | ((var_10 ? (arr_9 [i_3] [i_3] [i_3] [i_0]) : -7772931105906948965)))) : 48075));
                        }
                    }
                }
            }
        }
    }
    var_17 = (min(var_17, ((max(var_14, var_6)))));
    var_18 = (61 % -10293);
    #pragma endscop
}
