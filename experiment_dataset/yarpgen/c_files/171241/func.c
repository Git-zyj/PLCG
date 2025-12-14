/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171241
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171241 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171241
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
    var_18 = ((/* implicit */unsigned int) var_1);
    var_19 = var_13;
    var_20 = ((/* implicit */short) var_12);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (unsigned char i_1 = 3; i_1 < 20; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~((+(arr_3 [(unsigned short)2] [i_1] [i_1])))))) ? (((/* implicit */unsigned long long int) max((((unsigned int) var_2)), (((((/* implicit */_Bool) (unsigned short)11)) ? (arr_2 [i_0] [(unsigned short)7] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0])))))))) : (((((((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) + (16806173712373066618ULL))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (var_5) : (((/* implicit */int) var_13)))))))));
                arr_6 [i_0] [(unsigned short)1] [i_1] = ((/* implicit */short) min((((((/* implicit */_Bool) 1640570361336484997ULL)) ? (var_7) : (((/* implicit */unsigned int) -716004972)))), (((/* implicit */unsigned int) (-(arr_3 [i_1 - 3] [i_1 - 3] [i_1 + 1]))))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */int) ((short) 8U))), ((~(((/* implicit */int) var_17))))))) ? (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_0)))), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)88)))))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_11)))) + (max((((/* implicit */unsigned long long int) var_6)), (4375410413130518437ULL)))))));
}
