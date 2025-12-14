/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166276
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166276 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166276
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((max(var_4, (1555711974874251511 % var_2))) < ((max((((338881372 ? var_6 : var_2))), var_1)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {
                            var_11 = (((!-9223372036854775791) ? ((((((arr_10 [i_0] [0] [i_1] [i_2] [i_0]) % (arr_10 [i_0] [i_1] [12] [i_2] [i_3])))) ? (((var_2 ? 549739036672 : var_8))) : 14248408455095740465)) : -4688));
                            arr_12 [i_0] [i_0] [i_0] [i_0] [2] = 115;
                            var_12 = max((arr_7 [i_0] [i_0] [i_0] [i_0]), ((((((max(-1277, 1)))) > ((-8224040419909901041 ? 9223372036854775774 : -9223372036854775775))))));
                            var_13 = arr_8 [i_1];
                        }
                    }
                }
                var_14 = (max(4161695136, ((-9223372036854775775 ? -6053784285250669299 : -1))));
            }
        }
    }
    #pragma endscop
}
