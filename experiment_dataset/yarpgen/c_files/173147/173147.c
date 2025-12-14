/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173147
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173147 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173147
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((!(((~-9071002887645736982) >= (min(-238657088, 9071002887645736993))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                {
                    var_18 *= ((((min((arr_1 [i_1]), 1))) >> (((((-2147483647 - 1) - -2147483617)) + 31))));
                    arr_9 [i_0] [i_2] [i_0] = (((((1 >> (14011258290412729194 - 14011258290412729170)))) ? (~var_8) : ((((min((arr_8 [i_0]), var_12))) ? (min(135, (arr_8 [i_0]))) : var_9))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [i_1] [i_4] [i_3] [i_4] = (((((arr_0 [i_0 + 1]) ? (arr_0 [i_0 + 1]) : 18446744073709551615)) > (min(1703257730, 15))));
                                arr_17 [i_0] [i_1] [i_0] [i_3] [i_4] = 10992638755072553522;
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 = (min(var_19, var_9));
    #pragma endscop
}
