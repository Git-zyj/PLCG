/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149283
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149283 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149283
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 -= var_1;
    var_12 = (min(var_12, var_9));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    var_13 = (max(var_13, ((min(((var_4 == (((!(arr_5 [i_0] [1])))))), (!38))))));
                    arr_7 [i_1] [i_2 - 1] = ((var_1 ? (((!(((~(arr_1 [i_1] [i_1]))))))) : (max((arr_0 [i_0 - 2]), ((~(arr_6 [i_2] [16])))))));

                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        arr_10 [i_1] [i_0 - 3] = (-var_8 != (((var_9 == (~-575339646)))));
                        arr_11 [i_0] [i_0] [i_0] [i_1] [i_1] = (!7381);
                    }
                    var_14 = (((max(var_9, (arr_9 [i_1] [i_1] [i_1] [i_0]))) & ((min((var_4 | var_7), (arr_6 [i_0 - 2] [i_2 - 1]))))));
                }
            }
        }
    }
    #pragma endscop
}
