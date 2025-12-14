/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184686
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184686 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184686
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_19 = 198;
                                var_20 = ((!(arr_1 [i_0 + 1])));
                            }
                        }
                    }
                    var_21 = ((10900448668330998116 * (10900448668330998116 > -3355350111869556833)));
                    var_22 = (arr_4 [i_0] [i_0] [i_0] [13]);
                }
            }
        }
    }
    var_23 = (((var_3 ? 4196851090 : (var_17 != 0))));
    var_24 |= (min(((-((var_15 ? var_18 : var_7)))), var_9));
    var_25 = ((((var_12 <= 14966927720699330594) ? 14843109166910030058 : var_0)) & 3603634906799521557);
    var_26 |= var_17;
    #pragma endscop
}
