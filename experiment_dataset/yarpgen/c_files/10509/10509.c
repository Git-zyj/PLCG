/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10509
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_15 = (max(var_15, (arr_3 [0] [i_1])));
                    var_16 = (min((min(8755268934513844559, ((((arr_2 [i_1 + 2]) ? 1 : 1302373115))))), var_9));
                    var_17 *= var_7;
                }
            }
        }
    }
    var_18 = ((((((((0 ? 9691475139195707029 : var_5))) ? (8755268934513844543 > 9691475139195707079) : var_11))) ? 1 : ((-(!var_10)))));
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 22;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 23;i_4 += 1)
        {
            {
                var_19 = (min(var_19, (((!(((((min(9691475139195707057, 1))) ? (max((arr_12 [i_4]), -3896066625074893301)) : (arr_8 [i_3] [i_3 + 1])))))))));
                var_20 ^= (min(var_3, 9017154026746641089));
            }
        }
    }
    var_21 = ((var_4 ? var_1 : var_2));
    #pragma endscop
}
