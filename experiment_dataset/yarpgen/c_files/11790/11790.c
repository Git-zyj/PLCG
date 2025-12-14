/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11790
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11790 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11790
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(((38446 << (min(7185022118303411773, 1)))), -13781));
    var_13 = ((((((~var_2) < (var_2 % 255)))) << var_3));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_14 = (((-28 | 4) * (arr_2 [i_0 - 1] [i_0 - 2] [i_0 - 3])));
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                arr_13 [i_3] = (max((((!(arr_8 [i_2] [i_2] [i_2 + 1] [17] [i_2 + 2])))), (((~-64) ^ (((arr_6 [i_0] [i_0 + 1]) | (arr_12 [i_0] [i_1])))))));
                                var_15 = (max((var_7 / -1849724427), -var_6));
                                arr_14 [8] [i_3] [i_4] = (((1849724426 ^ -6770592429409295199) - (max((9223372036854775794 / var_4), ((min((arr_3 [i_0] [i_3]), -32760)))))));
                                arr_15 [i_0] [i_1] [i_0] [i_3] [i_3] [i_4] = (min(959447610, (max((min((arr_4 [i_4] [i_3] [i_1]), (arr_6 [i_3] [i_3]))), (var_2 >= 32767)))));
                            }
                        }
                    }
                }
                var_16 &= (((max(var_7, (var_11 / 18446744073709551615))) * ((max(9223372036854775803, (min(9223372036854775803, 1)))))));
            }
        }
    }
    var_17 += (min((~var_9), (max(var_2, (var_1 ^ var_4)))));
    #pragma endscop
}
