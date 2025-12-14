/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11706
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11706 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11706
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_11 && (((((var_5 ? 62379 : var_7))) || (var_1 && 24)))));
    var_13 = ((~((((max(2147483648, 2147483634)) <= (-2089610496 <= 1))))));
    var_14 = ((((-103 >= ((min(var_9, 102))))) ? ((var_7 ? var_6 : (((var_1 ? 11 : var_7))))) : var_8));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_15 = (max(var_15, ((max((arr_0 [i_1]), ((((((arr_3 [3] [i_1]) < 0)) ? (arr_2 [i_0]) : ((((arr_0 [i_0 - 1]) ? var_7 : (arr_4 [i_1] [10] [i_0]))))))))))));
                var_16 = 7249969114893682477;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_17 = var_8;
                            var_18 = var_0;
                            var_19 = ((((((arr_9 [i_0] [i_0 + 2]) << (2022265816 - 2022265801)))) ? (((!(arr_9 [i_0 + 3] [i_0 + 3])))) : (((arr_9 [i_0] [i_0 + 2]) / (arr_9 [i_2] [i_0 - 1])))));
                            var_20 = (max(var_9, (arr_6 [i_0 - 1] [i_0])));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
