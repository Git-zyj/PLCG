/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103413
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_18 = ((/* implicit */unsigned short) var_14);
    var_19 = ((/* implicit */_Bool) var_10);
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        var_20 = ((/* implicit */unsigned long long int) ((min((((((/* implicit */_Bool) var_10)) ? (var_5) : (((/* implicit */int) arr_1 [i_0])))), (((/* implicit */int) var_8)))) % (min((((((/* implicit */_Bool) arr_2 [4LL])) ? (arr_0 [i_0]) : (((/* implicit */int) var_4)))), (((/* implicit */int) var_12))))));
        arr_4 [i_0] = ((/* implicit */unsigned short) max((((/* implicit */int) arr_3 [i_0] [i_0])), (((var_5) / (arr_0 [i_0])))));
        var_21 = ((/* implicit */short) ((((/* implicit */_Bool) (~(arr_0 [i_0])))) ? (((((/* implicit */int) arr_3 [i_0] [i_0])) & (arr_2 [i_0]))) : ((~(((/* implicit */int) var_7))))));
    }
    for (signed char i_1 = 0; i_1 < 19; i_1 += 2) 
    {
        var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) ((((long long int) arr_5 [i_1])) > (((/* implicit */long long int) max((-975673767), (((/* implicit */int) (signed char)52))))))))));
        arr_8 [i_1] = ((/* implicit */unsigned int) ((min((((var_6) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1] [(unsigned short)4]))))), (((/* implicit */unsigned long long int) ((arr_2 [i_1]) % (975673767)))))) | (((((/* implicit */_Bool) arr_1 [i_1])) ? (max((10174862383657384794ULL), (((/* implicit */unsigned long long int) var_7)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_1] [i_1]))))))))));
        arr_9 [i_1] = ((/* implicit */unsigned short) ((long long int) ((((/* implicit */_Bool) -366199874)) ? (min((arr_0 [(unsigned short)13]), (((/* implicit */int) arr_5 [i_1])))) : (((-975673767) | (-975673767))))));
    }
    /* vectorizable */
    for (signed char i_2 = 0; i_2 < 11; i_2 += 2) 
    {
        /* LoopSeq 1 */
        for (int i_3 = 0; i_3 < 11; i_3 += 1) 
        {
            var_23 *= ((/* implicit */unsigned long long int) arr_6 [i_3] [i_2]);
            arr_17 [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */int) (short)0)) >> (((arr_7 [i_3] [i_3]) - (12753009486294727851ULL)))));
            arr_18 [i_2] [i_2] = (-(((/* implicit */int) arr_3 [i_2] [i_3])));
            var_24 += ((/* implicit */short) (unsigned short)14336);
        }
        arr_19 [i_2] = ((/* implicit */unsigned short) 975673767);
        arr_20 [i_2] = ((((/* implicit */int) arr_14 [i_2] [i_2] [i_2])) & (((/* implicit */int) arr_14 [i_2] [i_2] [i_2])));
    }
}
