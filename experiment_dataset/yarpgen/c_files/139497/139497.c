/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139497
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139497 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139497
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (!71);
    var_11 = (max(var_11, ((((((max(var_8, 0)) << ((((var_9 ? var_7 : var_4)) - 10066)))) * ((max((-18533 | 2147483647), 1))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                var_12 = ((var_5 ^ var_0) <= (((var_7 <= (arr_3 [i_1] [i_1 - 1] [i_1 - 1])))));
                var_13 = (((((((min((arr_0 [i_1]), (arr_3 [i_1] [i_1] [i_1])))) * (arr_3 [i_1] [i_1 + 3] [i_1])))) ? (((arr_0 [i_0]) ? (!var_4) : (arr_1 [i_1 + 3]))) : (((!(((var_9 ? (arr_0 [20]) : var_2))))))));
                var_14 = (((max(var_7, (arr_1 [i_1 - 1])))) || ((-598997020 != ((max(var_5, 119))))));
                var_15 = ((-((min(1, 119)))));
            }
        }
    }
    #pragma endscop
}
