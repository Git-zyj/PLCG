/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120453
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120453 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120453
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            {
                var_17 &= ((+(((arr_0 [i_0] [i_1]) ? (arr_4 [i_1 + 1] [i_0] [i_1 + 1]) : ((-23 ? -23 : 79))))));
                var_18 += (((((arr_1 [i_0]) == (arr_1 [i_0])))) != (((arr_4 [i_0] [i_0] [i_1 + 2]) ? (arr_4 [i_1] [i_1] [i_1 - 2]) : (arr_4 [i_0] [i_1] [i_1 + 1]))));
                var_19 |= (((((arr_4 [1] [1] [i_1]) ? (arr_2 [i_1 + 1] [1]) : (((arr_0 [i_0] [0]) ? (arr_3 [i_0] [i_1]) : (arr_2 [i_0] [0])))))));
            }
        }
    }
    var_20 = ((var_6 + ((((var_1 && (var_2 && var_7)))))));
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 15;i_4 += 1)
            {
                {
                    var_21 -= ((((((arr_7 [i_4]) ? (arr_7 [i_4]) : (arr_7 [i_4])))) && ((((arr_7 [i_4]) ? (arr_7 [i_2]) : (arr_7 [i_4]))))));
                    var_22 = (((((((arr_7 [i_2]) ? (arr_6 [5]) : (arr_11 [i_2] [i_2] [i_4] [i_2]))) < (((arr_9 [0]) | (arr_6 [14]))))) ? ((((((arr_9 [i_2]) ? (arr_5 [i_2] [i_2]) : (arr_8 [i_2] [8] [i_4])))) ? (arr_10 [i_2] [i_3] [i_4]) : (arr_5 [i_2] [5]))) : (((((((arr_6 [5]) ? (arr_8 [i_2] [i_4] [i_4]) : (arr_14 [i_4] [i_2] [i_2] [i_2])))) ? (~-32) : (((arr_9 [i_4]) ? (arr_14 [i_2] [7] [i_3] [i_4]) : (arr_8 [11] [i_2] [11]))))))));
                    var_23 = (((((((((arr_5 [i_3] [i_3]) ? (arr_5 [i_3] [i_4]) : (arr_8 [1] [5] [i_4])))) ? (arr_12 [i_4] [i_4] [i_3] [i_2]) : (((arr_7 [i_3]) | (arr_11 [i_2] [i_3] [1] [i_3])))))) + (((arr_11 [i_2] [i_2] [3] [i_4]) & (((arr_8 [5] [i_2] [1]) ? (arr_13 [i_4] [i_4] [i_2]) : (arr_5 [i_2] [i_4])))))));
                    arr_15 [i_2] = ((+(((arr_8 [i_4] [i_3] [i_4]) - ((-(arr_11 [i_2] [i_3] [i_3] [i_3])))))));
                }
            }
        }
    }
    #pragma endscop
}
