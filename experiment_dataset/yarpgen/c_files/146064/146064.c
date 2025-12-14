/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146064
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146064 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146064
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_12 = var_2;
                arr_6 [5] &= (arr_3 [i_0]);

                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_13 = ((((arr_3 [i_1]) + 1)));
                                var_14 = (((max(1, 1))));
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 20;i_5 += 1) /* same iter space */
                    {
                        var_15 &= ((((max(((var_5 + (arr_16 [i_0] [i_1] [0] [i_2] [i_5]))), (var_10 % 21192)))) ? (arr_5 [i_1] [2]) : (((arr_7 [6] [i_5]) ? ((-4015 ? var_10 : var_11)) : var_11))));
                        var_16 = -4027;
                    }
                    for (int i_6 = 0; i_6 < 20;i_6 += 1) /* same iter space */
                    {
                        var_17 = (!var_0);
                        var_18 -= ((max(-4265136232628909699, var_9)));
                    }
                    var_19 = (max((((1965293254857041029 + 1) + (arr_12 [i_2]))), ((max(((((arr_21 [i_2] [i_2] [i_2] [i_2] [i_2] [13]) ? var_8 : var_6))), (var_7 % 2147483648))))));
                }
                var_20 = -var_1;
            }
        }
    }
    var_21 = var_2;
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        for (int i_8 = 1; i_8 < 1;i_8 += 1)
        {
            {
                var_22 = (((3115234956 ? ((var_5 + (arr_8 [i_7])) : (((1 ? var_11 : (arr_12 [i_7]))))))));
                var_23 = (min(var_23, (((-((10 ? var_1 : var_2)))))));
                var_24 = (max(var_24, ((max((max(4482033525292425969, ((((arr_20 [i_7] [0] [8] [i_8]) ? 14 : var_10))))), ((max((arr_14 [10] [i_8] [i_8 - 1] [i_8 - 1] [i_8] [i_8 - 1] [i_8 - 1]), (arr_14 [10] [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_8] [i_8] [i_8 - 1])))))))));
            }
        }
    }
    var_25 = (((((max(var_8, 697570128896553443)))) + -1));
    #pragma endscop
}
