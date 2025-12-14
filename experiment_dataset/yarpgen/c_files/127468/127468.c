/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127468
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127468 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127468
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((min((min(-31600, var_3)), (-127 - 1))) & 896));
    var_18 = (min(var_18, -1361557773));
    var_19 ^= ((!((max(var_15, (2701349621 & var_12))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 11;i_2 += 1)
            {
                {
                    var_20 = ((((((((min(var_11, (arr_6 [i_0] [i_0] [i_0])))) <= (((!(arr_2 [i_2 - 3])))))))) <= (min(-var_16, (((arr_2 [i_0]) & (arr_7 [i_0] [i_0] [i_0])))))));
                    var_21 = (min(var_21, (((-((-(max(480, 1593617674)))))))));
                    var_22 = (min(((var_15 & (arr_0 [i_1 - 1]))), var_9));
                }
            }
        }
    }
    #pragma endscop
}
