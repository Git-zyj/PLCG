/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176242
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176242 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176242
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
    /* LoopNest 3 */
    for (long long int i_0 = 4; i_0 < 11; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    var_16 &= ((/* implicit */signed char) max(((((_Bool)0) ? (((/* implicit */unsigned int) 1009280122)) : (((((/* implicit */_Bool) 536870908U)) ? (3758096388U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))), (((/* implicit */unsigned int) (short)16989))));
                    var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_11), (((/* implicit */int) var_15))))) ? (max((((/* implicit */int) var_7)), (arr_1 [i_0] [i_1]))) : (min((((/* implicit */int) var_14)), (arr_1 [i_0] [i_1])))));
                }
            } 
        } 
    } 
    var_18 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */short) var_12)), (min(((short)-16989), (((/* implicit */short) var_7))))))) ? (min((((/* implicit */int) max((((/* implicit */short) (_Bool)0)), ((short)16969)))), (((((/* implicit */_Bool) 248223243)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_8)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 4550342100912028494LL)) ? (((/* implicit */int) var_10)) : (var_11)))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned char)3)) : (((/* implicit */int) var_14)))) : (((/* implicit */int) max((var_15), (((/* implicit */short) var_1)))))))));
}
