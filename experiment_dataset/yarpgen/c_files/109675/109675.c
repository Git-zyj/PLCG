/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109675
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109675 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109675
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, ((-(((((min(var_0, var_10)))) - -4))))));
    var_17 = ((+(max((4 || 4294967282), ((var_10 >> (var_6 - 12503316309921668286)))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_1] = (max((((((var_5 ? (arr_4 [i_1]) : (arr_5 [i_1] [i_1])))) ? 4294967288 : (var_13 || 3069589055))), 32766));
                arr_8 [i_0] = (min((arr_0 [i_0] [i_0]), ((32743 ? 6461892780367125760 : 4294967276))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            var_18 = (min(var_18, ((32767 & (max((min(4294967294, 15579520981645020454)), (arr_11 [0] [0] [i_2] [0])))))));
                            arr_14 [8] [i_0] [i_2] [8] = ((((((!((((arr_4 [i_2]) & (arr_9 [i_0])))))))) & (max((max((arr_10 [i_0] [i_0] [i_2] [i_0]), var_8)), ((((arr_2 [7] [i_1]) + var_10)))))));
                            var_19 = (max(var_19, ((min((max(10508665430065632559, (arr_2 [i_2] [i_3]))), (2867223092064531146 & 7))))));
                        }
                    }
                }
            }
        }
    }
    var_20 = -32745;
    #pragma endscop
}
