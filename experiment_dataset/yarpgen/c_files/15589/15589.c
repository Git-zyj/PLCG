/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15589
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15589 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15589
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 13;i_3 += 1)
                    {
                        {
                            arr_8 [i_3] [i_1] [i_2 + 1] [9] = ((((-29451 ? -16384 : 32767)) ^ 22465));
                            var_16 = (((((arr_0 [i_0] [i_1]) ? 29461 : ((-13729 ? -12028 : 29451)))) < (max((arr_2 [i_0] [i_0]), (((arr_7 [i_0] [i_3]) ? (arr_0 [1] [i_1]) : (arr_3 [i_0] [i_1] [i_2])))))));
                        }
                    }
                }
                var_17 = (max(var_17, ((((((((arr_6 [0]) ? (arr_2 [i_0] [i_1]) : (arr_7 [i_0] [i_0]))) & (((arr_3 [i_0] [i_0] [13]) ? (arr_6 [2]) : (arr_2 [i_0] [i_1]))))) >= (((((arr_1 [i_0] [0]) + 2147483647)) >> ((((max((arr_1 [i_0] [i_0]), (arr_5 [5] [i_1] [i_1] [i_1])))) - 31040)))))))));
                var_18 = (((((((arr_3 [i_0] [4] [i_0]) ? (arr_7 [i_0] [i_0]) : (arr_6 [i_0]))))) ? (((min((arr_1 [i_0] [i_0]), (arr_5 [i_0] [i_1] [i_1] [2]))))) : (((max((arr_2 [i_0] [i_0]), (arr_7 [i_0] [i_0])))))));
                var_19 = ((29451 ? ((min((arr_0 [i_0] [10]), (arr_2 [3] [i_1])))) : 12045));
                arr_9 [i_0] [i_1] = ((((((((arr_1 [i_0] [i_1]) >= (arr_4 [4] [i_1] [i_1] [i_1])))) > (arr_1 [i_0] [12]))) ? -9 : ((-32767 ? -12028 : -17275))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 1; i_4 < 12;i_4 += 1)
    {
        for (int i_5 = 4; i_5 < 13;i_5 += 1)
        {
            {
                var_20 *= arr_10 [i_5];
                var_21 = (max(var_21, (max(-12028, 0))));
            }
        }
    }
    #pragma endscop
}
