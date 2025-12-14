/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135238
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135238 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135238
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 3; i_1 < 9; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */int) var_5);
                arr_6 [i_0] [i_0] [i_1] = ((/* implicit */signed char) ((short) (+(((/* implicit */int) arr_2 [i_0])))));
                var_21 *= ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) min((arr_5 [i_1 + 1] [(_Bool)1] [(_Bool)1]), (((/* implicit */signed char) var_8))))) : (((/* implicit */int) arr_4 [i_0] [i_1 + 1]))))));
                var_22 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)0)) ? (((((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [i_0] [i_1]))))) ? (((/* implicit */int) arr_5 [i_0] [i_1 - 3] [i_1 - 2])) : (((/* implicit */int) (unsigned short)62627)))) : (((/* implicit */int) ((short) ((-1LL) ^ (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_0] [0ULL])))))))));
                var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) min((var_7), (((/* implicit */long long int) var_17)))))) || (((/* implicit */_Bool) ((long long int) min((((/* implicit */unsigned int) arr_5 [i_1 + 2] [i_1] [i_0])), (arr_1 [i_0] [5ULL])))))));
            }
        } 
    } 
    var_24 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) var_1)) : (16827707609588887575ULL)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) -557316559)) ? (((/* implicit */unsigned int) -1)) : (var_19)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_4)))) : ((+(var_19)))))));
    var_25 = ((/* implicit */unsigned char) var_12);
    var_26 = ((/* implicit */int) var_7);
}
