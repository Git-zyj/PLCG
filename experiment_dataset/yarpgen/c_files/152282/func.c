/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152282
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152282 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152282
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
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                var_19 += ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (arr_5 [i_0] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_2))))) : (arr_5 [i_0] [i_1])));
                var_20 += var_1;
                var_21 = ((/* implicit */unsigned short) min((((/* implicit */long long int) max(((~(((/* implicit */int) var_11)))), (((/* implicit */int) arr_1 [i_0] [i_1]))))), ((-(((((-5793173222567999281LL) + (9223372036854775807LL))) >> (((((/* implicit */int) var_14)) - (50707)))))))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) var_13))))), (((((/* implicit */_Bool) var_2)) ? (7070669658341955577LL) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_12))))) : ((~(((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_4)))))));
    var_23 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */short) var_13)), (min((((/* implicit */short) var_16)), (var_15)))))) ? ((~((((_Bool)1) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_7)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_12)) : (var_0)))) ? (((int) var_9)) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_11))))))));
    var_24 |= ((/* implicit */unsigned int) var_12);
}
