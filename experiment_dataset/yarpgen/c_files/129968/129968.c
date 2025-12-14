/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129968
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129968 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129968
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 ^= 255;
    var_17 = (min(var_17, var_5));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_3 [i_0] = 1;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                {
                    var_18 -= (max(-1, ((~(min(-4, (arr_7 [i_0] [18])))))));
                    var_19 = (min(var_19, ((min(-21, (max(((((var_5 + 2147483647) >> (var_1 + 2016256691736434200)))), (-16 + var_0))))))));
                }
            }
        }
        var_20 = var_10;
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 16;i_3 += 1)
    {
        var_21 = ((var_11 << (((arr_5 [i_3]) - 144))));
        var_22 += -4;
    }
    for (int i_4 = 0; i_4 < 11;i_4 += 1)
    {

        for (int i_5 = 1; i_5 < 7;i_5 += 1)
        {
            arr_17 [i_4] [i_4] [i_5] |= (max(var_8, (max(((((arr_4 [i_4] [i_4] [i_5]) < (arr_14 [i_5] [i_4])))), 8451569196972920511))));
            var_23 = (min(var_23, ((max(-1, ((((((max(var_7, var_5)))) < (max(-12, (arr_6 [i_4] [i_5 + 3])))))))))));
        }
        var_24 = (min(var_24, ((max((min(((min((arr_5 [i_4]), -32762))), 1186092391)), 213)))));
    }
    var_25 = (~-32);
    #pragma endscop
}
