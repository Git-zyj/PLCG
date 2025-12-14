/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166517
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166517 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166517
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((2975415416 ? var_5 : 2975415416));
    var_17 = (min(var_15, var_2));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_18 = 7;
        arr_2 [i_0] = (max((arr_0 [i_0] [i_0]), ((2975415428 ? 4460039216799817120 : 1319551880))));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_19 = ((~((+((((arr_3 [i_0] [i_2]) >= 4294967284)))))));
                    var_20 = max((min((((arr_3 [i_0] [i_1]) ? var_9 : 1319551879)), (((arr_8 [i_0] [i_1] [i_2]) >> (arr_5 [1]))))), ((((((var_15 >= (arr_4 [i_0] [i_1] [i_2])))) ^ (((233 >= (arr_8 [i_0] [i_0] [i_0]))))))));
                    var_21 = (((arr_8 [i_1 + 1] [i_1 + 2] [i_1 + 1]) <= ((((min(1587555612, (arr_8 [i_0] [i_0] [i_0])))) ? (max((arr_1 [i_1 + 2]), 2975415415)) : (((min((arr_7 [14]), (arr_5 [i_0])))))))));
                    var_22 *= (((((arr_5 [i_0]) ? (arr_1 [i_2]) : ((min(128, 22)))))) ^ ((1319551884 << (1319551873 - 1319551867))));
                    arr_9 [i_0] = (max(4294967295, (arr_0 [i_0] [i_1])));
                }
            }
        }
    }
    #pragma endscop
}
