/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121713
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121713 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121713
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_11;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 18;i_2 += 1)
            {
                {
                    arr_7 [i_2] [i_1] [i_2] = 46;
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_17 = ((((min(0, 49985))) * (((((max((arr_0 [i_1]), var_11))) <= (!1))))));
                                arr_14 [i_2] [i_1] [i_2] [i_3] [3] = ((((((((arr_6 [i_0] [i_2] [5]) - 1))))) + (min((-3981575127364775353 / 1), -89))));
                                arr_15 [i_0 - 3] [1] [1] [i_2] [12] [i_4] &= max((((((4294967295 ? 1445962151 : var_1))) && (((197 ? 12385826031773277177 : -2332011257771996200))))), (max((31 && 1), (((-32767 - 1) || (arr_2 [i_0] [i_0]))))));
                                arr_16 [i_0] [i_0] [i_0 + 1] [i_0 - 1] [i_2] = (max((((arr_0 [i_0 - 1]) ? (arr_3 [1] [i_3 - 1] [i_1]) : 31)), (((1 ? (arr_13 [i_0 + 2] [i_2]) : (arr_13 [i_0 + 2] [i_2]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_18 = var_9;
    var_19 = ((var_1 / (((((((min(var_8, var_11)))) != ((33251 ? 1 : -2332011257771996192))))))));
    var_20 = (((((((max(62879, var_14))) ? (((16835999658907880728 ? var_4 : 1))) : var_1))) ? ((~(~var_2))) : var_6));
    #pragma endscop
}
