/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108952
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108952 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108952
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_16 = var_11;
                    var_17 -= (((arr_3 [i_0 + 1] [i_0 + 1] [i_0 + 1]) ? ((~(var_0 & 1887073568431496835))) : (~1887073568431496835)));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 2; i_3 < 7;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            {
                arr_12 [1] = var_15;
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 10;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 9;i_6 += 1)
                    {
                        {
                            arr_18 [i_3] [i_4] [i_3] [1] |= ((-16747 >= (arr_1 [14] [4])));
                            var_18 = (min(var_18, (-81 <= 52770)));
                            var_19 = (min(var_19, ((max(var_12, ((4194304 & ((-(arr_3 [i_3] [i_5] [i_6 - 2]))))))))));
                        }
                    }
                }
                var_20 = (min(var_20, 786777021));
                var_21 = (1887073568431496839 / 8553);
                var_22 += -1;
            }
        }
    }
    var_23 = var_5;
    var_24 = (max(-var_5, ((var_5 * (max(-1887073568431496835, var_13))))));
    #pragma endscop
}
