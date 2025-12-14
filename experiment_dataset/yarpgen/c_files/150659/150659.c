/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150659
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150659 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150659
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_16 = (min(var_16, ((((~(min(3117259699, var_2))))))));
                var_17 = ((((var_10 / (min(var_15, -1194364064023937760)))) * (arr_1 [1])));
                arr_5 [i_0] [6] = (max(var_7, (min((~1697181694), (max(-1697181694, var_3))))));
                var_18 = 1697181675;
                var_19 = (min(-0, 138));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 9;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            {
                var_20 = (1697181694 & -1697181677);
                arr_10 [i_2] [i_2 + 1] [i_2 + 1] |= 0;
                var_21 = ((1 % (((((1697181694 ? (arr_3 [i_3]) : (arr_2 [10] [6])))) | (-9223372036854775807 - 1)))));
            }
        }
    }
    #pragma endscop
}
