/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119060
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_20 *= ((((((min(var_14, -32))) > (max((arr_0 [i_0] [i_0]), 11)))) ? (((max(var_2, 1)))) : ((max(1, 1)))));
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    {
                        var_21 += (arr_2 [i_0]);
                        var_22 ^= 4294967295;
                        var_23 = (max(var_23, (((((max(((-1 ? 108 : 10971)), (max(843171326, 8))))) ? (min(((~(arr_0 [i_2] [10]))), (63 ^ var_17))) : ((~(max(50, (-2147483647 - 1))))))))));
                        var_24 = ((((!(((0 << (115 - 111)))))) ? ((min((arr_12 [i_0] [i_1] [i_2] [i_3]), -1365896327816658655))) : ((min((((arr_4 [i_3] [i_1] [i_3]) ? 7213482369014913338 : 21)), var_1)))));
                        arr_14 [i_0] [i_0] [i_2] [i_3] = 54343;
                    }
                }
            }
        }
    }
    for (int i_4 = 3; i_4 < 15;i_4 += 1) /* same iter space */
    {
        var_25 = (min(51193, (((!((min((arr_2 [i_4 - 2]), (arr_8 [i_4 - 2])))))))));
        var_26 = (max((arr_7 [7] [i_4] [4]), (((!((((arr_11 [i_4]) ? 1401114570 : 65535))))))));
    }
    for (int i_5 = 3; i_5 < 15;i_5 += 1) /* same iter space */
    {
        var_27 = (arr_7 [i_5] [i_5] [i_5]);
        var_28 = (min(var_28, (arr_17 [i_5 - 3] [i_5])));
    }
    var_29 = (max((129 && 15), ((-1365896327816658655 ? -7213482369014913327 : 65535))));
    var_30 = var_15;
    var_31 |= var_14;
    #pragma endscop
}
