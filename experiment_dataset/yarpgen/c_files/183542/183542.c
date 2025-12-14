/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183542
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183542 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183542
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((-4 ? 61440 : 362))) || (((63488 ? 3698349390 : 47))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_20 = ((((~((1 ? -4 : 3314310606493837630))))) ? 4294967295 : 27591);
                var_21 = (+(((max((arr_4 [i_0] [1] [1]), var_1)) / ((3431464323 ? -1829176985 : -1969271163)))));
            }
        }
    }

    for (int i_2 = 1; i_2 < 22;i_2 += 1)
    {
        var_22 = ((((var_16 ? 119 : (arr_5 [14] [i_2 - 1]))) > ((var_0 ? 30 : var_4))));
        var_23 = min(((863502973 ? ((224 ? 2147483647 : -12)) : 36188)), (!61457));
        arr_7 [i_2 + 2] = ((!(arr_6 [i_2])));
    }
    var_24 *= (((!45562) ? ((max(47, ((var_5 ? 4 : var_13))))) : var_3));
    #pragma endscop
}
