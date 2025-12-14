/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154844
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154844 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154844
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((((~var_1) ? var_9 : var_8)) ^ 32548));
    var_17 = (min(-32549, -32549));
    var_18 ^= (min((0 / 19602), var_7));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_19 = (min(((~(max(3407951718126397847, 32548)))), 65535));
        arr_2 [i_0] [i_0] = 0;

        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            arr_6 [i_1 - 2] [i_1] [i_1] = (((((var_9 ? ((-(arr_1 [i_0]))) : -32))) ? var_12 : (((arr_3 [i_1 - 1] [i_1] [i_1]) - ((46154 ? var_8 : -1146800354))))));
            arr_7 [i_0] [i_1] = ((~((3993042482 ? 14336 : 0))));
            var_20 = ((((min((~255492615022172939), var_2))) ? (min(3980432241, ((min(1, var_1))))) : -9088));
        }

        for (int i_2 = 2; i_2 < 17;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 19;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 19;i_4 += 1)
                {
                    {
                        var_21 ^= ((+(min(var_1, (((var_7 + 2147483647) >> (var_3 - 17181247119964327318)))))));
                        arr_16 [i_0] [i_0] [0] [i_0] [i_0] [i_0] = ((-5888 % ((var_3 >> (-1874625193 + 1874625207)))));
                        arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (arr_10 [i_0]);
                    }
                }
            }
            arr_18 [4] [i_0] [i_0] = ((((((var_8 ? var_10 : var_1)) >= -59589)) ? ((((arr_5 [i_0]) >= (arr_5 [i_0])))) : ((1552 ^ (arr_4 [i_0])))));
            var_22 = var_0;
        }
    }
    #pragma endscop
}
