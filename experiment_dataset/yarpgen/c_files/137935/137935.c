/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137935
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137935 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137935
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_11 |= (max((arr_0 [9]), (min((arr_0 [i_0]), (arr_0 [i_0])))));
                var_12 *= -32759;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 16;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_1] [i_3] [i_3] = (max(((((var_4 && (arr_9 [i_0]))) ? 39222 : (min(-5562543621557646138, -5562543621557646131)))), var_5));
                            var_13 &= var_6;
                            var_14 ^= ((((((arr_10 [i_3] [i_3 - 1] [i_3] [i_3 + 1]) ? var_3 : (max(var_8, -5562543621557646131))))) ? ((((((arr_5 [i_0]) ? 1049912021 : var_3))))) : ((var_10 ? (-1049912021 / var_0) : var_9))));
                            arr_12 [i_1] [i_1] [i_2] [i_3] [i_2] = (((((((arr_4 [i_1]) ? var_4 : 55)) >> (((var_4 + 81) - 3009425436)))) * ((((min((arr_7 [i_0] [5] [i_2] [9]), (arr_1 [i_3 - 4]))))))));
                        }
                    }
                }
                arr_13 [i_0] [i_1] [i_1] = 8096965710672499640;
                var_15 = (min(var_15, ((min((arr_4 [i_0]), ((1 ? ((max(var_0, 156))) : -1)))))));
            }
        }
    }
    var_16 = (min(var_9, (((8096965710672499664 - var_5) ? (((var_6 ? var_6 : var_0))) : ((-5562543621557646131 ? 4294967295 : -201985419))))));
    #pragma endscop
}
