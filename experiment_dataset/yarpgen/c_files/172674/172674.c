/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172674
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172674 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172674
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (!var_6);

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_14 -= (max(var_0, (((var_9 ? var_11 : 97)))));
                    var_15 = (min(var_15, var_2));
                    var_16 ^= ((72 < ((((min(1072749014, -115))) ? (0 || -14871) : ((65257 ? -93 : 96))))));
                    var_17 ^= ((var_2 ? (var_12 - var_0) : (((min((arr_4 [i_0] [i_0] [i_0] [i_0]), var_8))))));
                }
            }
        }
        arr_6 [i_0] = var_3;
    }

    /* vectorizable */
    for (int i_3 = 0; i_3 < 19;i_3 += 1)
    {
        var_18 = ((-(arr_8 [i_3] [i_3])));
        arr_9 [i_3] = ((1 ? 2137120256 : (var_1 > var_9)));
        arr_10 [i_3] = (((arr_8 [i_3] [i_3]) ? var_2 : 1));
    }
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 24;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 24;i_6 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_7 = 2; i_7 < 23;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 24;i_8 += 1)
                        {
                            {
                                arr_22 [i_4] [i_4] [i_4] [i_4] [i_8] &= (min((max(var_6, var_12)), (((!(arr_16 [i_7 - 1] [i_7 - 1] [i_6] [i_6]))))));
                                var_19 &= (((((((var_3 ? -98 : (arr_17 [i_7]))) ^ ((((var_9 > (arr_19 [i_4] [i_7] [i_7] [i_4] [i_7])))))))) ? var_8 : ((min(65534, var_12)))));
                                var_20 = ((97 ? 60 : -3364));
                            }
                        }
                    }
                    var_21 &= (((arr_20 [i_6]) == ((max(var_1, var_1)))));
                }
            }
        }
    }
    var_22 *= (!278);
    #pragma endscop
}
