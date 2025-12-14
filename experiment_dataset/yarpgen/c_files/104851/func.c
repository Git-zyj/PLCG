/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104851
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104851 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104851
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
    for (short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                var_14 -= ((((/* implicit */unsigned long long int) max((var_1), (((/* implicit */long long int) (unsigned char)27))))) >= ((((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)207))) : (var_0))) / (((/* implicit */unsigned long long int) ((var_12) ? (((/* implicit */int) (unsigned char)49)) : (((/* implicit */int) (unsigned char)208))))))));
                var_15 &= ((/* implicit */unsigned char) ((((var_4) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65519))))) + (((/* implicit */long long int) ((var_11) * (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) 307667477U)))))))))));
            }
        } 
    } 
    var_16 = ((/* implicit */long long int) ((unsigned long long int) ((unsigned int) (-(((/* implicit */int) var_10))))));
    var_17 = ((/* implicit */_Bool) ((int) (+(((/* implicit */int) ((short) (unsigned char)47))))));
    var_18 = (!(((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))))));
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */signed char) ((3645136604U) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)33215)))))), (var_10)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((544843843367314245LL) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))) : (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)49))))))))));
}
