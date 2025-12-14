/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105502
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105502 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105502
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(((min(var_9, var_6))), var_3));
    var_11 = (max((1 >> 1), (max((min(18437736874454810624, 1)), ((max(42, var_6)))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 1; i_2 < 14;i_2 += 1)
                {
                    var_12 = (~var_1);
                    var_13 &= ((arr_8 [i_0 + 1] [i_0] [0] [i_2 + 1]) != 1);
                }
                for (int i_3 = 2; i_3 < 14;i_3 += 1)
                {
                    var_14 = (max(((max(-93, 1415350812777146095))), (min((min(var_0, 1)), var_0))));
                    arr_11 [i_0 + 1] = ((~((~(arr_5 [i_0 - 1] [i_0 + 1])))));
                    var_15 = ((-(max(-var_2, (max(var_9, 1))))));
                }
                arr_12 [i_0] [i_0] [i_1 + 1] = (((-(max(var_4, 17794693292705334644)))));
            }
        }
    }
    #pragma endscop
}
