/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148969
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148969 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148969
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 ^= (min(((((max(var_8, var_5)) < -12))), ((((max(-16478, var_11))) ? (max(var_1, var_5)) : (var_1 < -9)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 6;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 7;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 9;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        {
                            arr_12 [i_0] [i_0] [i_3] [i_2] [i_0] [i_3] = (min((var_5 / -1602309180), (arr_0 [i_3])));
                            var_13 = ((((-127 - 1) != -9093480196725430724)));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        {
                            var_14 = (((((3210837093 ? (((1602309191 == (arr_10 [7] [i_0] [7] [i_0] [i_4] [i_0])))) : ((((arr_13 [i_0] [i_0] [i_0] [i_5]) != (arr_4 [i_1]))))))) ? (((arr_11 [i_0] [i_0 - 1]) ? var_9 : var_3)) : var_6));
                            arr_20 [i_5] [i_0 + 1] [i_1 + 3] [i_0 + 1] = ((((-(arr_3 [i_0 - 1] [i_0] [i_0]))) == (arr_9 [i_5] [i_1 + 2] [i_1 + 2] [i_1 + 2] [i_4])));
                        }
                    }
                }
                var_15 = 3645932224;
                arr_21 [i_1 - 1] [i_0 + 4] [i_0] = ((~((((min(1602309179, 1602309183)) < (max(113, -608221059)))))));
                var_16 *= (((((((arr_17 [i_0 + 3] [i_0 + 3] [i_0 - 1]) * 0)) * (var_0 / var_5)))) ? (arr_16 [i_0] [i_0] [i_0]) : ((((106 < var_3) ? (arr_19 [i_0] [i_0] [i_1 + 2] [i_0] [i_0] [i_0]) : (arr_11 [i_1 + 3] [i_0 + 1])))));
            }
        }
    }
    var_17 = ((min(var_2, ((var_7 ? var_0 : var_0)))));
    var_18 = -2833207798539720817;
    #pragma endscop
}
