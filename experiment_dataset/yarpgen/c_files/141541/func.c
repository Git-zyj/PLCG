/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141541
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141541 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141541
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
    var_13 &= ((/* implicit */_Bool) (+(((/* implicit */int) var_3))));
    var_14 = min((((/* implicit */int) var_4)), (max((((/* implicit */int) (short)15)), (((((/* implicit */_Bool) (unsigned short)5777)) ? (((/* implicit */int) (short)15)) : (((/* implicit */int) var_12)))))));
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_15 += ((/* implicit */unsigned short) max((((unsigned int) (short)-15)), (((/* implicit */unsigned int) (unsigned char)31))));
        var_16 |= (unsigned short)47950;
        var_17 = ((/* implicit */int) min((arr_1 [i_0] [i_0]), ((unsigned short)59763)));
        var_18 = ((/* implicit */unsigned short) ((_Bool) max((((/* implicit */unsigned short) arr_0 [i_0] [i_0])), (arr_1 [i_0] [i_0]))));
    }
    for (unsigned char i_1 = 0; i_1 < 22; i_1 += 1) 
    {
        arr_4 [i_1] = ((/* implicit */short) ((((/* implicit */int) ((signed char) arr_2 [i_1]))) / ((+((+(((/* implicit */int) (unsigned short)59763))))))));
        var_19 = ((/* implicit */unsigned short) min((((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)13))))), (arr_2 [i_1])));
    }
    for (unsigned short i_2 = 0; i_2 < 14; i_2 += 1) /* same iter space */
    {
        arr_7 [i_2] = ((/* implicit */long long int) (unsigned short)5760);
        arr_8 [i_2] = ((/* implicit */unsigned short) (_Bool)1);
        arr_9 [i_2] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_2] [i_2]))) - (arr_3 [(unsigned short)6]))) : (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)13545))) & (arr_3 [12LL])))));
        var_20 -= ((/* implicit */unsigned short) arr_6 [i_2]);
        var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) max((((/* implicit */int) (unsigned short)4)), (((int) var_11)))))));
    }
    for (unsigned short i_3 = 0; i_3 < 14; i_3 += 1) /* same iter space */
    {
        var_22 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) arr_12 [i_3]))) ? (((((/* implicit */_Bool) (unsigned short)5777)) ? (((/* implicit */int) (unsigned char)253)) : (((/* implicit */int) arr_11 [i_3])))) : (((/* implicit */int) arr_10 [i_3]))))), (((unsigned int) arr_3 [(_Bool)1]))));
        arr_14 [i_3] = ((/* implicit */int) 9U);
        var_23 -= ((/* implicit */signed char) ((int) (!(((/* implicit */_Bool) arr_10 [i_3])))));
        arr_15 [7LL] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_11 [i_3])) ? ((+(((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) (short)15))) : (arr_2 [i_3]))))) : (((/* implicit */long long int) (((!(((/* implicit */_Bool) (short)(-32767 - 1))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_5 [i_3] [i_3])) + (((/* implicit */int) var_9))))) : ((+(4294967276U))))))));
    }
    var_24 *= ((/* implicit */unsigned char) min((((unsigned short) var_11)), (((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (_Bool)1))))) != (((/* implicit */int) min((((/* implicit */unsigned short) var_12)), ((unsigned short)22402)))))))));
}
