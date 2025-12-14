/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140069
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140069 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140069
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
    for (int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                var_16 = ((min((((((/* implicit */_Bool) arr_2 [i_0] [11ULL])) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))), (min((arr_0 [i_0] [i_1]), (((/* implicit */unsigned long long int) (unsigned char)254)))))) + (((/* implicit */unsigned long long int) (+(1534761780)))));
                var_17 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)16857))))) ? (((((/* implicit */_Bool) var_6)) ? (arr_3 [i_0] [i_0] [12]) : (var_5))) : (((/* implicit */unsigned long long int) min((var_14), (((/* implicit */int) arr_2 [i_1] [i_0]))))))) | (((unsigned long long int) ((((/* implicit */_Bool) (unsigned short)34426)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (8585740288ULL))))));
            }
        } 
    } 
    var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) ((((((int) ((((/* implicit */_Bool) var_4)) ? (9223372036854775807ULL) : (var_13)))) + (2147483647))) >> (((var_15) - (3252562932514612130ULL))))))));
    var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_9)))) ? (((/* implicit */int) var_12)) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_4))))))) ? (((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) 0LL)) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))) : (var_9))) : (((/* implicit */unsigned long long int) ((int) var_5))))))));
}
