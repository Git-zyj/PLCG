/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143829
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143829 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143829
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((((18446744073709551615 ? 1257535202 : 216)) ^ (((55 ? var_4 : 32767))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 2; i_2 < 18;i_2 += 1)
                {
                    var_17 ^= (3037432093 * var_13);
                    arr_6 [i_0] [i_0] [i_0] = ((var_3 * (-20270 ^ 216)));
                }
                /* vectorizable */
                for (int i_3 = 2; i_3 < 15;i_3 += 1)
                {
                    arr_10 [i_0] [i_1] [i_0] = (arr_1 [i_0 + 1]);
                    var_18 = var_0;
                }
                for (int i_4 = 2; i_4 < 18;i_4 += 1)
                {
                    arr_14 [i_1] [i_1] [i_1] [i_0] = (max(200, -var_1));
                    var_19 = ((32767 ? 1 : var_5));
                }
                arr_15 [i_0] [10] [i_1] &= (min((9223372036854775807 == 192), (((arr_3 [i_0 - 1]) ? 759074083 : 63))));
            }
        }
    }
    var_20 ^= ((((max(((64 ? 187 : var_15)), ((min(var_14, 1)))))) >= var_0));
    var_21 = (((((((min(var_7, var_4))) ? var_9 : ((220 ? var_7 : 12068))))) ? (max((min(var_10, var_11)), (~var_8))) : (((2309116878092460725 ? 793025989 : -1621)))));
    #pragma endscop
}
