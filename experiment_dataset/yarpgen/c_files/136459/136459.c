/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136459
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136459 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136459
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 ^= (min((((!(var_1 ^ var_7)))), var_5));
    var_12 = (1 <= (min(1, 2094354536323954895)));
    var_13 = var_9;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_14 = (max(((!(!1))), ((!(!var_10)))));
                    var_15 = (min(var_15, ((((arr_5 [i_1] [i_1] [i_0]) || (((var_1 ? (~18446744073709551607) : (((-(arr_1 [i_0]))))))))))));
                    var_16 &= 12179245927302343140;
                }
            }
        }
    }
    var_17 = (39425 + -1669984539);
    #pragma endscop
}
