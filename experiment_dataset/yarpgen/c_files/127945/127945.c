/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127945
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127945 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127945
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_1] [i_1] = (max((~26677), (((min(4294967295, 6124411629460578082)) << (0 != 4128905436)))));
                arr_8 [i_1] = ((((min(7879703729218525695, 536869888))) ? (((arr_4 [i_0] [i_0] [i_0]) ? 16 : (arr_4 [i_1] [i_1] [i_0]))) : 52669));
            }
        }
    }
    var_17 = var_13;
    var_18 = (min(var_15, var_11));
    var_19 ^= ((((max(var_15, -94))) ? 536869907 : var_14));
    /* LoopNest 3 */
    for (int i_2 = 2; i_2 < 9;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 8;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                {
                    var_20 ^= (846670935 & var_14);
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 9;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 10;i_6 += 1)
                        {
                            {
                                var_21 = (arr_6 [i_2]);
                                arr_24 [i_6] [i_5] [i_4] [i_2] = (((((18446744073709551615 ? 2253945074476951891 : ((((arr_18 [i_2] [i_3] [i_4] [i_4] [i_5] [i_6]) ? (arr_4 [i_3] [i_4] [i_5]) : (arr_21 [i_3] [i_4] [i_6]))))))) && var_12));
                                var_22 = -5190;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
