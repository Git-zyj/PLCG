/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132099
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132099 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132099
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 13698717099399717391;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_15 &= ((((!(arr_0 [i_0] [i_0]))) ? var_9 : 986026402));
                    var_16 = (arr_1 [21] [i_2]);
                    arr_7 [5] [i_0] [i_0] = ((782362693 << (-529648145298911524 + 529648145298911538)));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_17 += (arr_10 [i_1] [i_4 - 1] [i_4] [i_3 - 2] [i_1]);
                                var_18 = (min(var_18, ((max(6, ((-(min(-529648145298911524, 248)))))))));
                                arr_12 [10] [i_0] [10] [10] [i_4] |= ((52442 ? (!52440) : (max(1, 18446744073709551615))));
                            }
                        }
                    }
                    arr_13 [8] [0] [i_2] = 30;
                }
            }
        }
    }
    #pragma endscop
}
