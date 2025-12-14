/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153048
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153048 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153048
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            {
                var_14 = (max(var_14, (!2007338326)));
                var_15 *= (min((var_2 ^ var_2), ((var_0 - (((-(arr_2 [i_0] [i_0]))))))));

                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    var_16 -= ((((((arr_4 [i_0] [i_0]) ? (((arr_1 [14]) ? var_13 : 2287628970)) : (arr_4 [i_0] [i_0])))) ? (((!((((arr_5 [i_2]) ? 2007338325 : (arr_3 [i_2] [i_2]))))))) : (arr_2 [i_0] [i_0])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_17 = (arr_10 [i_0] [i_1 - 1] [i_0] [i_2] [i_3] [i_4]);
                                var_18 = (arr_4 [i_0] [i_0]);
                                var_19 ^= (2007338326 < var_2);
                            }
                        }
                    }
                }
                for (int i_5 = 0; i_5 < 16;i_5 += 1)
                {
                    var_20 += arr_1 [i_1];
                    arr_14 [5] [i_1] = (arr_9 [i_0] [i_1 + 1] [i_5] [i_0] [i_5]);
                }
            }
        }
    }
    var_21 += var_2;
    #pragma endscop
}
