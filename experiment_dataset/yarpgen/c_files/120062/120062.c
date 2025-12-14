/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120062
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120062 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120062
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_7;
    var_14 &= var_12;
    var_15 = var_9;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_6 [i_1] = ((((((((597436179 || (arr_2 [i_1] [i_1])))) <= (((var_5 >= (arr_5 [i_1] [i_1]))))))) > ((min(0, (!var_7))))));
                    arr_7 [i_1] [i_1] [i_1] = (((!0) ? (!9) : ((-((min((arr_3 [i_0 + 3] [i_1]), var_5)))))));
                    var_16 = 4294967289;
                }
            }
        }
    }
    #pragma endscop
}
