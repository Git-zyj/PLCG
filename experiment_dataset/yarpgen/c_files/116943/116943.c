/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116943
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116943 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116943
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, (((max(0, 1216507700))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 18;i_3 += 1)
                    {
                        {
                            arr_10 [i_3] [i_1] [14] = ((((min(-1216507689, (5427 / 3)))) ? (((min(var_14, (arr_9 [i_3 + 1] [i_1 + 3] [i_2] [i_3]))))) : (max((var_13 / -5427), (46 / 5133183142683236185)))));
                            var_16 = (~138);
                        }
                    }
                }
                var_17 = (((((max(1, 23245)))) ? var_10 : 531683267));
                var_18 = (((arr_2 [i_1 + 1] [i_1]) ? ((+((((arr_5 [i_0] [i_1 - 1] [i_0] [i_1]) < 4294967288))))) : ((max((arr_8 [i_1] [i_1] [i_1 + 1] [i_1 + 3] [i_1 + 3] [i_1]), (arr_8 [i_1] [i_1] [i_1] [i_1 + 1] [i_1 + 1] [i_1 + 3]))))));
            }
        }
    }
    var_19 = (var_2 ? var_1 : ((var_6 ? var_10 : ((var_1 ? -5427 : var_8)))));
    var_20 = (((((1635369512 ? 255 : 255))) > (~var_7)));
    var_21 = (max(var_21, -5133183142683236185));
    #pragma endscop
}
