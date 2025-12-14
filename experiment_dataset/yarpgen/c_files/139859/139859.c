/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139859
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139859 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139859
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] [i_1] = ((((226955426 ? 32757 : 54))) ? 201 : 32767);
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        {
                            arr_13 [i_0] [i_1] [i_1] [i_0] [i_3] [i_1] = (((-43 % var_19) ? (arr_7 [i_2 - 1] [i_2 - 1] [i_1] [i_0]) : (~0)));
                            arr_14 [i_2] [i_1] [i_1] [i_1] [i_1] [i_1] = ((((min(var_8, var_3))) ? ((4294967295 ? 32753 : 8345)) : ((((((arr_11 [i_2 + 2] [i_1] [i_1] [i_1]) >= 116))) | (((arr_9 [i_0] [i_1] [i_1] [i_1] [i_0] [i_0]) + (arr_2 [i_1])))))));
                            arr_15 [i_0] [i_1] [i_1] [i_0] = ((184 ? 30823 : 54));
                        }
                    }
                }
            }
        }
    }
    var_20 ^= ((((((((16 ? 81 : 3520992336))) ? (1294789022 || 3) : ((220 ? 81 : 215))))) ? var_13 : ((24 ? ((33554431 ? 757273435 : 224)) : var_4))));
    var_21 ^= (-(var_5 || var_13));
    #pragma endscop
}
