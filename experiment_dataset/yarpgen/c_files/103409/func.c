/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103409
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103409 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103409
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 3; i_0 < 14; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) ((11665018123965398455ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))) < (-1)));
        arr_4 [i_0 - 3] [i_0] = ((/* implicit */long long int) (~((-(((/* implicit */int) (unsigned short)63640))))));
    }
    for (unsigned int i_1 = 3; i_1 < 21; i_1 += 4) 
    {
        arr_7 [i_1] [i_1] = ((/* implicit */short) 14286388612663191575ULL);
        arr_8 [i_1] = max(((-(((/* implicit */int) (unsigned char)255)))), (min((((/* implicit */int) (unsigned short)18250)), (2147483630))));
        arr_9 [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (14286388612663191575ULL) : (((/* implicit */unsigned long long int) 1658020821))));
        var_20 *= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) -5)) * (3347382321576525281ULL)));
        var_21 = ((/* implicit */unsigned char) (_Bool)1);
    }
    var_22 = ((/* implicit */unsigned short) (+(var_12)));
    var_23 = ((/* implicit */_Bool) (+(min((((/* implicit */int) min((((/* implicit */short) (signed char)-88)), (var_11)))), ((~(0)))))));
    var_24 = ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)2)) ? (((((/* implicit */int) (unsigned short)18257)) << (((((/* implicit */int) (signed char)-88)) + (89))))) : (((((/* implicit */int) (unsigned short)63640)) & (var_5)))))) : (max((max((((/* implicit */unsigned long long int) (unsigned short)18248)), (0ULL))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) (unsigned char)241)), ((unsigned short)47278)))))));
}
