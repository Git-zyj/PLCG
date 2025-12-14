/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181749
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181749 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181749
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 += -32237;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_21 = ((12606 ? var_4 : (((((arr_1 [i_0 - 3] [i_1 + 1]) <= (arr_1 [i_0 - 3] [i_2 - 2])))))));
                            var_22 = (min((arr_1 [i_1 - 3] [i_1 - 3]), ((((arr_5 [i_2 + 1] [i_2 - 1] [i_2]) <= (arr_5 [i_0 - 2] [i_2 - 1] [i_2 + 1]))))));
                            var_23 = arr_3 [i_0 - 2];
                        }
                    }
                }
                var_24 = (min(((((arr_8 [i_1 + 3] [i_0 - 1]) > (arr_8 [i_1 + 3] [i_0 - 2])))), (min((arr_8 [i_1 + 2] [i_0 - 2]), (arr_8 [i_1 - 3] [i_0 - 2])))));
                var_25 = 4294967295;
                var_26 = (min((max(-175063241, ((-5483 ? (arr_0 [i_0 - 3]) : 5485)))), (((var_1 ? ((min(-38, -5483))) : ((~(arr_9 [i_0]))))))));
            }
        }
    }
    #pragma endscop
}
