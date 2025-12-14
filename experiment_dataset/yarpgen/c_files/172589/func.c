/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172589
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172589 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172589
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
    var_18 = ((/* implicit */_Bool) var_13);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */signed char) ((long long int) 18446744073709551615ULL));
                var_20 = ((/* implicit */short) (+((-(((/* implicit */int) var_6))))));
                var_21 = ((/* implicit */unsigned int) ((5515715790091375484ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-81)))));
                var_22 = ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_9)), (2071551323U)))) <= (10262797780574147885ULL))))));
                arr_5 [i_0] = ((/* implicit */unsigned long long int) (!((!((!((_Bool)0)))))));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) (+(min((((/* implicit */unsigned long long int) var_13)), (((((/* implicit */_Bool) 839595122378580435LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)16735))) : (var_0))))))))));
    var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) (short)31587)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_7))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)5154)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)96))) : (18446744073709551609ULL)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) var_16)) : (var_14)))))))) : (var_12)));
}
