/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116344
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116344 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116344
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_17 = ((!((max(var_11, (min((arr_0 [9]), (arr_5 [i_0] [i_0] [i_0]))))))));

                for (int i_2 = 2; i_2 < 12;i_2 += 1)
                {
                    var_18 = (max(var_18, (((135 ? 1275969572 : -111)))));
                    arr_10 [i_2] [i_0] [i_0] [i_0] = 3441710046813385119;
                }
                for (int i_3 = 0; i_3 < 14;i_3 += 1) /* same iter space */
                {
                    var_19 = (min(var_19, (arr_0 [i_0])));
                    var_20 = (((125 || 2903709059974336989) << (((-124 ? 1 : 8345882436139343797)))));
                    arr_14 [i_1] [i_3] [i_1] [i_1] &= (min(16819, -111));
                    arr_15 [i_0] [i_0] [i_3] [i_1] = ((((-((-(arr_11 [0] [0] [i_3] [i_0])))))) || var_15);
                    arr_16 [i_0] [11] [i_0] = (((((min(var_15, -111)))) ? (((255 ? 234 : 228))) : var_5));
                }
                for (int i_4 = 0; i_4 < 14;i_4 += 1) /* same iter space */
                {
                    arr_20 [i_0] [i_0] [i_1] |= (((((var_8 ? (((arr_2 [i_0]) ? var_8 : var_7)) : (arr_1 [i_0])))) ? var_7 : (((arr_0 [i_1]) * (arr_5 [i_0] [i_0] [i_4])))));
                    arr_21 [i_0] [i_1] [i_1] = var_10;
                    arr_22 [i_0] = (arr_19 [i_4] [i_1] [i_0]);
                }
                arr_23 [i_0] [i_1] [i_1] = ((((max((arr_12 [i_0] [i_0] [i_0]), var_13))) ? (((~32759) / (arr_18 [i_1] [i_0] [i_0]))) : (((min((arr_12 [i_1] [i_0] [i_0]), -406700359)) - (((-2147483647 - 1) ? (arr_3 [i_0] [i_0]) : (arr_11 [i_0] [i_1] [i_1] [i_0])))))));
                arr_24 [i_0] = (((((var_3 + 2147483647) >> (arr_4 [i_0]))) + (((!(arr_4 [i_0]))))));
            }
        }
    }
    var_21 &= var_6;
    var_22 = (-7679 && -61);
    var_23 -= (((var_1 & 17999731174065670941) != var_7));
    #pragma endscop
}
