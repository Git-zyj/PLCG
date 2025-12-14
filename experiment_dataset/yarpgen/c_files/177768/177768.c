/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177768
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177768 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177768
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_19 = (((((arr_0 [i_0 - 3]) + 2147483647)) << ((((((((arr_8 [i_0] [i_1] [i_3]) + 2147483647)) << (9223372036854775792 - 9223372036854775792))) > (((arr_4 [i_0] [i_2] [i_3]) ? var_7 : (arr_3 [i_1]))))))));
                            var_20 = var_11;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 18;i_5 += 1)
                    {
                        {
                            arr_13 [i_0 + 1] [i_1] [i_4] [i_5] = (min((arr_3 [i_0 - 1]), -9223372036854775792));
                            var_21 = (max(var_21, (((~((0 ? ((65535 << (-9223372036854775792 + 9223372036854775807))) : 1)))))));
                            arr_14 [i_0] [i_1] [i_4] [i_5] [i_5] = 25;
                            var_22 -= ((1 ? ((9308287227028253330 ? 122 : 28511)) : (arr_9 [i_4] [i_1] [i_0])));
                        }
                    }
                }
            }
        }
    }
    var_23 = (max(var_23, 6));
    var_24 = (var_14 << (122 - 121));
    var_25 = ((95 ? -9223372036854775775 : 9138456846681298273));
    #pragma endscop
}
