/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159763
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159763 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159763
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                var_11 = (((((arr_1 [i_1 + 4] [i_1 - 1]) == (~117))) ? ((0 ? (((arr_0 [i_0]) ? (arr_4 [i_1] [i_1] [i_0]) : (arr_1 [i_0] [i_1 + 3]))) : 109)) : (((!((!(arr_0 [i_1 + 4]))))))));

                for (int i_2 = 2; i_2 < 22;i_2 += 1)
                {
                    arr_7 [i_0] [i_0] [i_2] [i_2 - 2] = (arr_6 [i_1] [20]);
                    var_12 = (max(var_12, (((((min(((4294963200 ? var_6 : var_7)), (arr_2 [i_2])))) ? ((16256 ? (((var_4 + 2147483647) << (var_1 - 15070918978627582256))) : ((var_5 ? (arr_4 [i_0] [i_1] [i_2]) : var_3)))) : var_8)))));
                }
                for (int i_3 = 3; i_3 < 21;i_3 += 1)
                {
                    var_13 = (arr_10 [i_3] [i_1 + 3]);
                    arr_12 [i_0] [i_1] [i_1] [8] = ((var_2 ? (max(8045048422705994613, -13)) : (((arr_3 [i_0] [i_3 - 3] [i_1 + 1]) / (((var_0 * (arr_2 [i_3]))))))));
                    var_14 = (max(var_14, 73));
                    var_15 = -128;
                }
                arr_13 [i_0] [i_1] [i_0] = (max((!var_2), ((223 ? (203 < -1450999839) : (((!(arr_2 [i_0]))))))));
            }
        }
    }
    var_16 = (~var_5);
    var_17 = (~2);
    var_18 &= 13835058055282163712;
    #pragma endscop
}
