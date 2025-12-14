/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141157
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141157 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141157
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((max(var_5, (max(8352456766804177541, var_16))))) ? (max(4294967295, -1)) : ((var_6 ? 20166 : (max(-2401400690581546408, -104))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_19 -= max((~1777641195), ((5720504302717612266 ? -1 : -9144)));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 21;i_3 += 1)
                    {
                        {
                            arr_11 [i_2] [i_1] [i_1] [i_3] [i_2] = (max(((((!(arr_8 [i_0] [i_1] [i_1] [i_3]))) ? ((170 ? 0 : 27667)) : ((var_4 ? (arr_2 [i_0] [i_1] [i_2]) : 4164900997)))), ((min(0, -747717989)))));
                            arr_12 [i_0] [i_2] [i_2] [i_2] [i_3] [i_3] = (min(-32, 0));
                        }
                    }
                }
            }
        }
    }
    var_20 &= var_14;
    var_21 = ((-((((min(var_6, var_6))) ? (!var_10) : ((var_0 ? var_17 : var_10))))));
    #pragma endscop
}
