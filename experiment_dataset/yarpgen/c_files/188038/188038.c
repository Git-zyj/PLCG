/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188038
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188038 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188038
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_6;
    var_20 = ((((min((((var_4 ? 9223372036854775807 : var_11))), (max(9223372036854775807, 4000202498235908826))))) ? (((~var_10) ? ((max(var_17, -5254113611967069167))) : var_18)) : var_2));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        {
                            var_21 &= var_14;
                            arr_11 [i_3] [i_1] [i_1] [i_1] [i_1] [i_3] = (min(((max(var_5, 16641))), (max(0, -9223372036854775803))));
                            var_22 = ((((((!var_15) ? ((var_5 ? -9223372036854775807 : var_11)) : 1))) || ((min(229, (min(4179662231, -10)))))));
                            var_23 = (min((max(((min(-64, 32736))), 4000202498235908826)), (!var_1)));
                            var_24 = (max(var_24, var_6));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 11;i_5 += 1)
                    {
                        {
                            var_25 = ((!(((~((var_5 ? 213 : var_11)))))));
                            var_26 = ((223 ? 3713854268 : 1));
                            var_27 = (min(var_27, ((((((223 - 5254113611967069146) ? -21684 : ((var_17 ? -1498257518 : (-9223372036854775807 - 1)))))) ? (((!7374295591813870044) ? 18446744073709551615 : var_6)) : (!11072448481895681563)))));
                        }
                    }
                }
            }
        }
    }
    var_28 = (max((max(-268434944, (min(var_0, var_1)))), (((30 ? (min(-28223, -268434945)) : var_11)))));
    #pragma endscop
}
