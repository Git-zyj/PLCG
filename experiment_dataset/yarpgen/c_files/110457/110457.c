/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110457
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110457 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110457
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                var_10 &= (min((max(var_9, (arr_5 [i_2] [8] [i_4]))), (((var_8 / (arr_11 [5] [i_1] [5] [23] [9] [5]))))));
                                var_11 = 2684626149;
                                arr_13 [i_3] [i_2] [i_2] = (!464846002807674796);
                            }
                        }
                    }
                    arr_14 [1] [i_0] [i_0] [i_0] = (min((min(((464846002807674796 << (464846002807674796 - 464846002807674792))), var_1)), (arr_9 [14] [i_2] [i_1] [i_1] [14])));
                    arr_15 [i_0] [i_2] [i_0] [i_0] = (((((-464846002807674797 || (((464846002807674785 ? var_9 : (arr_5 [i_0] [i_1] [i_2]))))))) * (((-464846002807674809 == (6302915888494998905 + 224))))));
                }
                var_12 -= (arr_2 [i_0]);
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 25;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 22;i_6 += 1)
                    {
                        {
                            var_13 -= (((-9223372036854775804 + 9223372036854775807) << (((((~9223372036854775803) - -9223372036854775772)) + 36))));
                            var_14 = (!6);
                            var_15 ^= min(var_2, ((((-6302915888494998918 ? (arr_7 [i_0] [i_0] [18]) : 24)))));
                        }
                    }
                }
            }
        }
    }
    var_16 |= (((~(var_4 & var_4))));
    var_17 = 464846002807674781;
    var_18 = 151538252412619372;
    #pragma endscop
}
