/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182419
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (-1 % -1);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            {
                arr_7 [i_0] = 3119004690388960416;
                var_12 = (((((+(((arr_2 [i_0] [i_1]) ? 246 : var_5))))) <= (arr_1 [i_1])));
                var_13 -= ((-23 ? (max((arr_3 [i_1] [i_1 + 1]), 3119004690388960415)) : ((((461100331 == (~18446744073709551615)))))));
            }
        }
    }
    var_14 = (max(var_1, (67108863 * 18446744073709551615)));
    #pragma endscop
}
