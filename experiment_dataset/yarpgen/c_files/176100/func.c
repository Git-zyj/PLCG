/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176100
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176100 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176100
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
    var_19 = ((/* implicit */long long int) var_3);
    /* LoopSeq 4 */
    for (unsigned char i_0 = 1; i_0 < 15; i_0 += 4) 
    {
        arr_4 [i_0 + 1] [i_0] = ((/* implicit */short) max((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) : (697842846U))), (min((3597124443U), (((/* implicit */unsigned int) arr_1 [i_0]))))));
        arr_5 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 4848866192756059543ULL)) ? (4294967284U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1))))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 24; i_1 += 3) 
    {
        var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) (short)32751))));
        arr_9 [i_1] [i_1] = ((/* implicit */_Bool) var_10);
        var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (short)32766)) : (var_3)))) / (((long long int) arr_6 [(unsigned char)8])))))));
    }
    for (unsigned char i_2 = 0; i_2 < 11; i_2 += 2) 
    {
        arr_14 [(short)8] [(short)8] = ((/* implicit */int) min((((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)65518))))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (((((/* implicit */long long int) ((/* implicit */int) (short)32752))) | (arr_12 [i_2]))))), (((/* implicit */long long int) -1))));
        arr_15 [i_2] [i_2] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) (+(((/* implicit */int) (short)32751))))) ? (((/* implicit */int) max((((/* implicit */short) var_8)), (arr_3 [i_2])))) : (((/* implicit */int) var_14)))), (((/* implicit */int) (short)10068))));
        arr_16 [i_2] = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_7 [i_2])) ? (arr_7 [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) max(((!(((/* implicit */_Bool) 4294967295U)))), ((!(((/* implicit */_Bool) 6475123988035762422LL))))))))));
    }
    for (short i_3 = 0; i_3 < 20; i_3 += 4) 
    {
        var_22 = ((/* implicit */unsigned short) (((_Bool)1) ? (67108863) : (((/* implicit */int) (unsigned short)65518))));
        var_23 = ((/* implicit */long long int) arr_6 [i_3]);
        var_24 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_6 [i_3])) != (((/* implicit */int) ((((/* implicit */int) (unsigned char)134)) < (((/* implicit */int) (unsigned char)255)))))))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_6 [i_3])) : (((/* implicit */int) (short)(-32767 - 1)))))) : (min((13597877880953492054ULL), (((/* implicit */unsigned long long int) arr_17 [i_3]))))))));
    }
    var_25 = ((/* implicit */long long int) var_14);
}
