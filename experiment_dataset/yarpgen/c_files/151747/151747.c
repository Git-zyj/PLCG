/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151747
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151747 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151747
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = -4156;
    var_11 = (min(((~((~(-9223372036854775807 - 1))))), var_0));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        {
                            var_12 = ((((((arr_8 [i_0 - 1] [i_0 + 1] [i_0] [i_0 + 1]) ? var_9 : var_7))) ? 9223372036854775807 : ((min((arr_8 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 + 1]), (arr_8 [i_0 - 1] [i_0] [3] [i_0 + 1]))))));
                            arr_10 [11] [i_1] [i_1] [i_0 + 1] = ((12203 ? -12203 : -12203));
                            arr_11 [i_1] [i_1] [i_2] [i_3] = ((-12203 ? 12200 : 1568848816295262353));
                            arr_12 [i_0] [22] [8] [i_2] [i_1] [i_3] = (min((arr_0 [i_0 + 2]), (max((arr_8 [i_0] [i_0 + 1] [i_0 + 1] [i_0 + 2]), (arr_8 [i_0] [i_0 - 1] [i_0 + 2] [i_0])))));
                        }
                    }
                }
                var_13 |= ((((((min(8995881965615613345, var_3))))) + 10183828212105094459));
            }
        }
    }
    var_14 = var_2;
    var_15 = (((min(((12211 ? var_0 : -12201)), var_9)) <= (max(var_2, var_0))));
    #pragma endscop
}
