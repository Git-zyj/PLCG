/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111701
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111701 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111701
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 2438252885047059682;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] [i_1] = ((((((((arr_1 [i_0]) ? (arr_2 [i_0] [i_0]) : -16))) ? (~168815048) : (2084777873 | 6695166426451144904))) | 10743600081237241815));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 8;i_3 += 1)
                    {
                        {

                            for (int i_4 = 3; i_4 < 9;i_4 += 1)
                            {
                                var_11 *= -32767;
                                var_12 *= 1090921693184;
                                var_13 += (((~-6172562717875353394) ? ((2438252885047059695 ? (arr_3 [i_3 - 3] [i_4 - 2] [i_2]) : 1)) : (((((arr_3 [i_3 - 2] [i_4 - 2] [i_0]) || 65528))))));
                                arr_14 [i_1] [i_0] [0] = (((arr_7 [i_4 + 1] [i_4 + 2] [i_3 - 4] [i_1 - 1]) || (213623174 || 1743399856)));
                                var_14 |= (arr_11 [i_0] [i_3] [i_2] [i_3] [i_4]);
                            }
                            var_15 *= ((65528 || ((max(2438252885047059682, 2084777867)))));
                            var_16 = ((((arr_5 [i_1 + 1] [i_3 - 1] [i_3 - 1] [i_1]) ? 2355802161 : 65534)) % (arr_8 [i_1 + 1] [i_3 - 1] [i_1 + 1] [i_3 - 2]));
                        }
                    }
                }
                arr_15 [i_0] [i_1] = (arr_5 [i_0] [i_1] [i_1 + 1] [i_1]);
            }
        }
    }
    #pragma endscop
}
