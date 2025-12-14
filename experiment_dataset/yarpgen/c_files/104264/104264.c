/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104264
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104264 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104264
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((((min(var_13, var_2))) ^ var_12))) ? (((min(1223695818, var_8)) >> (var_1 - 17175737086725446501))) : var_8);
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_15 = (((64 ? var_9 : ((-65 ? 54043195528445952 : 0)))));
                    var_16 = max(-175, (arr_7 [0] [i_2]));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_15 [i_3] [i_2] [i_2] [i_4] = (max((((!(arr_11 [i_0] [i_0] [i_0 + 2] [i_3] [i_2])))), 695574114));
                                arr_16 [i_3] = (~(min((((-885793731 + 2147483647) << (((-885793731 + 885793732) - 1)))), ((119 ? (arr_9 [i_1] [6]) : var_4)))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_17 = ((((min(0, var_11)) + (6 - 22882))));
                                var_18 = (min(-0, (((9428 % (arr_5 [i_1] [i_6]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 2; i_7 < 19;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 21;i_8 += 1)
        {
            {
                var_19 |= arr_27 [i_7] [i_8] [13];
                var_20 = (max(var_20, -64));
            }
        }
    }
    #pragma endscop
}
