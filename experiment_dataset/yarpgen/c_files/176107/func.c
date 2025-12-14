/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176107
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176107 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176107
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
    var_19 *= ((/* implicit */_Bool) min(((-(((((/* implicit */int) var_2)) ^ (((/* implicit */int) var_7)))))), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_12))))))))));
    /* LoopSeq 4 */
    for (unsigned char i_0 = 2; i_0 < 21; i_0 += 1) 
    {
        var_20 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0]))))), (max((arr_2 [i_0]), (arr_2 [i_0])))))), (min((var_0), (max((760055276U), (((/* implicit */unsigned int) arr_0 [i_0] [i_0]))))))));
        arr_3 [i_0] = ((/* implicit */unsigned char) min((min((var_1), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) & (var_14))))), (((/* implicit */unsigned long long int) ((var_6) + (((/* implicit */unsigned int) arr_2 [i_0])))))));
    }
    for (unsigned char i_1 = 2; i_1 < 12; i_1 += 2) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */short) var_4);
        arr_7 [i_1] [i_1] = ((/* implicit */short) (+((-(((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_17))))))));
        var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (_Bool)1))))) ? (((unsigned int) var_13)) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1]))))))));
    }
    for (short i_2 = 0; i_2 < 11; i_2 += 2) 
    {
        var_22 = ((/* implicit */short) (-((~(((/* implicit */int) ((unsigned short) arr_0 [(short)1] [i_2])))))));
        var_23 = ((/* implicit */_Bool) var_4);
    }
    for (unsigned char i_3 = 0; i_3 < 12; i_3 += 2) 
    {
        arr_12 [(_Bool)1] [i_3] = ((/* implicit */unsigned char) min((max((arr_4 [i_3] [i_3]), (arr_4 [i_3] [i_3]))), ((-(arr_4 [i_3] [i_3])))));
        var_24 ^= ((/* implicit */short) max((((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_9)) ? (arr_2 [i_3]) : (((/* implicit */int) var_2))))))), (min((var_1), (((/* implicit */unsigned long long int) ((int) arr_10 [i_3])))))));
        arr_13 [i_3] = ((/* implicit */short) ((signed char) max((arr_11 [i_3] [i_3]), (arr_11 [i_3] [i_3]))));
    }
    var_25 *= ((/* implicit */unsigned short) var_6);
    var_26 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) | (4274159787U)))))))));
}
