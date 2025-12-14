/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110465
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110465 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110465
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 19;i_2 += 1)
            {
                {
                    arr_9 [i_0] = (((5808719356045617477 ^ 12638024717663934126) != ((max((39 == 5808719356045617466), var_7)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_13 = ((((((12638024717663934140 >> (12638024717663934149 - 12638024717663934114)) > (~28186))))));
                                var_14 = 14516076542568993694;
                            }
                        }
                    }
                }
            }
        }
    }
    var_15 = 5808719356045617477;
    var_16 = var_2;
    var_17 = ((~((-(1 && 5808719356045617488)))));
    #pragma endscop
}
