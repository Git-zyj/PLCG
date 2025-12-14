/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17406
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17406 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17406
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_0;
    var_12 = ((max((min(var_7, -2081222813), -var_6))));
    var_13 = ((-((((min(2027749630, 2081222825))) ? 63 : var_6))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    arr_8 [i_0] [6] [i_2] [i_2] = ((((!(arr_6 [i_2] [i_1])))) >= var_9);
                    arr_9 [i_0] [i_0] [i_1] [i_2] = ((~(1158149545 ^ var_7)));
                    var_14 = ((((((!(!var_1))))) ^ var_10));
                }
            }
        }
    }
    #pragma endscop
}
