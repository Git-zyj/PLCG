/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114207
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114207 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114207
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            {
                var_18 = (((min(var_5, (arr_1 [i_0 - 3] [i_0 + 1]))) >= (((arr_1 [i_0 - 3] [i_0 + 2]) ? (arr_1 [i_0 - 4] [i_0 - 1]) : var_0))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_19 -= ((~(max((arr_6 [i_0 - 3] [i_0 - 1] [i_0] [i_3]), (arr_5 [i_0] [i_0])))));
                            var_20 += ((~((~((var_10 | (arr_1 [i_1] [i_3])))))));
                            var_21 = (min(var_21, ((min(((max((max(var_6, var_7)), ((2339097911 ? 4 : -26))))), (min((~var_7), (((arr_2 [i_0 - 1] [i_0 - 1] [i_0 - 1]) ? var_3 : -135912927)))))))));
                            var_22 = ((!var_12) == (((arr_0 [i_0] [i_0]) * (((arr_6 [i_0] [i_2] [i_2] [i_0 + 1]) ? var_8 : (arr_6 [i_2] [i_2] [i_2] [4]))))));
                        }
                    }
                }
                arr_12 [i_0] [i_1] [i_1] = ((!((((((~(arr_5 [i_0] [i_0])))) ? 3892336470684500256 : var_6)))));
            }
        }
    }
    var_23 = ((((min((~var_13), ((var_1 >> (var_0 - 27604)))))) || var_10));
    var_24 |= var_1;
    #pragma endscop
}
