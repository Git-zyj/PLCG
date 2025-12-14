/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170497
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170497 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170497
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
    var_12 -= ((/* implicit */unsigned char) max((((/* implicit */int) ((((/* implicit */int) var_4)) < (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (short)16229))))))), (((((/* implicit */_Bool) min((var_6), (((/* implicit */long long int) var_7))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) min((((/* implicit */short) var_5)), ((short)-16228))))))));
    var_13 &= ((/* implicit */signed char) (-(max((((/* implicit */int) var_4)), (((var_1) ? (((/* implicit */int) (short)16229)) : (((/* implicit */int) var_3))))))));
    var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */int) var_2)) & (((/* implicit */int) var_8))))) ? (((((/* implicit */_Bool) (short)-1)) ? (12325101715845011717ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) % (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_3))) & ((-(-8881557023791281145LL)))))))))));
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_4)))) : (((/* implicit */int) (!(((/* implicit */_Bool) 8881557023791281140LL)))))))) ? (min((max((-8881557023791281145LL), (((/* implicit */long long int) (_Bool)1)))), (((((/* implicit */long long int) ((/* implicit */int) var_3))) & (var_6))))) : (((/* implicit */long long int) ((/* implicit */int) var_7)))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                arr_5 [3ULL] = ((/* implicit */unsigned short) arr_4 [i_1] [i_0]);
                arr_6 [i_0] [i_0] |= ((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (max((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_0]))) * (arr_1 [i_0] [i_1]))), (max((var_10), (((/* implicit */unsigned long long int) var_6)))))) : (((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_4 [i_0] [i_1])) / (((/* implicit */int) arr_2 [i_0] [i_0])))) >> (((((/* implicit */int) arr_3 [i_0])) - (98))))))));
            }
        } 
    } 
}
