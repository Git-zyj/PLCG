/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121544
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121544 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121544
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 &= max(2928130657, -27300);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 15;i_3 += 1)
                    {
                        {
                            var_18 = (max((((1 ? 1 : 1))), (max(-6223, 407908347))));
                            var_19 += (((((min((arr_8 [i_1] [i_2] [i_1] [i_0] [i_0]), (arr_0 [i_0]))) != var_5)) ? (min(1366836621, (min(-24277, 18446744073709551615)))) : (max(((max(var_11, 4978))), (min(var_6, var_8))))));
                        }
                    }
                }
                var_20 = (min(((min(8696, 1))), (max(-3, ((var_1 | (arr_2 [i_1 + 1])))))));
                var_21 = (min(((((1366836622 ? var_6 : (arr_6 [i_0] [i_1] [i_1] [i_1 + 1]))) << ((((-10 ? var_7 : var_7)) - 691250570)))), ((min(((min(var_9, (arr_5 [i_1])))), ((-(arr_7 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))))));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        {
                            var_22 += ((~(max(((2477844620 / (arr_2 [i_0]))), ((((arr_4 [i_0]) ? (arr_12 [i_5]) : (arr_14 [i_0] [i_0] [i_4] [i_5] [i_5] [i_5]))))))));
                            var_23 += ((((((arr_1 [i_4] [i_5]) ? 6245 : ((min(26767, 57482)))))) ? (((((72 ? var_15 : var_9))))) : (min(((max(1, (arr_7 [i_0] [i_0] [i_4] [i_0] [i_1] [i_0])))), (var_13 * var_8)))));
                            var_24 = min((((-((4997 ? (arr_2 [i_0]) : 2048))))), (max((min((arr_12 [i_0]), var_0)), ((var_4 ? 4978 : (arr_0 [i_0]))))));
                            var_25 *= ((1366836625 ? 13094 : 9));
                        }
                    }
                }
                arr_15 [i_0] [i_1 + 1] [i_0] = ((((min(((var_4 ? 0 : (arr_3 [i_1]))), (var_3 - 4978)))) ? (((1366836632 ? -108 : 4294967295))) : (((((-120 ? 0 : 4969))) ? ((((arr_14 [i_0] [i_1] [i_1] [i_1 + 1] [i_0] [i_0]) << var_13))) : 14))));
            }
        }
    }
    var_26 &= var_13;
    #pragma endscop
}
