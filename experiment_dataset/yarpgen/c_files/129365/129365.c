/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129365
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    var_16 = (((18446744073709551605 ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_1]))) >> (var_7 - 6906276072365017422));
                    arr_8 [i_2] [i_0] [i_0] [i_0 + 2] = ((min(26, 8465078493344366443)) | (min((min(17, 14704215025430167641)), (~var_12))));
                    var_17 = (min(var_17, var_11));
                }

                for (int i_3 = 1; i_3 < 12;i_3 += 1)
                {
                    var_18 = min((((arr_6 [i_3 - 1] [i_3] [i_3 - 1]) ? (arr_10 [i_0] [i_3 + 2] [i_0]) : var_12)), (min((arr_9 [i_0 - 1] [i_0] [12]), var_1)));
                    var_19 = min(5369751898413769312, ((~(min(9981665580365185191, 18014398509481984)))));
                    var_20 = min((~13076992175295782332), (min((((arr_0 [i_0]) | 70093866270720)), (((8465078493344366446 != (arr_2 [i_0] [i_1])))))));

                    for (int i_4 = 1; i_4 < 11;i_4 += 1)
                    {
                        arr_13 [i_1] &= min(18446744073709551615, -var_14);
                        arr_14 [i_0] [i_0] [i_3] [2] = arr_9 [i_0] [i_0] [i_3 - 1];
                    }
                }
                for (int i_5 = 0; i_5 < 14;i_5 += 1)
                {
                    var_21 = (max(var_21, var_10));
                    arr_18 [i_0] = (1260476232270126116 ? ((((((var_12 ? (arr_12 [i_0] [i_0] [i_0]) : 18446744073709551603)) >= (min((arr_16 [i_0] [i_0]), (arr_4 [i_0]))))))) : (arr_10 [i_5] [i_5] [i_0]));
                }
                var_22 = (max(var_22, 9981665580365185166));
            }
        }
    }
    var_23 = (-((10039417142784624747 ? 0 : 18446673979843280888)));
    var_24 |= var_9;
    #pragma endscop
}
