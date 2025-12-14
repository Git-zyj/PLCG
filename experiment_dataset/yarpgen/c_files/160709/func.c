/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160709
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160709 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160709
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
    var_17 = ((/* implicit */long long int) var_1);
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        var_18 = ((/* implicit */unsigned int) (-(((/* implicit */int) (short)-32764))));
        arr_2 [i_0] [(_Bool)1] = ((/* implicit */int) (short)-32764);
    }
    for (unsigned short i_1 = 1; i_1 < 13; i_1 += 1) /* same iter space */
    {
        var_19 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_4))) + (var_3)))) ? (arr_3 [i_1]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-32764)) ? (((/* implicit */int) (short)-32764)) : (((/* implicit */int) (short)-32764)))))))) - (((((/* implicit */_Bool) (short)-32764)) ? (17796271695782835788ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32749)))))));
        var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_1 - 1] [(short)14])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (short)-32749)) : (((/* implicit */int) var_16))))))))) ^ (max((min((((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))), (18446744073709551615ULL))), (var_6))))))));
    }
    for (unsigned short i_2 = 1; i_2 < 13; i_2 += 1) /* same iter space */
    {
        var_21 = ((/* implicit */short) (~(max((arr_5 [i_2 - 1] [i_2]), (arr_5 [i_2 - 1] [i_2])))));
        arr_8 [i_2] [i_2] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) | (arr_5 [i_2] [i_2])))), ((-(((((/* implicit */_Bool) 30ULL)) ? (((/* implicit */unsigned long long int) -987208103)) : (18446744073709551604ULL)))))));
        arr_9 [i_2] [i_2] = ((/* implicit */long long int) var_16);
    }
    var_22 *= ((/* implicit */short) min((((((/* implicit */int) (unsigned char)0)) | (((/* implicit */int) (short)6741)))), (((/* implicit */int) var_11))));
    var_23 = ((((/* implicit */_Bool) (~((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (1397388143177295151ULL)))))) ? ((-(min((((/* implicit */unsigned int) var_9)), (var_10))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_12))));
}
