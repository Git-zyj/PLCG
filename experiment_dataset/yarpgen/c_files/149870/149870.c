/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149870
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149870 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149870
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, ((((var_10 ? (~var_7) : ((var_9 ? var_5 : 7441421754207880269))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_16 = (max(var_16, ((min((((var_8 == ((~(arr_0 [i_2])))))), (max((max(11005322319501671347, 2830059468)), (arr_1 [i_0]))))))));
                    var_17 &= -7441421754207880282;
                }
            }
        }
    }
    #pragma endscop
}
