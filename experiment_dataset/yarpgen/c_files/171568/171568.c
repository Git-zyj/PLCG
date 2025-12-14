/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171568
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171568 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171568
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {
                        {
                            var_15 = (((max(var_14, (arr_5 [i_3 + 2] [i_3] [i_3 + 2] [11]))) - ((var_1 / (arr_5 [i_3 - 1] [i_3] [i_3] [6])))));
                            var_16 = ((var_10 == ((((!(arr_0 [i_0] [i_2])))))));
                            var_17 = ((~((~(((arr_1 [i_2]) ^ var_4))))));
                            var_18 -= (min((~-6), (((arr_6 [i_3] [i_2] [4] [i_3 + 2]) + (arr_4 [i_2])))));
                            var_19 = (max(var_19, (arr_5 [i_0] [i_0] [i_0] [i_0])));
                        }
                    }
                }
                var_20 = (max(var_20, ((((((min(-2147483646, 2709)))) ? ((((min(21, -26))))) : (min((var_7 | var_10), (((arr_4 [1]) >> (var_8 - 794))))))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 2; i_4 < 15;i_4 += 1)
    {
        for (int i_5 = 1; i_5 < 14;i_5 += 1)
        {
            {
                arr_14 [i_5] = ((~-var_9) ^ ((((arr_10 [i_4 - 1]) ? var_6 : (arr_10 [i_4 - 1])))));
                var_21 = (max(var_21, ((((((var_10 & (arr_11 [i_5])))) ? (((((-(arr_10 [9])))) & (arr_13 [i_4] [i_4 - 2] [i_4]))) : (3965712214853273413 == 1))))));
                /* LoopNest 2 */
                for (int i_6 = 1; i_6 < 1;i_6 += 1)
                {
                    for (int i_7 = 2; i_7 < 15;i_7 += 1)
                    {
                        {
                            var_22 = (min((arr_12 [i_5] [i_5] [i_5]), (~-31522)));

                            for (int i_8 = 4; i_8 < 13;i_8 += 1)
                            {
                                arr_22 [i_6] = ((((((!(5373723716638179523 && -32756))))) & (max(((((arr_17 [i_6] [i_6] [1] [i_6] [i_8]) && 13673960620474711095))), 315979668))));
                                var_23 = var_6;
                            }
                            var_24 = (min(5373723716638179523, 200));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
