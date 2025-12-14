/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117536
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117536 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117536
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
    var_15 = ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)10811))));
    var_16 = ((/* implicit */signed char) var_7);
    /* LoopSeq 1 */
    for (short i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        var_17 = 1935304966U;
        var_18 = ((/* implicit */_Bool) (((~(((/* implicit */int) arr_0 [i_0 + 1] [i_0])))) & ((~(((/* implicit */int) arr_0 [i_0 + 1] [(unsigned short)8]))))));
        var_19 = ((/* implicit */unsigned short) min((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)50098))) : (2359662329U)))), (((((/* implicit */_Bool) (unsigned short)45139)) ? (((/* implicit */unsigned long long int) 2288244321U)) : (13408640568100790162ULL))))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) 938716137)), (var_10))))));
        arr_3 [i_0] [i_0 + 1] = ((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0 + 1])))))) ^ (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) 22043948599072001LL)) : (17275126313124746567ULL))))) ^ (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_5)))))));
        var_20 = ((/* implicit */int) min((((((/* implicit */_Bool) ((long long int) arr_0 [i_0] [i_0]))) ? (((((/* implicit */_Bool) (unsigned char)14)) ? (4194303U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))) : (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)0)) >> (((-5653438376422468097LL) + (5653438376422468114LL)))))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0 + 1] [i_0 + 1])) ? (((/* implicit */int) max(((unsigned char)101), (((/* implicit */unsigned char) (signed char)81))))) : (((/* implicit */int) (unsigned short)15438)))))));
    }
    var_21 = ((/* implicit */long long int) var_13);
}
