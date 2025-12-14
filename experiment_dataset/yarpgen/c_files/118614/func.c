/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118614
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
    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_11)))), (((/* implicit */int) ((((/* implicit */_Bool) var_16)) || (((/* implicit */_Bool) var_11)))))))) && (((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned char)0))))), (var_9))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 1; i_0 < 13; i_0 += 2) 
    {
        var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) (~(((arr_3 [i_0] [i_0]) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))))))))));
        arr_4 [i_0] = ((/* implicit */long long int) arr_2 [i_0]);
        var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_0]))))))))));
        arr_5 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)7)) ? (((/* implicit */int) (unsigned short)1023)) : (((/* implicit */int) var_11))))) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_0 + 2] [i_0 + 1]))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 2) 
    {
        arr_9 [i_1] = ((/* implicit */_Bool) arr_6 [i_1]);
        var_21 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)2))) : (arr_7 [i_1])))) && (((/* implicit */_Bool) max((((((/* implicit */_Bool) (short)32767)) ? (arr_7 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1]))))), (((/* implicit */unsigned int) ((-491148775) - (((/* implicit */int) (short)-32750))))))))));
        arr_10 [i_1] = ((/* implicit */signed char) arr_7 [i_1]);
        var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-32745)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1]))) : ((-(arr_8 [(unsigned char)16] [i_1])))))) ? (max((((((/* implicit */_Bool) arr_7 [i_1])) ? (arr_8 [3U] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))), (((/* implicit */unsigned int) arr_6 [i_1])))) : (((/* implicit */unsigned int) max(((+(((/* implicit */int) var_14)))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [(short)10]))))))))));
        arr_11 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (short)32764))) : (var_12)))) ? (((var_6) - (((/* implicit */unsigned long long int) arr_8 [i_1] [13])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_15)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1]))) : (((unsigned long long int) (~(arr_7 [i_1]))))));
    }
    var_23 = ((/* implicit */signed char) ((((((/* implicit */_Bool) max(((unsigned char)254), (((/* implicit */unsigned char) var_15))))) ? (max((var_13), (((/* implicit */long long int) var_11)))) : (((/* implicit */long long int) var_7)))) == (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) / (var_16))))))))));
    var_24 = ((/* implicit */unsigned long long int) ((max((((/* implicit */unsigned long long int) ((unsigned short) var_3))), (((unsigned long long int) var_5)))) > (((/* implicit */unsigned long long int) var_2))));
}
