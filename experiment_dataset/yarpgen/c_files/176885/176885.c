/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176885
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176885 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176885
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((var_9 ? ((min(var_10, var_1))) : ((max(var_1, var_10))))) - var_16));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    var_18 = (min(var_18, var_12));
                    var_19 = (127 ? (((var_15 + var_14) ? ((-127 ? var_4 : (-32767 - 1))) : (arr_6 [i_1] [i_1] [i_1] [i_1]))) : var_0);
                    arr_9 [i_0] [0] [9] [i_1] = (max((min((min(var_13, 1)), (((13355838114723896793 ? 0 : 1))))), 64749));
                    arr_10 [i_0] [i_1] [i_1] [11] = 15;
                }

                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    arr_14 [i_1] = ((((((var_10 / 6) ? var_5 : ((var_9 / (arr_4 [i_0] [i_0] [i_3])))))) * ((-132 ? (max(2192659905, 1)) : 60302))));
                    arr_15 [5] [i_1] [i_3] = ((((((-1 ? 1665 : (arr_11 [i_0] [i_1] [i_3] [i_1])))) >= ((var_8 + (arr_5 [10]))))));
                    var_20 = (max(((var_10 ? ((0 ? 1442320815 : 38)) : 1268523995)), var_0));
                }
                for (int i_4 = 4; i_4 < 9;i_4 += 1)
                {
                    var_21 = (((arr_11 [4] [i_1] [4] [i_1]) ? -2027172958 : var_8));
                    var_22 = (arr_16 [i_1] [i_1]);
                    var_23 = (min(var_23, var_1));
                    arr_18 [i_0] [i_1] [i_4] = ((((max((~var_10), var_4))) ? (max(var_6, -2027172950)) : (((max(1, (arr_17 [i_4] [i_1] [5]))) ? var_2 : (~169)))));
                }
                var_24 = ((-(min((((5713157207745716396 || (arr_13 [i_1])))), ((var_11 ? var_8 : 5692947944551783254))))));
                arr_19 [i_1] [7] [i_1] = min(18446744073709551615, 14834);
            }
        }
    }
    var_25 = (max((1125899906842622 * 0), (((-1 ? var_5 : -127)))));
    #pragma endscop
}
