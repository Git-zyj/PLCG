/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107411
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107411 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107411
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
    /* LoopSeq 4 */
    for (signed char i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) (((~((~(var_9))))) == (((/* implicit */long long int) (((-(((/* implicit */int) (unsigned short)10912)))) + (((/* implicit */int) ((18446744073709551606ULL) == (((/* implicit */unsigned long long int) -2117136731))))))))));
        var_16 &= ((/* implicit */long long int) (+(((((/* implicit */_Bool) 11ULL)) ? (-1433292947) : (((/* implicit */int) (_Bool)0))))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 4; i_1 < 8; i_1 += 1) 
    {
        var_17 = ((/* implicit */_Bool) 0ULL);
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned int) ((((11ULL) & (7ULL))) - (((/* implicit */unsigned long long int) ((arr_1 [i_1]) & (((/* implicit */unsigned int) arr_0 [i_1])))))));
    }
    for (short i_2 = 0; i_2 < 16; i_2 += 1) 
    {
        arr_9 [(unsigned short)4] &= ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_2])))))));
        var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) (((((!(((/* implicit */_Bool) -836503971)))) && (((_Bool) (unsigned char)6)))) ? (((/* implicit */int) ((unsigned char) arr_1 [i_2]))) : ((+(((/* implicit */int) (signed char)13)))))))));
    }
    /* vectorizable */
    for (signed char i_3 = 0; i_3 < 25; i_3 += 2) 
    {
        var_19 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) 2147483647)) & (3485735135U)));
        var_20 = ((/* implicit */unsigned long long int) arr_10 [i_3]);
        arr_12 [7U] [i_3] = ((/* implicit */signed char) ((((((/* implicit */_Bool) 1023U)) ? (((/* implicit */unsigned long long int) -2147483633)) : (18442240474082181120ULL))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)65)))));
    }
    var_21 = ((signed char) -2117136731);
    var_22 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((2328102208139341026ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))) == (((/* implicit */unsigned long long int) var_9))))), ((+(var_6)))));
}
