/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128621
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128621 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128621
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 += -9104575134055072662;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_17 = ((0 ? (max((max(3670661813563657062, -3670661813563657063)), (226 > 22025))) : (((2 ? 2 : 1148795499)))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 8;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_18 = 226;
                                arr_15 [i_3] [i_3] [i_3] [i_0] [i_3] [i_3] [i_0] = (!2643);
                            }
                        }
                    }
                }
                var_19 = ((max(1813563897, (min(65530, 1813563897)))));
            }
        }
    }
    var_20 = ((((6 ? 176 : 16582570562386180107))));
    #pragma endscop
}
