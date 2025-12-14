/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150686
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150686 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150686
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
    var_13 = ((/* implicit */short) max((((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) var_2)) ? (var_4) : (((/* implicit */long long int) -1175393678)))) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) var_8)), ((short)21234))))))), (((/* implicit */long long int) var_10))));
    var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) (~(var_10)))) ? (((/* implicit */unsigned int) var_10)) : (((var_2) / (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))))) | (var_11))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 21; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_4 [i_0 + 1] [i_0])) ? (((((/* implicit */_Bool) arr_3 [i_0 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) (short)-6085)))))) : (((((/* implicit */_Bool) (short)2044)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 - 1]))) : (arr_5 [i_0] [i_1] [i_1]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) arr_3 [i_0])))) || (((/* implicit */_Bool) var_11))))))));
                var_15 = ((/* implicit */signed char) (-(((/* implicit */int) (short)-2044))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) var_2)) : (((var_5) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))))) * (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned short)16384)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (short)2044)))) / (max((((/* implicit */int) (unsigned short)17818)), (393216))))))));
}
