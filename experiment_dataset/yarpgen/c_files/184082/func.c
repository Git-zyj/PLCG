/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184082
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184082 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184082
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
    var_16 = ((/* implicit */signed char) ((var_12) + (((((/* implicit */_Bool) (unsigned short)24397)) ? (var_15) : (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)94)))))))));
    var_17 = ((/* implicit */unsigned char) var_4);
    var_18 = ((/* implicit */unsigned char) var_9);
    var_19 = ((/* implicit */signed char) var_15);
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                {
                    var_20 |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_4 [i_0] [(unsigned char)20] [i_0]))));
                    var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) ((((/* implicit */_Bool) ((min((5158282140292006316ULL), (((/* implicit */unsigned long long int) var_3)))) + (((/* implicit */unsigned long long int) var_6))))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_14))) + (var_3))) + (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_7 [i_0] [(short)5])), ((unsigned short)41139)))))))) : (((((/* implicit */_Bool) ((unsigned int) (unsigned char)250))) ? (13288461933417545299ULL) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (_Bool)1)), (-1363568189944263227LL)))))))))));
                    var_22 *= (-(((((/* implicit */_Bool) arr_6 [12U] [i_1] [i_0])) ? (((/* implicit */int) (!(((/* implicit */_Bool) 16380U))))) : (((/* implicit */int) var_7)))));
                }
            } 
        } 
    } 
}
