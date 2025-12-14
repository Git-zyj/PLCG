/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112821
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112821 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112821
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 -= 1034888266;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        {
                            var_21 = (min(var_21, 1034888266));
                            var_22 *= (max(3260079029, ((((arr_7 [i_3] [i_1 - 2]) < (max(103, -1838028373)))))));
                        }
                    }
                }
                var_23 = ((((((arr_6 [i_0 + 1] [i_0] [i_0] [i_0]) ? (arr_6 [i_1] [i_1] [i_0 - 2] [i_0]) : (max(9225723957716457541, 45380))))) ? 14156 : 1));
            }
        }
    }
    #pragma endscop
}
