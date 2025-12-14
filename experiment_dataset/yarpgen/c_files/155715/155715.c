/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155715
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155715 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155715
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_6 [3] = ((2147483647 ? 10372 : -1862216637));
                var_12 += (((14805945220897514511 & 10396) ? ((14475357133980950055 ? var_10 : 21)) : ((var_8 - (arr_2 [i_0] [i_1])))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            {
                var_13 = (min(var_13, (((((arr_8 [i_3]) ? (min(2069858125, 134217727)) : ((min(var_1, var_1)))))))));
                /* LoopNest 2 */
                for (int i_4 = 2; i_4 < 10;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 8;i_5 += 1)
                    {
                        {
                            var_14 += var_11;
                            arr_20 [i_2] [i_3] [i_4] [i_2] = ((var_11 >> (min((var_0 == var_0), (arr_18 [i_2])))));
                            arr_21 [i_2] [i_3] [i_4 - 1] [i_5 + 1] = min(var_2, (((!((min(0, -1862216647)))))));
                            var_15 -= 10372;
                        }
                    }
                }
            }
        }
    }
    var_16 = -var_4;
    #pragma endscop
}
