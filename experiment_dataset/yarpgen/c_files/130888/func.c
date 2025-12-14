/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130888
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130888 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130888
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
    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)173)) ? (((/* implicit */int) min((((/* implicit */unsigned short) ((signed char) (short)28211))), (max((var_2), (var_2)))))) : ((+(((/* implicit */int) var_6))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_20 = (-(((((/* implicit */_Bool) (unsigned short)51579)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)187))) : (arr_1 [i_0] [i_0]))));
        var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) arr_1 [(signed char)10] [(short)14]))));
    }
    for (unsigned char i_1 = 4; i_1 < 22; i_1 += 4) 
    {
        var_22 = ((/* implicit */short) var_7);
        var_23 &= (unsigned char)157;
    }
    for (unsigned short i_2 = 4; i_2 < 15; i_2 += 4) 
    {
        arr_7 [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) arr_6 [i_2 - 1])) ? (-297294077441136193LL) : ((-(((long long int) var_5))))));
        var_24 = ((/* implicit */signed char) (_Bool)0);
    }
    /* vectorizable */
    for (unsigned char i_3 = 0; i_3 < 21; i_3 += 3) 
    {
        var_25 *= ((/* implicit */unsigned short) var_11);
        var_26 = ((/* implicit */signed char) ((arr_0 [4U]) ? (var_5) : (((/* implicit */long long int) ((((/* implicit */int) arr_3 [i_3])) / (((/* implicit */int) var_9)))))));
        var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) ((((/* implicit */int) arr_0 [(unsigned short)2])) > (((/* implicit */int) arr_0 [18LL])))))));
        arr_10 [(signed char)1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (-9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_16))) <= (var_12)))))));
    }
}
