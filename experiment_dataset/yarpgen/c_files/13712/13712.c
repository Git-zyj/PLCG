/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13712
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 &= 1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                arr_4 [i_1] [15] = (((arr_0 [i_1 - 1]) ? (~-26831) : (((~4338360943554519357) ^ (arr_2 [22] [i_1] [i_0])))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {
                            var_20 = ((~(arr_8 [i_0] [i_1] [i_2] [i_3])));
                            arr_9 [i_1] = 1;
                            var_21 ^= (arr_3 [i_3]);
                        }
                    }
                }
                arr_10 [i_1] [i_1 - 1] = (((max(4325184976766406506, ((~(arr_7 [i_1] [1] [i_0] [i_1])))))) ? (((((((arr_1 [11] [10]) != (arr_2 [i_0] [i_1] [i_0])))) > 65529))) : 3);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 17;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 17;i_5 += 1)
        {
            {
                arr_17 [i_4] [i_4] [2] = var_18;
                var_22 *= (arr_7 [0] [i_5] [i_5] [0]);
                /* LoopNest 3 */
                for (int i_6 = 0; i_6 < 17;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 17;i_7 += 1)
                    {
                        for (int i_8 = 2; i_8 < 14;i_8 += 1)
                        {
                            {
                                var_23 = 43639;
                                var_24 = (max(var_24, ((((var_11 + 2147483647) >> (((min((((63 ? (arr_6 [i_4] [i_8] [i_6]) : (arr_12 [i_4] [i_5])))), 18446744073709551596)) - 18446744073709540063)))))));
                            }
                        }
                    }
                }
                var_25 |= ((((((arr_1 [i_4] [i_5]) ? (arr_1 [i_4] [i_4]) : (arr_1 [i_4] [i_5])))) ? (((var_3 ? 64 : (arr_21 [i_5])))) : ((98 ? -4325184976766406507 : (-32767 - 1)))));
                arr_27 [1] = 562949953421248;
            }
        }
    }
    #pragma endscop
}
