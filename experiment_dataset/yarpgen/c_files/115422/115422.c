/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115422
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115422 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115422
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, (((((181 ? 1707756708 : 2997533281)) - ((min((3 + 3), ((min(28772, -11267)))))))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            {

                for (int i_2 = 3; i_2 < 23;i_2 += 1)
                {
                    arr_6 [i_0] [i_0] = ((((((var_10 < (arr_5 [i_0] [i_1] [0]))))) * (-101 - 127)));
                    arr_7 [i_0 - 1] [i_1] [i_0] = (min(((((-127 - 1) / 1))), (min(2147483647, 3118604149))));
                    var_16 = (((max(1, 18446744073709551615))));
                    arr_8 [i_0] [i_0] [i_2 - 3] = (max((arr_3 [i_0]), (((((arr_4 [i_0]) ? 1 : 1)) / (((-127 - 1) * (arr_5 [18] [18] [i_2])))))));
                }
                var_17 = (arr_2 [i_0]);
                var_18 = (!0);
            }
        }
    }
    #pragma endscop
}
