/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165152
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165152 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165152
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_4;
    var_21 ^= (((((-(!283726776524341248)))) ? var_1 : (((((var_11 ? var_13 : -32047))) ? var_8 : -877844510))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_0] = ((((((-32047 >= (arr_0 [i_0] [i_0]))))) <= 1));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        {
                            var_22 &= (arr_9 [i_0] [i_1] [i_2] [i_0]);
                            var_23 = var_2;
                            var_24 = (min(var_24, (((((!(var_18 > 15058403058188854546))) ? (!5226521120947933884) : var_10)))));
                            var_25 = ((((((max(1463957052, 37915))))) >= 31));
                        }
                    }
                }
                arr_12 [i_1] [9] = -34;
            }
        }
    }
    var_26 = -1824784068470449566;
    #pragma endscop
}
