/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151585
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151585 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151585
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = -3990519137321226407;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_13 *= (-3348424487496192066 ? (arr_8 [0] [0] [i_2] [i_2] [i_1]) : (((min(-3990519137321226407, 3990519137321226400)))));
                            arr_9 [i_0] [i_1] = ((((1574012734 ? (((arr_7 [i_0 - 1] [i_1] [i_2] [i_2] [i_3] [i_1]) ? (arr_0 [i_2]) : 3990519137321226406)) : (((0 ? (arr_7 [i_0 + 1] [i_0] [1] [i_0] [9] [i_0]) : (arr_5 [i_0] [9] [i_2] [9])))))) ^ ((((6 && (((3990519137321226406 ? -1 : 511)))))))));
                        }
                    }
                }
                arr_10 [i_0] [i_1] = (((min((~8162), (max(103, -3990519137321226429))))) ? (((arr_8 [i_1] [i_1] [11] [11] [i_0 - 1]) ^ (~1))) : (arr_2 [i_1] [i_1]));
            }
        }
    }
    var_14 = ((1 ? -127 : 1));
    #pragma endscop
}
