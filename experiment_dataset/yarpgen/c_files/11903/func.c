/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11903
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11903 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11903
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
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                var_13 -= ((/* implicit */short) ((int) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-117))))), (max((var_12), (((/* implicit */unsigned long long int) (unsigned short)0)))))));
                arr_5 [i_0] [i_0] = ((max((((/* implicit */int) var_8)), (-306553858))) << (((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) <= (-1131978843)))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) ((short) (-(((/* implicit */int) ((short) var_11)))))))));
    var_15 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) ((((((var_2) + (9223372036854775807LL))) << (((var_12) - (16053945636279427485ULL))))) == (((/* implicit */long long int) ((int) var_7)))))) : (((/* implicit */int) ((short) var_3)))));
    var_16 -= ((/* implicit */unsigned int) var_6);
}
