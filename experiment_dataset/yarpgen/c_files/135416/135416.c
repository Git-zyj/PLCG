/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135416
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((min((((81 << (458205034 - 458205031)))), var_5))) ? (min(var_2, (min(1, var_9)))) : (--6028924722900540674)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_1] = (-9136814732523122773 % (arr_2 [i_1] [11]));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {
                            arr_10 [7] [i_0] [i_1] [i_1] [i_0] = ((-(min(1, 2773550820))));
                            var_13 -= 0;
                        }
                    }
                }
                arr_11 [i_1] = (((arr_0 [i_0] [i_1]) ? ((var_6 ? (arr_2 [i_1] [i_0]) : (arr_2 [i_0] [i_1]))) : ((((4728827680797346891 ? var_11 : var_4)) >> (((arr_1 [1]) - 2189092032))))));
                arr_12 [4] [4] |= ((!(((184 ? 1206 : 1599890456714554480)))));
            }
        }
    }
    var_14 = var_8;
    #pragma endscop
}
