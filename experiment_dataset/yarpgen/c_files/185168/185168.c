/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185168
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185168 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185168
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_12;
    var_18 = (min((((var_0 <= (!var_11)))), var_1));
    var_19 = ((((((var_15 / var_3) ? (((-389151324 ? var_6 : var_3))) : ((var_16 ? -389151330 : 7))))) && (-var_5 < 10)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_20 ^= (~-389151330);
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        {
                            var_21 = (min(var_21, 2899297576534337905));
                            arr_14 [i_0] [i_0] [i_0] [i_3] = (min(-7, ((~(arr_10 [i_0] [i_2] [i_2 + 2] [i_2 + 1] [i_2 + 2] [i_0])))));
                            arr_15 [i_0] [i_0] [i_2 - 1] [i_0] = (max((((arr_9 [i_0] [i_0] [i_0] [i_0]) % (arr_9 [i_0] [i_0] [i_2 + 3] [i_3]))), ((min(88, 6416)))));
                            var_22 = var_5;

                            for (int i_4 = 0; i_4 < 15;i_4 += 1)
                            {
                                var_23 = (((max((arr_2 [i_0] [i_2 - 2] [i_2 + 1]), (((arr_12 [i_0] [1] [i_2] [i_3] [i_4]) ? (arr_17 [i_1] [i_0] [i_3] [11]) : (arr_10 [i_0] [i_1] [i_2] [i_3] [i_0] [i_0]))))) | (~var_15)));
                                var_24 = var_4;
                                arr_18 [i_3] [i_0] [i_3] [0] [i_4] = (((((-(((arr_9 [i_0] [i_0] [i_2] [i_3]) % (arr_4 [i_2] [i_2] [i_0])))))) ? (max((arr_17 [i_4] [i_0] [i_0] [i_0]), var_13)) : ((max(((((arr_2 [i_0] [12] [i_3]) < (arr_6 [i_2] [i_2] [i_1])))), (arr_9 [i_0] [i_0] [10] [8]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
