/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143453
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143453 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143453
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
    var_20 -= max((((((/* implicit */_Bool) var_13)) ? (2231331602U) : (min((((/* implicit */unsigned int) var_18)), (1461822291U))))), (((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (short)5782)) : (((/* implicit */int) var_14)))))));
    var_21 -= ((/* implicit */short) max((max((min((var_16), (var_11))), (var_11))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_3)), (1461822278U)))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_19)))))));
    var_22 = var_13;
    var_23 = ((/* implicit */short) var_0);
    /* LoopSeq 3 */
    for (unsigned char i_0 = 2; i_0 < 11; i_0 += 4) 
    {
        var_24 = ((/* implicit */unsigned int) max((min((((/* implicit */int) max((arr_0 [i_0]), (((/* implicit */unsigned short) arr_2 [i_0]))))), (var_3))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_1 [i_0 - 2])) : (((/* implicit */int) arr_1 [i_0 + 1]))))));
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) max((((/* implicit */long long int) ((unsigned short) ((int) arr_0 [i_0 - 2])))), (max((((/* implicit */long long int) ((arr_1 [i_0 - 2]) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (unsigned short)55907))))), (((arr_1 [i_0]) ? (var_13) : (((/* implicit */long long int) 1461822291U))))))));
        var_25 = ((/* implicit */int) ((unsigned char) max((((((/* implicit */_Bool) arr_2 [i_0])) ? (18229534303132851987ULL) : (((/* implicit */unsigned long long int) var_15)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0])))))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 4) 
    {
        var_26 |= ((/* implicit */unsigned char) min((((/* implicit */long long int) ((((/* implicit */unsigned long long int) arr_5 [i_1] [i_1])) == (var_10)))), (((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (arr_5 [i_1] [i_1]) : (arr_5 [i_1] [i_1])))));
        var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) ((_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)249))) | (arr_4 [i_1])))))));
        arr_7 [i_1] = ((/* implicit */unsigned long long int) arr_5 [i_1] [i_1]);
        arr_8 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_5 [i_1] [i_1]), (arr_5 [i_1] [i_1])))) || (((arr_6 [i_1] [i_1]) > (arr_5 [i_1] [i_1])))));
        arr_9 [i_1] = ((/* implicit */unsigned short) max((((/* implicit */long long int) (unsigned short)33322)), (min((((/* implicit */long long int) ((unsigned int) arr_6 [i_1] [i_1]))), (arr_5 [i_1] [i_1])))));
    }
    for (unsigned int i_2 = 0; i_2 < 13; i_2 += 1) 
    {
        var_28 = ((/* implicit */unsigned char) min((var_28), (arr_12 [i_2])));
        var_29 *= ((/* implicit */short) arr_4 [i_2]);
    }
}
