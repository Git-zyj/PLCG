/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188926
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188926 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188926
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(-9152246008244315301, ((((!10437) == ((var_5 ? 68 : var_7)))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_20 = ((1905996540 ? (((arr_5 [i_0]) * 11320534882703736982)) : ((((2067379383 & 54506) ? (arr_0 [i_0 - 1]) : (arr_1 [i_0 - 1] [i_0 + 1]))))));
                var_21 = (max(var_21, (((!(arr_4 [i_0 - 1]))))));

                for (int i_2 = 1; i_2 < 17;i_2 += 1)
                {
                    arr_10 [i_0] = (arr_2 [i_0]);
                    var_22 = (min(var_22, (((11320534882703736971 ? 115 : 7126209191005814649)))));
                    var_23 = (var_17 > 2067379374);
                    var_24 = (max((((var_16 << 0) ^ var_3)), ((((!var_2) == 18446744073709551604)))));
                    var_25 ^= ((!(((var_17 ? (arr_7 [i_0 - 1] [i_2] [i_2 + 1] [i_2]) : (arr_7 [i_0 - 1] [i_0 - 1] [i_2 + 1] [i_2]))))));
                }
                var_26 = (max(var_26, (arr_1 [4] [i_1])));
                var_27 += (max(var_17, ((max((arr_3 [i_0 - 1] [i_0 - 1]), (max(-111, (arr_4 [i_1]))))))));
            }
        }
    }
    #pragma endscop
}
