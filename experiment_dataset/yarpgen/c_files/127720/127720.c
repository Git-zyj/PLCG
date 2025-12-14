/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127720
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127720 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127720
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (var_10 || var_5);
    var_15 = ((((~((31827 ? 47212 : var_8)))) & (var_10 & var_8)));
    var_16 = (var_0 & var_5);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_17 = ((12918 ? ((-(~var_4))) : (((arr_6 [i_4]) ? (arr_8 [i_1 - 1] [i_1] [15]) : (!28082)))));
                                var_18 += ((((!(((47920 ? 7537 : 8312))))) ? (arr_2 [i_2] [i_4]) : ((((min(62812, 62817))) ? (!26592) : ((-(arr_9 [i_0] [i_0] [i_2] [i_3])))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 16;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 15;i_6 += 1)
                        {
                            {
                                arr_19 [10] [10] [i_0] [i_0] [i_0] [i_6] [i_6] = (min((((var_12 | 58234) | (46637 | 19213))), ((~((max((arr_14 [i_0] [i_2] [i_0]), 27168)))))));
                                var_19 = (min(var_19, ((((((((~(arr_17 [i_2]))) <= ((var_10 ? var_4 : (arr_5 [i_2])))))) | (1541 & -62801))))));
                            }
                        }
                    }
                    arr_20 [i_0] [i_0] [i_2] = ((~((((var_8 ? 59031 : (arr_0 [10] [i_2]))) & (arr_4 [i_0] [i_0])))));
                }
            }
        }
    }
    #pragma endscop
}
