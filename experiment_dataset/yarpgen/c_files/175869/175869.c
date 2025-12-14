/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175869
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175869 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175869
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, (((117 >= 79) ? (max((!309939614), (-88 + var_4))) : (((((var_11 ? 39 : var_8))) ? var_16 : var_11))))));
    var_18 = -4;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = 875138827;
                arr_6 [i_1] [i_1] = (!var_11);
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {
                            var_19 = (min(-var_5, ((~(((arr_12 [i_0] [i_1] [i_2] [i_3] [i_3]) ? 519064244 : 1))))));
                            arr_13 [i_1] [i_1] [i_2] [i_1] [i_1] [i_0] = (((min(-519064260, 18446744073709551615)) > -519064244));
                            var_20 -= ((1430870233 ? (((((var_1 ? 26 : var_3)) == 27889))) : (((((var_15 ? (arr_1 [i_0 + 2] [i_1]) : 57440))) ? var_16 : 117))));
                        }
                    }
                }
                arr_14 [i_1] [i_1] = (((~1060449336) ? (min(((var_6 ? 44536 : var_8)), 1)) : ((((var_10 ? var_11 : var_14)) + -67108864))));
            }
        }
    }
    var_21 += var_13;
    #pragma endscop
}
