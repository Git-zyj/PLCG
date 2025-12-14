/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11615
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11615 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11615
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_10 = (max((max((arr_6 [i_0] [i_1] [i_1]), (arr_4 [i_0] [12] [i_2]))), ((max(var_7, ((var_8 ? (arr_9 [i_0] [i_0] [i_0] [i_0]) : 38933)))))));
                    var_11 = (((arr_2 [10] [i_1]) ? ((min(var_1, ((min(var_4, var_5)))))) : (((arr_4 [i_0] [i_1] [i_2]) ? 38933 : (arr_4 [i_0] [i_0] [i_0])))));
                    arr_10 [i_1] [i_1] = (arr_5 [11]);
                }
            }
        }
    }
    var_12 = (max(((26602 ? var_1 : (min(var_9, var_1)))), ((min((((var_4 ? 26602 : var_0))), ((var_9 ? var_8 : var_9)))))));
    var_13 = (max(var_13, (((((((max(26603, 38932))) ? 38927 : 38933))) ? var_7 : (max(((var_2 ? var_0 : var_6)), ((min(38933, 38916)))))))));
    var_14 = var_0;
    #pragma endscop
}
