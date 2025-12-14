/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142250
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142250 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142250
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max((((22614 * -88) ? (9029848804153701551 << 1) : (~18013186572888976516))), -2119110246));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                var_17 = (min(var_17, ((((((-(arr_3 [i_0 + 2])))) ? ((((2218536513648347076 >= 1) >> (((~2061235575) - 2233731710))))) : (((!15643895339826058732) + 12521207848738524785)))))));
                var_18 ^= -25773;
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 9;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {
                            var_19 = ((-(~var_14)));
                            var_20 = (min(-var_3, ((3403031422908905863 ? -1 : 127))));
                            var_21 = (max(var_21, (-127 - 1)));
                        }
                    }
                }
                arr_8 [i_0] [i_1] [i_1] = min(1, ((666664877580990429 ? (!768) : (((var_6 + 2147483647) >> (arr_1 [i_1]))))));
            }
        }
    }
    var_22 = (max(var_22, (!138)));
    #pragma endscop
}
