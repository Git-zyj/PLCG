/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107111
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107111 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107111
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, (((((max(4294967265, var_8))) > var_5)))));
    var_11 = (((((max(255, 8191)))) & var_3));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_12 = 102;
                    var_13 = -2998997978294249951;
                    var_14 = (max((arr_7 [i_0]), (max((arr_7 [i_0]), (arr_7 [i_0])))));
                }
            }
        }
        var_15 = (min(var_15, ((min((((arr_5 [0] [2]) | (arr_0 [2]))), (((((arr_3 [0]) ? 3480331137 : (arr_5 [i_0] [12]))) % 3399710649164624435)))))));
    }
    var_16 = ((var_3 >= ((((min(2440593891, var_9))) - var_0))));
    var_17 |= var_9;
    #pragma endscop
}
