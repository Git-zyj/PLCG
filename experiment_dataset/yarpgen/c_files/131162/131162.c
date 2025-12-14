/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131162
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131162 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131162
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, -664));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_11 = 64;
                                arr_11 [i_4] = (max(15177392622803024559, ((max(131584161, 3145728)))));
                                var_12 = (max((max(-748339001959932408, ((min(-623402226, 623402225))))), (max(5483704241998301157, -623402225))));
                                var_13 = 59;
                                arr_12 [i_0] [i_4] [i_2] [7] [i_1] [i_0] [i_3] = (min(65535, 20382));
                            }
                        }
                    }
                    var_14 = -23;
                    var_15 = -85;
                    var_16 = 623402225;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 2; i_5 < 10;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 12;i_6 += 1)
        {
            {

                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    var_17 = (max((max((max(-16, 65533)), (max(-623402215, -623402245)))), 946604067));
                    var_18 = -2038228679;
                }
                var_19 = (min(var_19, 65531));
                var_20 *= (max(108, 4610560118520545280));
            }
        }
    }
    #pragma endscop
}
