/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17460
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17460 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17460
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
    for (signed char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) var_7)) & (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) == (min((((/* implicit */long long int) (_Bool)0)), (3702875375564465177LL))))))));
        var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) ((unsigned int) (~(((unsigned long long int) var_5))))))));
        var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) arr_0 [i_0]))));
    }
    var_15 = ((/* implicit */signed char) max((-3702875375564465173LL), (((/* implicit */long long int) -2147483639))));
    var_16 = ((((/* implicit */unsigned long long int) -3702875375564465171LL)) / (var_1));
    var_17 = var_7;
    var_18 = ((/* implicit */unsigned short) ((unsigned int) (~(2251751257U))));
}
