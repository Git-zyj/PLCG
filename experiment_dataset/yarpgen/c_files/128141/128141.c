/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128141
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128141 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128141
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 255;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_20 ^= 0;
                                var_21 *= (max((((arr_9 [i_4 - 1] [i_4 + 1] [i_4 - 1] [i_4 + 1] [i_4 - 1]) || (arr_9 [i_4 + 1] [i_4 - 1] [i_4 - 1] [i_4 + 1] [i_4 - 1]))), ((!((max((arr_0 [i_1 - 1]), (arr_4 [i_0] [i_0] [i_0]))))))));
                            }
                        }
                    }
                }
                var_22 *= (((((((arr_1 [i_1]) ? var_2 : -32761)) % var_4)) >= ((min((((2335025325 != (arr_8 [i_1 - 1] [i_0])))), (((arr_8 [i_0] [i_0]) ? var_1 : -96)))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 21;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 21;i_6 += 1)
        {
            {
                var_23 = (min(((7158502619008626471 ? 4905707312299965272 : 19)), ((-(min(var_2, var_12))))));
                arr_16 [i_5] = (((9349187525245046637 ? (arr_15 [i_6] [i_5]) : 35184372088831)));
                var_24 = (min((((arr_14 [i_6]) ? (arr_14 [i_5]) : var_2)), (((arr_14 [i_5]) / var_5))));
                var_25 = (min(1348131842847543823, ((((min(2031884336, 7243915756353694785)) < (arr_15 [i_6] [i_5]))))));
            }
        }
    }
    #pragma endscop
}
