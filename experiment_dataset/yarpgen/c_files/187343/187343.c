/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187343
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187343 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187343
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 3670016;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_12 ^= (arr_4 [i_0] [i_1] [i_0]);
                    var_13 = 14585728209413991211;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_14 = -9184061531025113715;
                                var_15 = -13;
                                var_16 = (-103290865 ? 1536345206 : ((((arr_4 [i_1] [i_2] [i_1]) || (var_2 - 2758622089)))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_17 = (min(var_17, (((~(min(var_3, var_2)))))));
    #pragma endscop
}
