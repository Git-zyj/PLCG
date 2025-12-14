/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114310
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114310 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114310
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
    var_20 += ((((/* implicit */_Bool) var_8)) ? ((~(((((/* implicit */_Bool) var_3)) ? (var_14) : (-1154113525))))) : (((/* implicit */int) var_13)));
    /* LoopSeq 3 */
    for (int i_0 = 2; i_0 < 20; i_0 += 3) 
    {
        var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) 200541922U))));
        var_22 = ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) 200541924U)) ? (200541912U) : (2771450748U)))))) ? (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) 1151069964)) ? (((/* implicit */int) var_7)) : (1151069964)))), (min((((/* implicit */unsigned int) var_16)), (797900409U))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_0 [i_0 + 2])))));
    }
    for (int i_1 = 3; i_1 < 19; i_1 += 4) 
    {
        var_23 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */long long int) var_9)) % (-2419991120598312135LL)))) ? (2419991120598312134LL) : (((/* implicit */long long int) ((((arr_1 [12]) <= (((/* implicit */int) arr_3 [(unsigned short)13])))) ? ((+(arr_1 [i_1]))) : ((~(((/* implicit */int) (unsigned char)32)))))))));
        var_24 *= ((/* implicit */int) (_Bool)1);
        var_25 = ((/* implicit */unsigned char) min(((-(((/* implicit */int) arr_4 [i_1 - 1])))), (((/* implicit */int) arr_3 [(unsigned char)12]))));
        var_26 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_0 [i_1 - 2])) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) var_18))))) - (((/* implicit */unsigned int) (-(arr_0 [i_1 - 3]))))));
    }
    for (unsigned short i_2 = 0; i_2 < 19; i_2 += 3) 
    {
        var_27 = ((/* implicit */unsigned int) arr_0 [i_2]);
        arr_8 [11U] [i_2] = ((/* implicit */_Bool) min((-7080929758353745938LL), (((/* implicit */long long int) max((((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)32))) > (4094425385U)))), (arr_4 [i_2]))))));
        arr_9 [i_2] |= 4094425354U;
    }
}
