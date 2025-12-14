/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180336
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180336 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180336
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
    var_20 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) 2519846617306852900LL))))) : (((/* implicit */int) (_Bool)1)))))));
    var_21 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) (short)0))) : (593830215497359990LL)))), ((((_Bool)0) ? (var_19) : (var_19))))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        var_22 = ((/* implicit */int) ((((/* implicit */_Bool) 346928802432769798ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)19758))) : (1174423393U)));
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) * (((((((/* implicit */_Bool) (short)19771)) ? (((/* implicit */long long int) ((/* implicit */int) var_18))) : (var_2))) / (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)35691)) * (((/* implicit */int) var_7)))))))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) ((((_Bool) (signed char)-60)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : ((((_Bool)1) ? ((-(593830215497359990LL))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_16))))))))));
    }
    for (unsigned int i_1 = 2; i_1 < 21; i_1 += 4) 
    {
        var_23 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) min((9370585641809333658ULL), (((/* implicit */unsigned long long int) (short)4977))))) ? (((var_1) & (((/* implicit */unsigned long long int) -2606159560200443284LL)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-7)))))));
        var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -593830215497359992LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_18))) : (var_9)))) * (((((/* implicit */_Bool) var_14)) ? (arr_4 [i_1]) : (((/* implicit */unsigned long long int) var_11))))))) ? (((/* implicit */unsigned long long int) (+(((long long int) 3120543878U))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_19)) ? (((/* implicit */unsigned long long int) var_9)) : (var_17)))) ? (((((/* implicit */_Bool) -909831841396638391LL)) ? (arr_6 [i_1 - 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-90))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_1])) ? (var_3) : (593830215497360005LL))))))));
        var_25 ^= ((/* implicit */signed char) var_3);
    }
    var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)24672)) || (((/* implicit */_Bool) 861133554)))))));
}
