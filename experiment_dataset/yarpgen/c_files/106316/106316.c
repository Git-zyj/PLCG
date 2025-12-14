/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106316
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106316 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106316
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                {
                    var_18 += (min(((((((var_5 + 2147483647) >> 3))) ? var_13 : (10647 >= 11401417598826136763))), ((((max(var_2, var_13)) > 53062)))));
                    arr_6 [i_0] [i_1] [i_1] [i_0] = ((!((min(((((arr_0 [i_0 + 1]) ? -5895718542374498600 : var_12))), var_17)))));
                    var_19 = ((var_14 | ((((arr_5 [i_1 - 2] [i_2 + 3]) || (arr_2 [i_0 - 1]))))));
                }
            }
        }
    }
    var_20 += (!var_16);
    var_21 = ((((((-20862 ? -20857 : 0)) >= (!var_9))) || var_0));
    var_22 = var_8;
    var_23 = (max(20860, var_13));
    #pragma endscop
}
