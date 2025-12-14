/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127790
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127790 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127790
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 23; i_0 += 1) 
    {
        for (unsigned int i_1 = 4; i_1 < 23; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */unsigned short) (unsigned char)247);
                var_19 |= ((/* implicit */unsigned int) ((((unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (-1504335648) : (arr_0 [i_0])))) >= (((/* implicit */unsigned long long int) (((-(((/* implicit */int) (unsigned char)0)))) << (((((((/* implicit */_Bool) 15476165919124355120ULL)) ? (2970578154585196495ULL) : (((/* implicit */unsigned long long int) var_7)))) - (2970578154585196490ULL))))))));
            }
        } 
    } 
    var_20 += ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_12)) ? (15476165919124355125ULL) : (15476165919124355102ULL)))))) ? (15476165919124355125ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) 15476165919124355125ULL)) ? (var_1) : (var_17))))))));
}
