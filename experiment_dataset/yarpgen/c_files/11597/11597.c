/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11597
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11597 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11597
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(-1630353760, ((-((1630353760 ? 65535 : 1630353760))))));
    var_16 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_17 -= ((((((((0 ? 26 : var_4))) ? 0 : var_8))) ? 241 : (((~1) ? (max(1630353760, -61)) : (95 && 48)))));
                arr_5 [i_0] [i_1] = max((arr_2 [i_0] [i_1]), (arr_4 [i_0] [i_0]));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {
                            var_18 = (arr_4 [i_2] [i_1]);
                            var_19 *= (((((var_0 >> ((((216 ? (arr_10 [i_3] [i_2] [i_1] [i_0]) : var_10)) - 175))))) ? (arr_4 [i_1] [i_2]) : (max(6, 791408575))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
