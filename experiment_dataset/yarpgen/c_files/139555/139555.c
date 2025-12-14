/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139555
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139555 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139555
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 ^= var_8;
    var_16 = (((((min(var_4, 560715917)))) ? var_5 : (min((~var_12), (~var_9)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            {
                arr_6 [i_0 + 1] = ((((min(var_8, (((arr_1 [8]) ? -27 : (arr_1 [8])))))) || ((max((var_5 & -27), (arr_5 [i_1 - 2]))))));

                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    arr_10 [2] [i_1 - 3] [i_2] [i_2] = (arr_0 [i_1]);
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 0;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_0] [i_1] [i_2] [i_3] [i_4] [i_4 + 1] &= ((~((min((arr_13 [i_0] [i_0] [1] [i_0 - 1] [i_0] [i_4]), (arr_13 [i_0] [i_0] [8] [i_0 - 1] [i_2] [1]))))));
                                var_17 = ((((max(((255 ? 15 : 4585444366749532433)), 0))) ? (arr_7 [i_3 - 1] [i_1 - 2] [i_1] [i_0 + 1]) : (max((arr_8 [i_0 + 1] [i_1 - 1]), ((7 * (arr_7 [i_0] [i_1] [i_2] [3])))))));
                                var_18 = ((((((arr_8 [i_1] [i_3]) ? (((arr_0 [i_2]) + -17972)) : (arr_11 [1] [i_2] [1] [i_4])))) ? 2147483647 : (((arr_12 [i_4] [i_4] [i_4 + 1] [i_4] [1]) + (arr_12 [i_0 + 1] [11] [i_2] [i_3] [i_4])))));
                            }
                        }
                    }
                }
                for (int i_5 = 0; i_5 < 12;i_5 += 1)
                {
                    arr_18 [i_5] = 1135738856;
                    var_19 = (((((-16 - -1141779836005564673) + (arr_12 [10] [10] [i_1 - 1] [5] [i_5]))) < (arr_13 [i_0] [i_1 - 2] [1] [1] [1] [i_5])));
                    var_20 &= (arr_17 [i_0] [2]);
                    var_21 = (arr_4 [i_0] [i_1 - 2]);
                }
            }
        }
    }
    #pragma endscop
}
