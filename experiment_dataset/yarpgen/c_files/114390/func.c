/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114390
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114390 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114390
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
    var_20 = ((/* implicit */unsigned long long int) var_2);
    var_21 = var_11;
    var_22 = ((/* implicit */short) ((((/* implicit */_Bool) ((short) var_1))) ? (((((/* implicit */_Bool) (unsigned short)18999)) ? (14) : (((((/* implicit */_Bool) 12717164170870830181ULL)) ? (186731472) : (((/* implicit */int) (short)8126)))))) : (((/* implicit */int) ((short) min((2283577237371162465ULL), (((/* implicit */unsigned long long int) -8082863269745393836LL))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                arr_4 [i_1] [i_1] = ((/* implicit */short) (-(((unsigned int) (+(var_12))))));
                arr_5 [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)15))))) ? (max((((/* implicit */long long int) (unsigned short)46537)), (-5278111883093040770LL))) : (((/* implicit */long long int) ((/* implicit */int) (short)-30378))))))));
                arr_6 [i_0] [10ULL] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min(((+(((/* implicit */int) (unsigned short)0)))), (var_12)))) ? (((((/* implicit */_Bool) 8315395600335719153LL)) ? (var_16) : (((/* implicit */long long int) 71579100U)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (72057594037927935LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)46537)))))) ? (max((((/* implicit */long long int) (short)-32396)), (35184369991680LL))) : (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)46540)))))))));
                arr_7 [i_0] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)46537)) ? (((/* implicit */long long int) max((arr_3 [i_0] [i_0]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)8118)) ? (((/* implicit */int) (short)-15920)) : (((/* implicit */int) var_0)))))))) : (8082863269745393835LL)));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((signed char) (~(((/* implicit */int) (short)352))))))));
}
