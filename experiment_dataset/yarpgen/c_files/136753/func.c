/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136753
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136753 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136753
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        var_19 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned int) ((arr_2 [i_0]) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) var_8))))) : (((arr_2 [i_0]) ? (((/* implicit */unsigned int) ((/* implicit */int) var_18))) : (3516265446U))))))));
        var_20 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))) <= (778701861U))))) | (((((/* implicit */_Bool) 11899901592132963176ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)7324))) : (3516265442U)))));
    }
    var_21 = ((/* implicit */int) ((max((((var_12) - (7085657241310948802LL))), (((/* implicit */long long int) 3516265446U)))) < (((/* implicit */long long int) max((((/* implicit */unsigned int) ((((/* implicit */int) var_10)) != (((/* implicit */int) var_17))))), (3516265446U))))));
    var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) ((778701865U) <= (778701867U))))));
}
