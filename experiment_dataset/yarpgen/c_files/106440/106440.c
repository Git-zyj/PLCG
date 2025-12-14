/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106440
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106440 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106440
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_15 = (max(var_15, ((((((((max((arr_2 [i_0]), (arr_2 [i_2])))) ^ (arr_6 [i_0])))) ? ((((arr_0 [6]) != 15102890396036705097))) : (((arr_2 [i_0]) ? ((~(arr_9 [i_0 + 2] [i_0 + 2]))) : (~var_9))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_16 = (((arr_14 [i_3 + 1] [i_0] [i_3 - 1] [i_3 - 1] [i_3 + 1] [i_3 - 2] [i_3]) / (var_11 * var_7)));
                                var_17 = var_3;
                            }
                        }
                    }
                }
            }
        }
    }
    var_18 = (min(var_18, var_0));
    var_19 = ((((((((var_10 ? var_14 : var_9))) ? (min(3430225677, var_2)) : (((var_5 ? var_8 : 1)))))) ? (max(var_9, ((var_12 ? var_6 : var_5)))) : var_12));
    var_20 = ((((((var_10 ? var_3 : 2585814279046540790)))) || var_12));
    #pragma endscop
}
