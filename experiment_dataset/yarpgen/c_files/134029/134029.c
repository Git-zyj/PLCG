/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134029
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134029 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134029
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = -400220909;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_13 = (((((-((-400220915 ? (-127 - 1) : (arr_0 [i_0])))))) ? ((-(arr_2 [i_0] [i_1] [i_1]))) : var_4));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            arr_8 [i_0] [i_1] [i_1] [i_3] = ((var_2 ? (((min((arr_0 [i_1]), (arr_0 [i_0]))))) : (arr_5 [i_0] [i_0] [i_0] [i_0])));
                            var_14 = (((min(1291915666444188966, ((min(0, var_8))))) > ((min((((arr_4 [i_3] [i_1] [i_0]) >> (4294967295 - 4294967271))), ((-(arr_1 [i_0] [i_0]))))))));
                        }
                    }
                }
                arr_9 [i_1] = ((-((max((((arr_0 [i_1]) || (arr_4 [i_1] [i_0] [i_0]))), (arr_4 [i_0] [i_0] [i_1]))))));
                arr_10 [i_0] [i_1] = (arr_6 [i_1] [i_1]);
            }
        }
    }
    #pragma endscop
}
