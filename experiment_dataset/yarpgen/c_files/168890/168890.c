/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168890
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168890 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168890
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 += (var_9 | var_2);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_13 = (((~5) ? (((((max((arr_1 [i_1]), (arr_2 [11] [i_1] [i_1])))) && var_11))) : ((~(((!(arr_3 [i_0] [i_0] [i_1]))))))));

                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_14 -= ((-((min((arr_9 [i_3 - 1] [i_3 - 1] [i_3 - 1] [16] [i_3 - 1] [i_0]), (arr_9 [i_3 - 1] [i_3 - 1] [i_4] [i_4] [i_4] [i_4]))))));
                                var_15 = (((((var_1 - (((((arr_6 [i_0] [i_0] [i_0] [i_0]) || 254))))))) % ((240 ? 1 : 15083621032502610340))));
                                arr_14 [i_3] [i_3] [i_3] [i_3] [i_1] = (-675012153 || 243);
                            }
                        }
                    }
                    var_16 = (((((var_8 ? (arr_8 [i_2] [1] [i_1] [i_1] [i_0]) : (arr_8 [i_0] [i_0] [i_2] [i_2] [i_0])))) ? -9769283800044071967 : (((~var_6) ? (arr_5 [i_0] [i_1] [i_2]) : 14))));
                    var_17 = (max((arr_10 [i_1] [i_1] [i_1] [i_1]), (((var_6 + var_2) >> (((~2) + 23))))));
                }
                var_18 = (min(var_18, (((~(max(((238 ? var_4 : var_11)), (arr_4 [i_1]))))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 23;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 23;i_6 += 1)
        {
            {
                arr_20 [i_6] = ((-(max((max((arr_16 [i_6]), (arr_17 [i_6]))), ((var_5 ? (arr_17 [i_5]) : 12))))));
                arr_21 [i_6] = ((((15 & (~var_10)))) ? ((~(arr_19 [i_5] [i_6]))) : (arr_16 [i_5]));
                var_19 &= -var_5;
                var_20 = var_8;
                var_21 = (-var_0 == 0);
            }
        }
    }
    #pragma endscop
}
