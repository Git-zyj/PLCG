/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183807
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183807 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183807
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                {
                    var_15 = ((((!(135 & 65535))) ? (!var_5) : ((33119 ? 165 : 165))));
                    var_16 = (max(var_16, (((1 ? (((var_13 ? 6 : (arr_6 [i_0])))) : (max(234, (arr_7 [i_2 - 1] [i_2 - 1] [i_2] [i_0]))))))));
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 13;i_3 += 1)
    {
        var_17 = (max(9223372036854775807, (-2147483647 - 1)));
        var_18 = 18446744073709551615;
    }
    var_19 = (max((min(((var_10 ? var_3 : var_8)), 16384)), var_14));
    #pragma endscop
}
