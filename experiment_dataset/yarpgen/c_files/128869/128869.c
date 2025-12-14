/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128869
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128869 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128869
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_7 [2] = (min(((max((arr_1 [i_0 - 2]), (arr_1 [i_1])))), ((0 ? var_0 : (arr_1 [i_1])))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_18 [i_0] [i_0] = arr_0 [i_2] [i_2];
                                arr_19 [i_0] [i_1] [2] [1] [i_4] [i_1] = ((((min((arr_14 [i_0 - 1] [i_0 - 2] [i_0 + 1] [i_0 - 1]), (arr_14 [i_0 - 2] [i_0 - 1] [i_0 + 1] [i_0 - 2])))) ? ((+(min((arr_10 [i_0] [i_0] [i_0] [i_0]), -4153521600999295412)))) : (((min((arr_4 [i_0 + 1]), (!15370192176471215274)))))));
                                arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] = 26798;
                            }
                        }
                    }
                }
                arr_21 [i_0 + 1] [2] = (((-(arr_1 [6]))));
            }
        }
    }
    var_18 = (min((((!(!15370192176471215263)))), 4153521600999295419));
    #pragma endscop
}
