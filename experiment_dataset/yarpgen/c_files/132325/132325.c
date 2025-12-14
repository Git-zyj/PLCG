/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132325
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                var_12 ^= 206;
                var_13 = (min(((88 & (arr_4 [i_1 - 1] [i_1 - 1]))), (arr_0 [i_0])));
                var_14 = ((~var_2) ? -2692896895882063548 : (((arr_5 [i_0]) / 2692896895882063544)));
                var_15 = ((((max(-169486254, 2692896895882063547))) ? (arr_0 [i_0]) : ((+(((arr_3 [i_0] [i_1 + 1]) ? (arr_3 [i_1] [i_1]) : (arr_3 [i_1] [i_0])))))));
                var_16 = (max((((arr_5 [i_0]) ? (arr_5 [i_0]) : (arr_5 [i_0]))), ((var_10 ? (arr_5 [i_0]) : (arr_5 [i_0])))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            {
                var_17 ^= (arr_10 [i_2] [i_3]);
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        {
                            arr_19 [i_2] [i_2] [i_2] [i_2] [i_2] = (arr_16 [i_2] [i_3] [i_5]);
                            var_18 ^= 2692896895882063549;
                            arr_20 [i_2] [i_3] [i_4] [i_5] [i_5] [i_5] = (((arr_8 [i_4]) ? (((var_7 <= (max(-2692896895882063548, 15))))) : (((!((max(-1, (arr_12 [i_2] [i_2] [i_4] [i_2])))))))));
                        }
                    }
                }
                var_19 = (max(var_19, ((min((((arr_14 [i_2] [i_2] [i_3] [i_2]) ? ((min(var_7, (arr_15 [i_2] [i_3] [i_3] [i_3])))) : -3584949073784570350)), ((max((((arr_17 [i_3] [i_3] [i_2] [i_2]) ? (arr_10 [i_3] [i_3]) : 0)), ((var_1 ? var_2 : (-127 - 1)))))))))));
                var_20 = 0;
                arr_21 [i_2] = (((((((arr_7 [i_3] [i_2]) != (arr_18 [1] [i_2] [4] [i_3] [4] [i_3]))))) / ((~((-287905985 & (arr_7 [i_2] [i_3])))))));
            }
        }
    }
    #pragma endscop
}
