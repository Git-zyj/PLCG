/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107969
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107969 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107969
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
    var_17 = ((/* implicit */unsigned int) var_0);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                arr_5 [i_1] = ((/* implicit */int) var_6);
                arr_6 [1LL] [i_1] [1LL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (34359738367ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_1])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_4 [i_0] [i_0] [i_1])))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_1] [i_0]))) : (((((/* implicit */_Bool) ((short) arr_2 [16]))) ? (((var_11) << (((((/* implicit */int) (unsigned short)60304)) - (60268))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_0 [i_1])))))))));
                var_18 *= ((/* implicit */unsigned short) (-(max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (unsigned short)7168)) : (((/* implicit */int) (unsigned short)5242))))), ((-(1217013396540496846ULL)))))));
            }
        } 
    } 
    var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) ((((/* implicit */_Bool) ((max((4294967275U), (((/* implicit */unsigned int) var_15)))) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) var_13))))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_9))))));
    var_20 = var_8;
    var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_6))))))))) : (max((var_0), (var_8)))));
}
