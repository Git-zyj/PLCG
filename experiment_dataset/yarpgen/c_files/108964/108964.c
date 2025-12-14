/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108964
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108964 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108964
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_5;
    var_14 = ((var_5 ? ((((-625794773 ? var_7 : 625794781)) - -625794784)) : ((~(!625794776)))));
    var_15 = ((-(var_7 == var_9)));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_16 = var_8;
                    var_17 = (min((((~((var_9 >> (((((-9223372036854775807 - 1) - -9223372036854775788)) + 27))))))), var_10));
                    arr_6 [i_2] [i_1] [i_1] [i_0] = ((max(var_1, 17269)) + (min((max(var_7, 7933054860635095899)), (min(var_8, -625794784)))));
                }
            }
        }
    }
    #pragma endscop
}
