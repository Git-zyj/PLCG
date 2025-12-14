/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148127
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148127 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148127
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_9;
    var_13 &= (~(max((var_10 ^ 31479), ((min(var_11, var_8))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_14 = (min(-31479, ((max((-32767 - 1), 31479)))));
                                var_15 = (max(var_15, ((((max((!var_6), ((var_1 ? var_8 : (arr_2 [i_1] [i_4 + 1]))))) >= (max(var_0, 1504454199)))))));
                                var_16 = (max((!-32760), ((~(arr_9 [i_4] [i_4 - 1] [i_4 - 1] [i_4] [i_4] [i_4 - 1] [i_4 - 1])))));
                            }
                        }
                    }
                    var_17 = (max(-17634, ((((((arr_0 [15] [i_1]) ? var_3 : var_11))) ? 0 : (~-31465)))));
                }
            }
        }
    }
    var_18 = (max(var_4, (((!(((var_2 ? var_1 : var_0))))))));
    #pragma endscop
}
