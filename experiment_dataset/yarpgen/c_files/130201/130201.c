/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130201
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130201 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130201
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 += var_8;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            {
                var_15 = (8191 ? (arr_4 [i_0] [i_1] [i_0]) : ((((!(arr_0 [i_0]))) ? 8191 : ((9223372036854775807 ? (arr_2 [12]) : (arr_3 [i_1 - 1]))))));
                var_16 = (min(var_16, ((((max(12777291658678126176, 14599767950628747756)) < var_0)))));
                var_17 = (max((arr_3 [i_0]), (((12777291658678126163 ? (arr_1 [i_1 + 3] [i_1]) : (((arr_3 [2]) ? 38 : 893010860)))))));
                var_18 = (min(var_18, ((+(((arr_0 [i_0 + 1]) ? 33554431 : (arr_1 [i_1 + 3] [i_0 - 1])))))));
            }
        }
    }
    var_19 = (8189 & 22635);
    var_20 = (((!var_9) / (((min(12777291658678126176, -9223372036854775807))))));
    #pragma endscop
}
