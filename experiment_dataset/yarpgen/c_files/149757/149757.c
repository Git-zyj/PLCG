/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149757
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149757 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149757
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (var_4 ? (((!((max(176, 0)))))) : ((0 ? var_8 : var_11)));
    var_14 = ((((max((~var_3), var_12))) ? ((min((min(-5181337600497369843, 9)), 28464))) : ((((-22654 ? 12889983547990358759 : 2147483633)) + var_12))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        {
                            var_15 *= (87 | 4462637487722833835);
                            var_16 = (min(var_16, ((min((((!(1907755292 <= -4462637487722833835)))), 4030821126)))));
                            var_17 = ((((((arr_0 [i_0]) ? 15510524239923704288 : (arr_6 [i_3] [i_3 + 1])))) ? (arr_6 [i_3] [i_3 + 1]) : ((min(var_5, (arr_0 [i_0]))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 4; i_4 < 19;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        {
                            arr_14 [i_0] [i_0] [i_4] [i_0] = (min((((arr_6 [i_0] [i_0]) ? ((min(var_8, (arr_0 [i_0])))) : -2147483632)), var_8));
                            arr_15 [i_0] [i_0] [i_5] = ((15510524239923704276 ? 1744587200 : 4462637487722833835));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
