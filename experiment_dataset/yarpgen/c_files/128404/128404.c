/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128404
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128404 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128404
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                var_12 &= 23040;
                var_13 = ((((((((var_11 ? (arr_0 [i_0] [i_1]) : var_6))) ? -21919 : (~var_6)))) ? ((((57513 > var_10) ? ((-91 ? 4294967290 : 23040)) : 96))) : (((((-78 ? 21918 : (arr_3 [9])))) ? ((-23040 ? 3627530870 : var_7)) : (((min(57735, var_8))))))));
                var_14 = (min(((!(arr_1 [i_1 - 1]))), ((!(arr_1 [i_0])))));
                var_15 = min(var_0, ((max(var_0, var_4))));
                var_16 |= 1;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 22;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            {
                var_17 = (arr_8 [i_2] [i_3]);
                var_18 *= ((~(min((max((-127 - 1), (arr_5 [i_3]))), 16483))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 15;i_4 += 1)
    {
        for (int i_5 = 1; i_5 < 13;i_5 += 1)
        {
            {
                arr_17 [i_5 + 1] [i_5] [i_4] = ((~((((!(arr_6 [i_4] [14])))))));
                arr_18 [i_4] [i_5] [i_5] = ((((((~-1) ^ ((~(arr_11 [i_4] [i_5])))))) ? 91 : (1 && 4294967295)));
                var_19 = ((((min(65526, var_8))) & ((min(6037, (arr_7 [i_4] [i_5 + 1] [i_4]))))));
            }
        }
    }
    var_20 *= -var_6;
    #pragma endscop
}
