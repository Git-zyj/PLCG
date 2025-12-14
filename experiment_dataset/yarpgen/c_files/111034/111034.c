/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111034
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111034 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111034
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, var_2));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 22;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_0] = arr_5 [i_1] [i_1] [i_2] [i_2];
                    var_21 = (min(var_21, ((max(((((arr_6 [i_2] [i_2 + 1] [i_2]) < ((-(arr_3 [i_2] [i_1] [i_0])))))), 6973985291861924235)))));
                    arr_9 [i_0] [0] [i_0] [i_0] &= ((-((~(((arr_6 [i_2] [i_1] [i_0]) ? 1 : (arr_5 [i_0] [i_0] [i_1] [i_0])))))));
                    var_22 = ((((min((arr_6 [i_2] [i_2] [i_2 - 2]), 1))) > ((-(arr_6 [i_2] [i_2] [i_2 - 1])))));
                }
            }
        }
    }
    #pragma endscop
}
