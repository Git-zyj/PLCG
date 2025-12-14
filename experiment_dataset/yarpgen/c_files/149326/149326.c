/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149326
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149326 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149326
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_16 = (arr_1 [1]);
                var_17 -= (min((((arr_0 [i_0 + 1]) ^ (arr_0 [i_0 + 2]))), (min(var_8, (arr_1 [i_0 + 1])))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        {
                            arr_9 [16] [i_1] [i_2] [i_3] [i_3] = ((((7245 << (1678056526 - 1678056516))) == ((58291 ? 1678056510 : 1678056508))));
                            var_18 &= ((((((-1678056508 & 0) - (((arr_8 [i_0 + 2] [i_2] [i_2] [i_1] [i_1] [i_0]) + var_7))))) ? ((58291 ? (min((arr_4 [i_0] [i_1] [i_2] [i_3]), var_9)) : 14)) : ((((var_1 && (arr_6 [i_0 - 2] [i_0] [i_0 - 1])))))));
                            arr_10 [i_0] [3] [i_0] = (arr_1 [i_0]);
                        }
                    }
                }
            }
        }
    }
    var_19 *= (((!-1678056508) <= ((~(15 % var_8)))));
    var_20 = (~31);
    var_21 = ((((((var_9 * var_9) + var_8))) ? var_3 : var_5));
    #pragma endscop
}
