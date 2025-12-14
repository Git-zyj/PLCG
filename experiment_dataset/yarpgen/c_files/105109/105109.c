/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105109
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105109 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105109
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_13 = (max(((+(max((arr_2 [i_0]), 3595276541)))), (max(((min((arr_0 [14]), 4233479758))), (((arr_3 [i_0] [i_0]) ? -9036043057538524136 : (arr_2 [i_0])))))));
                var_14 |= (((((820 ? 6953316219612149386 : -4060))) ? (((arr_3 [i_0 - 1] [i_0 + 3]) % (arr_3 [i_0 + 4] [i_0 - 1]))) : ((((((((arr_1 [i_0]) ? (arr_2 [4]) : 2102121520))) && (arr_0 [4])))))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 15;i_3 += 1)
                    {
                        {
                            arr_9 [i_0] [i_2 + 1] [i_1] [i_0] = max(699690768, ((((arr_8 [i_0 + 1] [17] [17] [i_2] [i_0 + 1] [i_3]) ? 1754170680 : 699690766))));
                            var_15 = (min((min(((~(arr_2 [i_0]))), ((~(arr_2 [i_0]))))), (arr_2 [i_0])));
                            var_16 = 699690771;
                            var_17 = (min(var_17, (min(((((-22177 ? (arr_7 [i_2] [i_3]) : 699690776)))), (max(22192, 4667739363426080822))))));
                            arr_10 [i_0] [i_0] [i_0] [i_0] [i_0 - 1] [i_0 + 2] = 1733599221;
                        }
                    }
                }
            }
        }
    }
    var_18 = var_11;
    var_19 = 3064633206;
    #pragma endscop
}
