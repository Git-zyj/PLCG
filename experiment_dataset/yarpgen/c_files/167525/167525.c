/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167525
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167525 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167525
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(((max(18356528897498593159, var_8))), (((!((max(18446744073709551604, 90215176210958456))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_12 *= ((var_10 > (var_3 <= var_7)));
                var_13 = var_8;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_14 = (((((2412632084192817866 + 2147483647) >> ((((-452659232 ^ (arr_8 [i_0] [i_1]))) + 452684568))))) ? ((-((13516968763185010016 / (arr_8 [i_0] [i_1]))))) : var_4);
                            var_15 = ((((!(arr_9 [i_0] [2] [2] [i_2]))) ? (~9223372036854775807) : (arr_9 [i_0] [i_1] [i_2] [i_3])));
                            var_16 -= var_5;
                            var_17 = (min(-117, (min(var_8, (arr_2 [i_0] [i_0])))));
                        }
                    }
                }
            }
        }
    }
    var_18 = ((((max(var_1, ((var_0 ? var_6 : (-9223372036854775807 - 1)))))) <= ((((max(var_3, var_4))) ? 18446744073709551615 : (!var_2)))));
    #pragma endscop
}
