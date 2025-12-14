/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169247
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] [i_0] = (((((arr_0 [i_0] [i_0]) ^ ((min(var_3, 8191)))))) ? ((max(((max(255, 7))), (max((arr_4 [i_1] [i_0] [i_0]), 226))))) : -57344);
                var_11 ^= 35600;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {
                            arr_10 [i_3] [i_0] = (min((max((arr_8 [i_0] [i_0] [i_0] [i_0] [i_0]), ((min(255, 8169))))), (((164 ? 26376 : (arr_6 [i_0] [i_1] [i_2]))))));
                            arr_11 [i_0] [i_0] [i_0] [i_0] = (((((-(arr_8 [i_0] [i_0] [i_0] [i_0] [i_0])))) ? (((max((min((arr_4 [i_3] [i_0] [i_1]), (arr_7 [i_0] [i_1] [i_2] [i_0]))), 8159)))) : ((795301795 ? 12 : 1))));
                            arr_12 [i_3] [i_0] [i_0] [i_0] = (min(15902, (arr_9 [i_0] [i_0] [i_0] [i_3] [i_0])));
                            var_12 *= (((((-(min(7, 1680910401))))) ? (min(1, (arr_1 [i_1]))) : (max((arr_3 [i_1] [i_2] [i_3]), (min(-633156716, 62159))))));
                        }
                    }
                }
            }
        }
    }
    var_13 = (min(var_13, 69));
    var_14 = ((47448 ? -7 : ((35598 ? 9223372036854775807 : (min(60218, 9223372036854775807))))));
    var_15 *= var_2;
    #pragma endscop
}
