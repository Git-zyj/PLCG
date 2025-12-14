/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110036
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110036 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110036
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 2724036976235169307;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_16 [19] [19] = ((~(min(var_6, 8603763776066914491))));
                                arr_17 [14] [i_1] [i_2] [i_3] [i_4 - 2] = (((var_1 ? 3421360604227718670 : 4155565821799952589)) + var_0);
                                var_14 = (8624404942626900041 / 15623458766619534004);
                                var_15 = 11691567248000020039;
                                var_16 -= (!6981406737723560206);
                            }
                        }
                    }
                    var_17 -= 2724036976235169310;
                    var_18 += 15722707097474382325;
                    arr_18 [i_0] [i_0] [i_0] [i_0] = ((((max(var_4, var_2))) == ((var_8 ? (max(var_8, var_7)) : var_2))));
                }
            }
        }
    }
    var_19 &= var_8;
    #pragma endscop
}
