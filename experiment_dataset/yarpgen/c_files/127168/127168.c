/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127168
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127168 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127168
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (!var_2);
    var_19 = (max(var_19, (max((((var_15 + 2147483647) >> (67108860 && var_15))), ((33331 ? 27 : var_10))))));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_20 = (max(var_20, ((min((((arr_1 [i_0]) ^ 67108868)), (!var_15))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 18;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_21 = (min(var_21, ((max((arr_12 [i_4] [i_1] [9] [i_3] [9] [i_3]), ((~((var_10 ? 67108860 : 244)))))))));
                                var_22 = (min((max(448, (max(26365, (arr_12 [i_0] [i_0] [i_2] [i_3] [i_4] [9]))))), (!var_7)));
                            }
                        }
                    }
                    arr_13 [i_0] [i_0] [i_0] = ((~(67108887 ^ -20829)));
                    var_23 = (max(var_23, ((max(111, 67108868)))));
                    var_24 = (max(var_24, (((((32767 ? 3206384891504442719 : 32768)) ^ (((min(29194, 46883)))))))));
                }
            }
        }
    }
    var_25 = (max(var_10, 3025638203));
    var_26 = var_1;
    #pragma endscop
}
