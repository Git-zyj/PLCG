/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118708
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118708 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118708
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_15 = (min(var_15, (((((((3332928171 && (arr_1 [14] [i_3]))))) % (max((arr_3 [i_1] [i_1]), (arr_3 [i_4] [i_3 + 3]))))))));
                                arr_12 [i_0] [i_1] [i_2 - 1] [i_3] [i_3] [i_3] = ((((max((((arr_9 [i_4]) - var_14)), var_12))) ? ((((arr_1 [i_0] [i_4]) ? (arr_2 [i_0]) : ((var_0 ? var_14 : (arr_5 [i_2] [i_1] [14] [i_0])))))) : ((962039125 ? ((((arr_0 [i_4 + 1]) ? (arr_6 [i_4] [i_2] [i_0] [i_0]) : var_14))) : ((962039124 ? var_12 : (arr_0 [i_1])))))));
                                var_16 = ((((arr_7 [i_0] [i_0] [i_0] [i_0]) ? var_5 : 157)));
                            }
                        }
                    }
                    var_17 = 0;
                }
            }
        }
    }
    var_18 = (((-1205249319 ? ((var_7 ? var_11 : var_3)) : (min(var_2, var_2)))) ^ 1);
    var_19 ^= ((var_2 ? ((var_8 ? var_0 : var_12)) : var_6));
    var_20 = (max(((max(-8939222177155527264, var_7))), (!var_3)));
    #pragma endscop
}
