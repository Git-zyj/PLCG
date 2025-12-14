/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151093
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151093 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151093
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((var_5 || (var_6 / 3685359516)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            {
                var_16 = ((((((min(5, (arr_2 [i_1])))) ? -11088 : var_14))) ? (((24381 && 31820) ? 3888075831 : (max(var_8, 653720003)))) : (((((arr_0 [i_1]) != ((1024 ? 1755244375 : 4294967293)))))));
                arr_7 [i_1] = ((((min((((4294967295 && (arr_3 [i_1])))), (-127 - 1)))) ? ((var_4 ? var_0 : 65535)) : 4294967293));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_17 = 1317;
                                var_18 = -406891465;
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 ^= 4;
    var_20 = ((((((42369 || var_7) ? (!3) : ((3729592750 ? 5 : var_0))))) ? ((var_11 | (((30720 ? 16376 : var_6))))) : (max(var_13, (!4294967286)))));
    var_21 = (max(var_21, (((((167480046 || (((var_5 ? var_5 : var_7))))) ? 81 : (((-8742 || (-4 && 16368)))))))));
    #pragma endscop
}
