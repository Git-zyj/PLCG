/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17200
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17200 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17200
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_12;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            {
                var_15 &= ((~((~(arr_3 [i_1] [i_0])))));
                var_16 &= (max((arr_5 [i_1] [i_0]), (arr_3 [i_1] [i_0])));
            }
        }
    }
    var_17 = 22206;
    var_18 &= var_10;
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 0;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 11;i_4 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        arr_17 [i_2] [i_2] [10] [i_2] = (((arr_3 [i_2] [i_3 + 1]) <= ((((arr_12 [i_5] [i_3 + 1] [i_2]) <= var_7)))));
                        var_19 ^= ((((arr_10 [i_2] [i_4] [i_5]) ? 377428103 : -27709)));
                        var_20 = (max(var_20, (((-(var_5 <= var_13))))));
                        var_21 = ((((var_3 ? 11514760567994466520 : var_6)) <= (arr_12 [i_4 - 2] [i_3 + 1] [i_3 + 1])));
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 12;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            {
                                arr_23 [i_2] [i_2] [i_2] [i_4] [i_6] [i_2] = (+-10652009300964514030);
                                var_22 = (max(var_22, var_10));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
