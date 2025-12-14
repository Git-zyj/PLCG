/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124719
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124719 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124719
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((min(var_3, var_15))) ? var_3 : var_6));

    for (int i_0 = 0; i_0 < 20;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] = (((arr_3 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : (((arr_0 [i_0] [i_0]) | (((max((arr_2 [i_0]), (arr_3 [i_0] [11])))))))));
        arr_5 [i_0] [i_0] = (((((12920806130301700731 & 32767) || ((max((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0])))))) ? ((min((((arr_3 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : (arr_2 [i_0]))), ((80 ? 158 : -44))))) : ((((arr_0 [i_0] [i_0]) & (arr_1 [i_0] [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1) /* same iter space */
    {
        arr_9 [i_1] [i_1] = (((((2250032840 != (4005925989 - -64)))) != 15104));
        arr_10 [i_1] [i_1] = (((((max(7125488480620877910, 158)))) ? ((((max((arr_2 [i_1]), (arr_7 [i_1] [i_1])))))) : (((((arr_0 [i_1] [i_1]) & (arr_8 [i_1]))) | (((((arr_8 [i_1]) || (arr_3 [i_1] [i_1])))))))));
    }
    for (int i_2 = 0; i_2 < 20;i_2 += 1) /* same iter space */
    {
        var_20 = (max((((26585 ? 113 : 1356790431))), (arr_12 [i_2] [i_2])));
        arr_13 [i_2] [i_2] = (~5203245350082019224);
    }
    var_21 = (var_9 > var_14);
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 17;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 17;i_4 += 1)
        {
            {
                var_22 -= ((((154 ? 3493623517 : 5203245350082019224))));
                var_23 = (((arr_15 [i_4]) ? (((arr_17 [i_4]) * ((max((arr_3 [i_3] [i_3]), (arr_0 [i_4] [i_3])))))) : (((((arr_11 [17]) ? (arr_3 [i_3] [i_4]) : (arr_15 [i_4])))))));
                arr_18 [i_4] = (((((((arr_17 [i_4]) * (arr_14 [i_4])))) ? (((arr_15 [i_3]) ? (arr_1 [i_3] [i_3]) : (arr_3 [i_4] [i_3]))) : ((((arr_15 [i_3]) ? (arr_0 [i_3] [i_4]) : (arr_0 [i_3] [i_3])))))));
                var_24 *= (((arr_6 [8]) % (max((((arr_12 [i_4] [i_3]) ? (arr_15 [12]) : (arr_8 [i_3]))), ((max((arr_17 [i_3]), (arr_11 [i_3]))))))));
            }
        }
    }
    #pragma endscop
}
