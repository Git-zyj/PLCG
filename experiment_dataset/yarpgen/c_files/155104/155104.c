/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155104
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155104 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155104
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((!(var_6 >= var_6))));
    var_11 = (var_4 || var_8);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_12 = (-424897473 == var_2);
                arr_6 [i_0] [i_1] [i_1] = var_5;
            }
        }
    }
    var_13 -= (min((min((!-996333103302802767), (min(var_1, var_2)))), ((((var_1 & 4294967295) == var_8)))));
    var_14 = (max(var_14, var_7));
    #pragma endscop
}
