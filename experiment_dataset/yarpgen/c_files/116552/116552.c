/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116552
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116552 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116552
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((-32767 - 1) ? -var_1 : (((1338936089 + -1338936079) | var_10)));
    var_13 += ((((var_5 ? 1338936079 : ((42476 ? 23068 : 18760))))) ? ((var_0 ? var_10 : ((1338936075 ? 73 : -108)))) : 104);

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_14 = (-2147483647 - 1);
        var_15 += (((((!46770) - 46776)) % -var_5));
        var_16 = (min(var_16, ((((((-32750 ? ((var_2 ? -1338936089 : var_2)) : (-116 + var_8)))) && (!-1206440973))))));
        arr_3 [i_0] [i_0] = 27478;
        var_17 = (min(var_17, (var_2 - -25818)));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        arr_6 [i_1] [i_1] = ((max(var_2, 1338936078)));
        var_18 = -1338936089;

        /* vectorizable */
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    {
                        var_19 = (max(var_19, (((var_3 ? var_9 : (~var_6))))));
                        var_20 += (((1338936078 - var_10) && (((var_9 ? 25763 : 107)))));
                        arr_15 [3] [i_3] [2] = (232 ^ var_8);
                    }
                }
            }
            var_21 = (104 << 24);
            arr_16 [i_1] [i_1] = (~65535);
        }
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 20;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 20;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 20;i_7 += 1)
                {
                    {
                        arr_25 [i_7] [i_5] [i_5] [i_1] = (!-var_7);
                        arr_26 [i_5] [i_5] = (((23356 ? 101 : var_5)) | ((var_6 ? 25747 : -1338936089)));
                        arr_27 [i_1] [i_5] [i_5] [i_1] = 5852892062431678394;
                    }
                }
            }
        }
    }
    #pragma endscop
}
