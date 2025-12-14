/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172678
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172678 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172678
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
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] [i_1] &= ((unsigned int) min((1047190127U), (((/* implicit */unsigned int) min(((_Bool)1), ((_Bool)1))))));
                arr_6 [i_1] [i_0] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) -5239229139630130191LL)) ? (16652674740432181452ULL) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))))))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? ((+(((/* implicit */int) var_7)))) : (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) var_2)) : (var_6))))))));
                var_16 -= ((((/* implicit */_Bool) min((((11U) - (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_3 [i_1] [i_1] [(signed char)11])))))))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_0] [i_1] [i_0]))))) ? (((/* implicit */int) ((unsigned char) -826009328))) : (((/* implicit */int) ((short) arr_1 [11U] [6U]))))) : (((((/* implicit */_Bool) 3247777164U)) ? (min((var_8), (var_6))) : (((/* implicit */int) arr_1 [i_0] [i_1])))));
                var_17 = ((/* implicit */unsigned long long int) ((((_Bool) min((var_15), (((/* implicit */unsigned int) -1196792493))))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) arr_2 [i_0]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_1 [i_0] [i_1])))) : (max((((/* implicit */unsigned int) (unsigned char)34)), (var_15))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) var_14))))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned int) var_8);
}
