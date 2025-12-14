/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176747
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176747 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176747
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((~0) && (((var_10 ? (-5399822494702714793 < var_7) : (0 / var_10))))));
    var_12 = (3479333804 | ((var_2 ? var_0 : (min(var_7, 0)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_13 ^= (((815633514 != -1673085272) + (((!(((-(arr_0 [i_0])))))))));
                var_14 = (2958653891 / 815633491);
                arr_5 [i_0] [i_0] [i_0] = ((((((arr_0 [i_1]) < (arr_1 [i_1])))) != 207));
                arr_6 [i_0] = (((min(-336416701122191359, 3238726190)) + (!var_0)));
            }
        }
    }
    #pragma endscop
}
