/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115165
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115165 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115165
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 10;
    var_13 = ((14 & (9223372036854775802 > 4294967295)));
    var_14 = ((var_3 ? var_10 : ((var_0 ? (~var_11) : (~var_11)))));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_15 |= ((((((arr_8 [i_0]) > var_2)) ? 52 : (max(30720, 30719)))));
                    var_16 = ((((min(140, (arr_6 [i_0] [6] [i_1])))) ? (((!(arr_4 [i_0] [i_1] [i_0])))) : ((-(arr_7 [i_0] [i_1] [i_0])))));
                }
            }
        }
        var_17 = (max(var_17, ((max(30704, ((~(~9))))))));
    }
    for (int i_3 = 0; i_3 < 23;i_3 += 1)
    {
        var_18 = (!4294967276);
        /* LoopNest 2 */
        for (int i_4 = 1; i_4 < 21;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 23;i_5 += 1)
            {
                {
                    arr_21 [i_4] [i_3] [i_4] [i_5] = (max(var_7, ((((4294967295 ? (arr_13 [i_3] [i_5]) : 2980361916)) | (19 | var_6)))));
                    var_19 = (arr_18 [i_4] [i_4 + 1] [i_4]);
                    var_20 += (max(((((((!(arr_12 [i_3])))) % var_2))), ((-30717 ? 140 : 6754098118794179534))));
                }
            }
        }
        var_21 = (min(var_21, (arr_19 [i_3])));
    }
    #pragma endscop
}
