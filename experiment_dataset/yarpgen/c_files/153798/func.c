/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153798
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153798 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153798
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
    var_10 = ((/* implicit */long long int) max((((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)255)) & (((/* implicit */int) (signed char)-122))))) < (14513678437444100116ULL)))), ((signed char)121)));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (unsigned char i_2 = 4; i_2 < 20; i_2 += 1) 
            {
                {
                    var_11 = ((((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-122))))) & (((((/* implicit */_Bool) var_4)) ? (3933065636265451499ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-122))))));
                    var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-122)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_2 - 2]))) : (max((((/* implicit */unsigned long long int) ((var_3) == (((/* implicit */long long int) ((/* implicit */int) var_8)))))), (((((/* implicit */_Bool) -4909969420169062020LL)) ? (((/* implicit */unsigned long long int) 281474976710655LL)) : (3933065636265451513ULL)))))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */unsigned short) ((((var_7) < (((10744909170657697653ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))))) ? (min((((/* implicit */unsigned long long int) var_9)), ((+(18446744073709551615ULL))))) : (((/* implicit */unsigned long long int) max((max((((/* implicit */unsigned int) (unsigned short)42268)), (var_4))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)10692)) ? (((/* implicit */int) (signed char)89)) : (((/* implicit */int) (unsigned char)1))))))))));
    var_14 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) var_6)), (var_9))))) >= (((unsigned long long int) (~(((/* implicit */int) var_6)))))));
}
