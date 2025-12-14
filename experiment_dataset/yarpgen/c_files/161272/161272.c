/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161272
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161272 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161272
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((min(0, 17162655241461072625)) <= (var_7 & 1)));
    var_20 = (max(var_20, var_13));
    var_21 = (min((((max(var_12, var_17)))), var_4));

    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        var_22 = (min(1, 1));
        var_23 = (((!16384) ? (((max((arr_1 [i_0]), (((arr_1 [i_0]) || (arr_1 [i_0]))))))) : ((((((arr_0 [i_0] [i_0]) ? 65535 : (arr_0 [i_0] [i_0])))) ? (((max((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0]))))) : ((1 ? 7411367239628961348 : 8090780360577004178))))));
        var_24 = 8269;
        var_25 = var_3;
        var_26 = ((11423 <= (arr_0 [i_0] [i_0])));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_27 = ((~(min((arr_2 [i_1]), ((min((arr_4 [i_1] [i_1]), (arr_5 [i_1] [i_1]))))))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 14;i_3 += 1)
            {
                {
                    var_28 = ((max((((arr_6 [i_1] [i_3 + 1]) ? var_5 : 45789)), (arr_5 [i_2] [i_3]))));
                    arr_11 [i_3] [i_3] = (arr_8 [i_3 - 1] [i_2]);
                    var_29 = ((!(11423 || 1)));
                    arr_12 [i_3] [i_1] [i_1] = (((arr_8 [i_1] [i_1]) ? 346206626182637025 : (arr_8 [i_2] [i_1])));
                    var_30 = (min((((arr_8 [i_2] [i_2]) ? (~16274621427052801604) : (arr_5 [i_1] [i_2]))), ((min(45789, -346206626182637026)))));
                }
            }
        }
        var_31 = (arr_3 [i_1] [i_1]);
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        arr_15 [i_4] = (((47221 ? 45762 : 54100)));
        var_32 ^= ((((((((arr_14 [i_4] [i_4]) * var_13)) >= ((min((arr_4 [i_4] [i_4]), 65518)))))) < (arr_9 [i_4] [i_4] [i_4] [i_4])));
        var_33 |= (((((((((arr_1 [1]) / (arr_0 [i_4] [2])))) / (arr_13 [i_4])))) ? (((min((min((arr_14 [i_4] [i_4]), (arr_6 [i_4] [i_4]))), 55209)))) : (((arr_0 [i_4] [6]) ? -346206626182637012 : (arr_0 [i_4] [6])))));
    }
    #pragma endscop
}
