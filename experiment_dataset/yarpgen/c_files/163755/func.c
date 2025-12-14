/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163755
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163755 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163755
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
    var_17 = ((/* implicit */int) ((((/* implicit */unsigned int) ((int) 1693895459))) | (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (max((((/* implicit */unsigned int) (short)8190)), (var_2)))))));
    var_18 = min((var_8), (((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 176395811)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (_Bool)1)))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                var_19 -= ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1]))) % (arr_1 [19ULL])))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1]))) : (10ULL))) : (((/* implicit */unsigned long long int) min((3812772671U), (((/* implicit */unsigned int) (unsigned char)94))))))));
                var_20 = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) 1592918491U))))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (-176395812) : (((/* implicit */int) (_Bool)1))))) ? (max((((/* implicit */unsigned int) var_5)), (var_4))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)40)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_11))))))))));
}
