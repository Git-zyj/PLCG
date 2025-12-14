/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164198
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164198 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164198
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, ((((var_9 / 10945) & ((((min(var_13, 54591))) & var_12)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {
                            var_15 = (((((var_4 ? ((-(arr_11 [i_0] [i_0] [i_0] [i_1] [i_2] [i_3]))) : ((54591 ? var_2 : var_1))))) ? ((var_11 + (var_11 + var_1))) : (((-(((arr_9 [i_0] [i_1] [i_0] [i_3]) - var_3)))))));
                            var_16 &= (max((((~var_1) / (arr_7 [i_2]))), ((~((-1227319164 * (arr_5 [i_0] [i_0])))))));
                            var_17 = (((max(0, ((~(arr_9 [i_0] [i_1] [i_0] [i_3]))))) == var_1));
                            arr_12 [i_3] [i_1] [i_2] [i_2] [i_1] [i_2] &= arr_7 [i_3];
                            var_18 = ((1787287732 / (-32767 - 1)));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        {
                            arr_17 [i_0] = (max((((((1227319163 ? -405178267 : -1227319164))) ? -1288341777278178508 : var_12)), (max(var_0, (1 & 1738578021)))));
                            arr_18 [1] [i_0] [i_0] [i_5] = (max(var_11, ((((max(var_5, (arr_1 [i_0] [9]))) && ((max((arr_4 [i_0]), var_10))))))));
                            var_19 = (-(((((-1227319164 ? (arr_11 [8] [i_1] [i_0] [i_1] [i_1] [i_1]) : (arr_7 [i_0])))) ? (var_10 & var_0) : (arr_13 [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 - 1]))));
                        }
                    }
                }
                var_20 = (arr_0 [i_0]);
                arr_19 [i_0] [i_0] = (min(((min((min(var_8, -1227319164)), ((((arr_5 [i_0] [i_0]) != var_9)))))), ((~(~var_0)))));
            }
        }
    }
    #pragma endscop
}
