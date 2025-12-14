/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132003
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132003 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132003
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
    var_18 = ((/* implicit */int) ((unsigned char) (-(((int) var_10)))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                arr_6 [i_0] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) ((int) arr_3 [i_0] [i_1]))) ? (min((13792852456452866503ULL), (((/* implicit */unsigned long long int) arr_3 [i_0] [13])))) : (((/* implicit */unsigned long long int) min((var_16), (536870911))))))));
                arr_7 [i_1] = ((/* implicit */unsigned char) (~(min((((/* implicit */unsigned int) ((signed char) var_0))), (((unsigned int) var_8))))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) (unsigned char)193)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)44227))) : (4926960850006647086ULL))));
    var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)14390)) ? (((/* implicit */int) (signed char)95)) : (((/* implicit */int) (signed char)-104))))) ? (80723264U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-95)))))))));
    var_21 = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) min((var_14), (((/* implicit */unsigned long long int) 1061294171U))))) ? (((((/* implicit */_Bool) 536870903)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-12080))))) : (((unsigned int) var_15)))));
}
