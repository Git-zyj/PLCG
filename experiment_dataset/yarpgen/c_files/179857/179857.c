/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179857
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179857 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179857
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0 + 2] [i_0] = (min((max(var_5, var_7)), var_11));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 23;i_4 += 1)
                            {
                                var_13 = (max(var_13, (((~(((var_4 > (29913 == 1048575)))))))));
                                var_14 -= ((((~(arr_3 [i_0 - 1] [i_0 - 1]))) | (arr_3 [i_0] [i_0])));
                            }
                            arr_12 [i_2] = ((654291976084576215 ? ((((min(var_8, (arr_0 [i_0])))) ? (-25494 * -25494) : (arr_9 [i_2] [i_3] [i_0] [i_3] [i_2]))) : -25499));
                            var_15 = (min(var_15, ((((((max(25516, (arr_6 [6] [i_1] [i_2] [i_3]))))) <= (min(var_6, (arr_7 [i_0 - 1] [18] [18] [i_0 + 1]))))))));
                        }
                    }
                }
                var_16 = (max(var_16, ((((arr_8 [i_0] [i_0 - 1] [i_1] [i_1] [i_1]) ? (min((max(-24866, 1136027711334093890)), (32767 / var_6))) : ((~((19728 & (arr_1 [i_0]))))))))));
                var_17 -= var_2;
                var_18 -= var_5;
            }
        }
    }
    var_19 -= (var_2 ? ((((var_2 ? var_11 : var_1)) ^ (~137438920704))) : var_10);
    #pragma endscop
}
