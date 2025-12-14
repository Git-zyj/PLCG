/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146272
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146272 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146272
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
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        var_10 = ((/* implicit */int) min((var_10), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3658795112445341595ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (18446744073709551591ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65510))) : (min((5440896155156168353ULL), (((/* implicit */unsigned long long int) (unsigned char)15)))))))));
        arr_2 [i_0] [17] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((2484235438307505616LL) / (var_6)))) ? (((/* implicit */int) ((unsigned short) var_2))) : (((/* implicit */int) (_Bool)1))))) ? (max((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)90))) + (15ULL))), (((/* implicit */unsigned long long int) 540755047471985332LL)))) : (((/* implicit */unsigned long long int) var_2))));
    }
    for (unsigned long long int i_1 = 1; i_1 < 12; i_1 += 3) 
    {
        var_11 = ((/* implicit */long long int) min((((((/* implicit */_Bool) ((unsigned char) var_0))) ? (((/* implicit */unsigned long long int) 605327293U)) : (arr_1 [i_1 + 1]))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) -1)) / (arr_4 [i_1 - 1]))))));
        var_12 *= ((/* implicit */short) (!(((/* implicit */_Bool) (~(max((arr_1 [i_1]), (((/* implicit */unsigned long long int) 605327315U)))))))));
        var_13 = ((((/* implicit */_Bool) (signed char)-108)) ? (-2864233578892173650LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-8192))));
    }
    var_14 *= ((/* implicit */short) var_8);
}
