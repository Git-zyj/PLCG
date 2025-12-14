/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177858
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177858 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177858
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
    var_19 = ((/* implicit */unsigned long long int) ((_Bool) ((unsigned char) ((long long int) var_3))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                var_20 -= ((int) ((((/* implicit */_Bool) (unsigned short)27886)) ? (((/* implicit */int) ((_Bool) (unsigned short)27886))) : (((/* implicit */int) (unsigned short)37649))));
                arr_4 [i_1] [i_0] &= ((/* implicit */unsigned char) (+(((/* implicit */int) ((unsigned char) ((_Bool) arr_3 [i_1]))))));
                var_21 -= ((/* implicit */unsigned short) ((((_Bool) arr_3 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) (unsigned char)105))))))))) : (((((/* implicit */_Bool) ((unsigned char) arr_0 [i_0]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)42766)))))) : (arr_3 [i_1])))));
            }
        } 
    } 
    var_22 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) max((var_12), (((/* implicit */unsigned int) var_10))))) ? ((+(((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) ((short) var_10)))))));
    var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) ((signed char) min((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned short)37649)) : (((/* implicit */int) (unsigned short)579)))), (((var_17) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (unsigned short)27874))))))))));
}
