/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157882
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157882 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157882
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
    var_20 = ((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (var_5) : (((/* implicit */int) var_14))))) <= (((((/* implicit */_Bool) var_12)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1)))))))) ? (max((max((var_7), (((/* implicit */unsigned long long int) var_4)))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_13)), (3767563U)))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) max(((signed char)124), ((signed char)50))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 3; i_0 < 15; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                var_21 -= ((/* implicit */_Bool) min((((/* implicit */unsigned int) ((-707645131) + ((-(707645137)))))), (max((((((/* implicit */_Bool) (signed char)4)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-124))) : (arr_3 [i_0]))), (((/* implicit */unsigned int) ((708209572) >> (((arr_3 [i_1]) - (4276954452U))))))))));
                var_22 = ((/* implicit */unsigned int) (-(max((((/* implicit */int) arr_0 [i_0])), ((~(((/* implicit */int) (signed char)127))))))));
                arr_7 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0 - 3])) ? (((/* implicit */unsigned long long int) 3775411649U)) : (16590948899749555518ULL)))) ? ((+(1055531162664960ULL))) : (((((/* implicit */unsigned long long int) var_2)) - (1855795173959996098ULL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (min((((/* implicit */unsigned long long int) (-(arr_3 [i_1])))), (((((/* implicit */_Bool) (signed char)-50)) ? (10994060166118526681ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)50)))))))));
                arr_8 [i_0] [i_1] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */unsigned long long int) -22)) : (2004953152443091936ULL)))));
            }
        } 
    } 
    var_23 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? (max(((-(var_8))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 7)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (signed char)-1))))))) : (var_4)));
}
