/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127119
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127119 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127119
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 10;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        arr_10 [i_0] [i_1] [i_1] [i_3] [i_3] [i_0] = (((-(arr_5 [i_0] [i_0 - 1] [i_0]))));
                        var_17 = (min(var_17, (arr_8 [i_0] [i_0] [i_0] [i_0])));
                    }
                    for (int i_4 = 3; i_4 < 11;i_4 += 1)
                    {
                        var_18 = (min(-268505388, (((arr_6 [i_4] [i_4] [i_4] [i_4 - 3]) ? (arr_9 [i_4 - 2] [i_4 + 1] [i_4] [i_4 - 2] [i_4 - 2]) : (arr_9 [i_2 + 2] [i_2 + 2] [i_2 + 2] [i_4 + 1] [i_2 + 2])))));
                        arr_13 [i_0 - 1] = (max(1703926543, 2047));
                        arr_14 [i_0] [i_1] [i_0] [i_1] [i_4] &= (((((arr_4 [i_0] [i_0 + 1]) % (((-2044 ? 71776119061217280 : 3208158026059333122))))) * ((((min((arr_6 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_4]), (arr_2 [i_2 - 2]))))))));
                        arr_15 [i_0] [i_0] [i_2 + 1] [i_4] [i_0 + 1] &= (min((!-4331929271937209527), (max((arr_12 [i_0 + 1]), (((arr_6 [i_0] [i_0 - 1] [i_0 - 1] [i_0]) ? (arr_1 [i_0]) : (arr_12 [i_1])))))));
                    }
                    var_19 = (((4331929271937209549 > -4331929271937209540) && ((!(arr_0 [i_0])))));
                    arr_16 [i_1] [i_1] [i_1] [i_1] = (-(((arr_0 [i_0 - 1]) ? (arr_0 [i_1]) : (((arr_2 [i_0]) ? (arr_1 [i_1]) : (arr_0 [i_0]))))));
                }
            }
        }
    }
    var_20 *= var_12;
    #pragma endscop
}
