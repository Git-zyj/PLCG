/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177438
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177438 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177438
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_10 = max(-102, (max(var_8, 389252045916349532)));
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 8;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 7;i_4 += 1)
                        {
                            {
                                var_11 = 15;
                                var_12 = (max(var_12, ((min((((((var_0 || (arr_2 [i_1]))) || (!var_4)))), (((arr_15 [i_0 - 2] [i_4 + 1] [i_4 + 1] [i_3] [i_3] [i_4]) - 65527)))))));
                                var_13 &= var_4;
                            }
                        }
                    }
                }
                var_14 *= (max((((8222775862332184706 - 65517) % 15)), -2943327686295279555));
            }
        }
    }
    var_15 = ((((((!var_7) << ((((65535 ? var_8 : 64378)) + 6498235260091922104))))) ? 23004 : ((((((-9223372036854775807 - 1) ? var_5 : var_1))) ? (65503 + -45) : var_2))));
    #pragma endscop
}
