/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10982
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10982 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10982
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_14 ^= ((((46 && -1) ? ((((arr_4 [2]) ? (arr_7 [i_0] [i_1] [i_1] [i_2]) : 11876))) : ((var_13 % (arr_2 [i_2] [i_2]))))) < var_3);
                    var_15 += (arr_2 [i_0] [i_0]);
                    var_16 = ((((((-19285 + 2147483647) << (1 - 1)))) != var_13));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_17 = var_11;
                                var_18 = ((((((arr_10 [i_0] [i_0] [i_0] [i_0]) ^ (min(2564464520141561568, 214))))) ? (min(((var_3 ? (arr_3 [i_4] [i_4] [0]) : (arr_9 [i_2]))), (arr_7 [i_1] [i_2] [i_3] [i_4]))) : ((min((~-22), (((arr_10 [i_1] [i_2] [i_3] [i_4]) ? (arr_1 [i_4]) : 65535)))))));
                                var_19 = (min(var_19, 65526));
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 = (((min(var_0, 4414166594016811148)) % 28672));
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 22;i_5 += 1)
    {
        for (int i_6 = 3; i_6 < 18;i_6 += 1)
        {
            {
                var_21 = (((max(-92, (arr_16 [i_6 - 2] [i_6 + 3] [i_6 - 2]))) % ((((arr_15 [i_5] [i_5]) | ((min(var_8, (arr_13 [i_5] [i_5])))))))));
                var_22 *= (min(var_9, var_2));
            }
        }
    }
    var_23 &= (((((var_13 ? 0 : (var_9 + var_11)))) ? ((((((4294967290 ? var_13 : 1))) ? ((var_2 ? var_11 : 4)) : ((var_11 ? 7 : var_9))))) : (min((!var_1), -7689013307479052036))));
    #pragma endscop
}
