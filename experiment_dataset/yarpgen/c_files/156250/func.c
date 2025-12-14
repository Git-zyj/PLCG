/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156250
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156250 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156250
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
    var_16 = (+(7572316883695620787LL));
    var_17 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) -7572316883695620788LL))))), (((((/* implicit */_Bool) 7572316883695620774LL)) ? (11088883213224112288ULL) : (((/* implicit */unsigned long long int) -7572316883695620778LL))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */_Bool) var_6);
                arr_6 [i_0] [i_0] = ((((/* implicit */_Bool) -7572316883695620774LL)) ? (2618727159622133408LL) : (8796093022207LL));
                arr_7 [9LL] [9LL] [9LL] = ((/* implicit */unsigned char) var_12);
            }
        } 
    } 
    var_18 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-20432)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 7572316883695620777LL)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))) ? (((((/* implicit */_Bool) 0ULL)) ? (var_1) : (((/* implicit */unsigned long long int) -1153924883417577422LL)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_5), (((/* implicit */unsigned short) var_9)))))))) : (((/* implicit */unsigned long long int) max((-1621401315), ((+(-247382204)))))));
}
