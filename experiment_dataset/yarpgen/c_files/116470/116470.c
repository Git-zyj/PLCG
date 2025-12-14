/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116470
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116470 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116470
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((var_4 && (20 & 85))));
    var_12 ^= 31;

    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        var_13 = 248;

        /* vectorizable */
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            var_14 = 2240495957782936969;
            arr_5 [13] [i_0] [i_0] = (~var_9);
            var_15 *= 2240495957782936997;
            /* LoopNest 2 */
            for (int i_2 = 2; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    {
                        arr_12 [i_1 + 4] [i_1 + 4] [i_2 - 1] [i_3] [i_3] = (((((arr_10 [i_2 - 2] [0] [i_0 + 1] [i_1 + 3]) + 2147483647)) << (((arr_11 [i_2 - 1] [8] [i_0 - 1] [i_1 + 1]) - 2310250793))));
                        var_16 = -18;
                    }
                }
            }
        }
        for (int i_4 = 0; i_4 < 17;i_4 += 1)
        {
            var_17 = (max(var_17, ((max(((max(-68, 30))), 18446744073709551613)))));
            arr_16 [i_0] [i_4] = var_1;
            var_18 = (max(((211 << (((arr_1 [i_0 - 2]) + 24813)))), ((var_1 ? 9 : 63))));
            arr_17 [i_4] = ((min(244, ((((arr_15 [i_4]) || 138))))));
            /* LoopNest 2 */
            for (int i_5 = 2; i_5 < 15;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 17;i_6 += 1)
                {
                    {
                        var_19 = (max(var_19, ((((((-441670918 == 238) || ((max(-8, 29202))))) ? (max((arr_9 [i_0 - 1] [i_5 - 1] [i_6]), 18446744073709551605)) : (~118))))));
                        var_20 -= (((((29 ? (((arr_13 [i_0] [i_4]) ? (-9223372036854775807 - 1) : 224)) : 2908186593))) ? ((((arr_21 [i_0 - 1] [i_0 + 1] [i_6] [i_5 + 2]) ? (11353574168038486423 != 32738) : ((max((arr_19 [13] [i_5] [i_6]), 28)))))) : (((((16206248115926614634 ^ (arr_6 [11])))) ? ((32761 ? (arr_1 [i_0 - 2]) : var_8)) : -7))));
                        var_21 = (max(596775058, 18446744073709551613));
                    }
                }
            }
        }
        var_22 = (max(var_22, (((5289266828752587326 != (arr_10 [i_0 + 1] [i_0 - 1] [i_0] [i_0 + 1]))))));
    }
    #pragma endscop
}
