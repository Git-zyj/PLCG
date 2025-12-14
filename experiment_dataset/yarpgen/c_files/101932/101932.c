/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101932
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101932 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101932
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 2543408299757472411;
    var_14 = ((var_9 + (((135 % var_7) ^ (252 >= var_8)))));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_2 [i_0] = (~-6553722921916948284);
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_15 = ((-(arr_6 [i_1 + 1] [i_1] [i_1 + 3])));

                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        var_16 *= 5567146002571739537;
                        arr_9 [i_1] [i_1 + 3] [i_1 + 3] [i_3] = ((((((arr_8 [i_1] [i_1 - 1] [i_1] [i_1 + 3] [i_1 + 2]) != (min(-5567146002571739559, (arr_0 [i_1])))))) & 64));
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_4 = 1; i_4 < 22;i_4 += 1)
        {
            for (int i_5 = 4; i_5 < 22;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 25;i_6 += 1)
                {
                    {
                        var_17 &= (((((arr_10 [10] [i_4]) | ((4294967290 << (16359232359465998584 - 16359232359465998555))))) | (arr_5 [i_0])));
                        arr_17 [i_4] = (!2087511714243553041);
                    }
                }
            }
        }
    }
    for (int i_7 = 0; i_7 < 25;i_7 += 1)
    {
        arr_21 [i_7] = (min((((min(133, -6015231007693084609)) - -31525)), ((((((-(arr_20 [i_7])))) < 16359232359465998584)))));
        var_18 *= (max((!-1), 9223372036854775807));
    }
    /* LoopNest 3 */
    for (int i_8 = 4; i_8 < 15;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 16;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 16;i_10 += 1)
            {
                {
                    var_19 = 1482670005;
                    var_20 = 18446744073709551615;

                    for (int i_11 = 4; i_11 < 13;i_11 += 1)
                    {
                        arr_33 [i_10] = ((-((-(!2543408299757472411)))));
                        var_21 = (var_5 - (((!(~41)))));
                        arr_34 [i_8] [i_9] [i_8] = (1482670028 + 96);
                    }
                    for (int i_12 = 0; i_12 < 16;i_12 += 1)
                    {
                        var_22 &= ((var_6 && (((+(((arr_6 [i_8] [i_8] [i_9]) ? var_8 : 68)))))));
                        var_23 *= (((max((~233), 115))) | (max((arr_1 [i_8 - 2]), (~16102160415889855857))));
                        arr_39 [i_8 - 2] [i_9] [i_10] [i_12] = (((((arr_13 [i_12]) | (arr_13 [i_12])))) % ((+(((arr_38 [i_12]) ^ var_7)))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
