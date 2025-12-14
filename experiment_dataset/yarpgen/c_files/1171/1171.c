/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1171
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1171 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1171
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] [i_1 + 2] |= 9223372036854775807;
                arr_5 [7] [i_0] = ((!(arr_0 [i_0])));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        {
                            arr_11 [6] [i_1] [i_2] = 39718;
                            var_13 = (((+(((arr_1 [i_0]) ? (arr_2 [i_0] [i_0] [i_0]) : 25818)))));
                            var_14 -= var_4;
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 3; i_4 < 19;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 20;i_5 += 1)
        {
            {
                arr_18 [i_4 + 1] [10] [i_5] = (((((((arr_15 [i_4] [i_4] [i_4]) & 17760)) ^ -28))) & 16273536318172460172);
                arr_19 [i_4 - 2] [i_5] &= (max(((((-37 == (arr_12 [7]))) ? ((max(147, 39706))) : (((var_11 && (arr_16 [i_4 - 1] [i_5] [i_4])))))), var_6));
            }
        }
    }
    var_15 = ((var_11 ? ((((-25828 > (36395 % -3783))))) : (max(916660497592363164, ((min(var_11, var_12)))))));
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 13;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 13;i_7 += 1)
        {
            {
                var_16 = ((((39699 && (arr_20 [i_7]))) || ((29140 || (arr_20 [i_7])))));
                var_17 = (((arr_25 [i_6] [i_7] [i_7]) < ((((((-29676 ? var_4 : (arr_8 [5] [i_7] [5] [i_6])))) || (!-37))))));
                var_18 = ((!(((54 ? -var_9 : (((var_0 ? 0 : var_12))))))));
            }
        }
    }
    var_19 = (max(var_11, var_2));
    #pragma endscop
}
