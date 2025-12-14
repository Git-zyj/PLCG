/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116522
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116522 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116522
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 &= ((3294138915 ? -1108 : (((((-6078054023767196201 ? 1667112784 : var_6))) ? (var_5 && 0) : ((2128010130 ? var_12 : 46366))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 24;i_1 += 1)
        {
            {
                var_20 = 4115433471;
                var_21 = (arr_3 [i_0] [i_0] [1]);

                /* vectorizable */
                for (int i_2 = 1; i_2 < 24;i_2 += 1)
                {
                    var_22 += arr_3 [i_2 + 1] [i_1] [i_0];
                    arr_6 [i_2] [i_2] [i_2] [i_0] = var_18;
                }
                for (int i_3 = 1; i_3 < 24;i_3 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_4 = 2; i_4 < 24;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 22;i_5 += 1)
                        {
                            {
                                var_23 = (min(-6078054023767196205, ((11 ? (arr_8 [i_4 - 1] [i_3] [i_5 + 1] [i_3 - 1]) : 1))));
                                var_24 = var_16;
                                var_25 += (((arr_1 [i_1 - 3]) ? 6078054023767196207 : (((arr_11 [i_0 - 1] [8] [i_3 + 1] [i_3] [i_0] [i_0] [i_0]) ? (arr_3 [i_0 + 1] [i_3 - 1] [i_3 - 1]) : (arr_11 [i_0 - 2] [i_0] [i_0] [i_0] [i_0] [i_0 + 1] [i_0 + 1])))));
                            }
                        }
                    }
                    arr_13 [i_0] [i_0] [i_3] = 55343;
                }
            }
        }
    }
    var_26 *= var_17;
    #pragma endscop
}
