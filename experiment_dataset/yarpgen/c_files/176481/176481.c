/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176481
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176481 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176481
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_20 = (min(var_16, (max(11034444483593559888, ((210 ? var_13 : var_2))))));
                            var_21 = (((((-(arr_6 [i_0] [i_0] [i_0])))) << ((((~((4294967286 ? 77 : var_3)))) + 114))));
                        }
                    }
                }
                var_22 = ((!((-19955 || ((max(var_17, (arr_8 [i_0]))))))));
            }
        }
    }
    #pragma endscop
}
