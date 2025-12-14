/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173854
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173854 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173854
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((var_13 ^ var_7) | ((max(var_4, var_2))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {

                for (int i_2 = 4; i_2 < 14;i_2 += 1)
                {
                    var_18 = (min(var_18, ((max((arr_0 [i_2]), (((var_0 - (-839833424780638107 | 839833424780638113)))))))));
                    arr_8 [i_0] [i_0] [i_2 - 2] [i_0] = -839833424780638102;
                    var_19 = ((~(min(((1 * (arr_0 [i_0]))), var_8))));
                    var_20 = ((1 ? (arr_6 [i_1 - 1] [i_1 - 1] [i_2 - 3]) : (var_3 ^ -49)));
                }
                arr_9 [i_0] [i_1] = var_7;
            }
        }
    }
    #pragma endscop
}
