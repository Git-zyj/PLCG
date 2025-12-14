/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136640
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136640 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136640
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 &= var_12;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            arr_12 [i_4] [i_0] [i_2] [i_2] [i_0] [i_0] = (!-24);
                            arr_13 [i_0] [i_0] = (~var_5);
                        }
                        var_14 = (!37);
                        arr_14 [i_3] [i_0] [i_0] [i_0] = var_3;
                    }
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        var_15 -= var_2;

                        for (int i_6 = 0; i_6 < 17;i_6 += 1)
                        {
                            var_16 = (max(var_16, ((((!(arr_3 [i_1 + 3] [i_1 + 1])))))));
                            arr_20 [i_0] [i_5] [i_2] [i_1 - 1] [i_0] = ((~((~(~var_7)))));
                            arr_21 [i_0] [i_1] [i_1] [i_1] [i_6] = -12;
                            arr_22 [i_0] [i_0] [i_0] [i_5] [i_0] = (!1);
                        }
                        arr_23 [i_0] [i_0] [i_0] [i_0] [i_0] = -4;
                        arr_24 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = 87;
                    }
                    for (int i_7 = 3; i_7 < 15;i_7 += 1)
                    {
                        arr_28 [i_2] [i_0] [i_2] [i_7] = 31;
                        var_17 ^= 9325;
                    }
                    var_18 ^= 6732648533003440113;
                    var_19 ^= ((!(~var_4)));
                }
            }
        }
    }
    #pragma endscop
}
