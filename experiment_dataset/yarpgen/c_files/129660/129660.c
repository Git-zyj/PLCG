/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129660
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129660 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129660
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_18 = (min(var_18, (((((((min(17158706431146505658, 39287)) & -148349629))) || ((min(1031044218, (arr_6 [i_0])))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_13 [i_2] [i_2] [i_2] [i_2] = (~var_13);
                                var_19 *= ((!((max(((((arr_11 [i_1] [i_1] [i_1] [i_0] [i_4] [i_3]) | (arr_4 [i_3] [i_2] [i_0])))), (arr_8 [i_0] [i_1]))))));
                            }
                        }
                    }
                    var_20 = (max((max((max(var_14, 16253556595250188601)), var_0)), ((((min((arr_9 [i_0] [i_1] [i_1] [i_1]), -110509746)) & ((max(var_14, var_16))))))));
                    var_21 = (!1288037642563045976);
                }
            }
        }
    }
    var_22 |= (max(((min((!var_6), (148349653 || 48)))), (~var_7)));
    #pragma endscop
}
