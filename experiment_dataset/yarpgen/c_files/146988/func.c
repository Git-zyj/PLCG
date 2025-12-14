/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146988
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146988 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146988
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
    var_13 = ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)0))))) == (6517477699407933162ULL))) ? (min((((/* implicit */long long int) var_11)), (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) / (var_8))))) : (((/* implicit */long long int) ((/* implicit */int) var_5)))));
    var_14 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)254)) ? (((/* implicit */unsigned long long int) ((((-8496304175522941813LL) - (var_4))) / (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), (var_2)))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned char)131)) : (((/* implicit */int) (short)-6658))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned short)0), (((/* implicit */unsigned short) (_Bool)1)))))) : (((var_5) ? (var_7) : (((/* implicit */unsigned long long int) -8496304175522941833LL))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                var_15 *= ((/* implicit */long long int) ((((/* implicit */_Bool) (+((+(var_4)))))) ? (((((/* implicit */_Bool) arr_3 [i_0] [8LL])) ? (arr_5 [i_0 - 1]) : ((+(arr_5 [(unsigned char)2]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_10))))));
                var_16 ^= ((/* implicit */unsigned long long int) arr_6 [i_0 - 1] [i_1]);
                var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_3 [i_0 - 1] [(_Bool)1]) / (arr_3 [i_0 - 1] [14U])))) ? (((/* implicit */int) ((signed char) (unsigned short)0))) : (((/* implicit */int) ((arr_3 [i_0 - 1] [i_0 - 1]) == (arr_3 [i_0 - 1] [i_1])))))))));
            }
        } 
    } 
}
