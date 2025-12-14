/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161837
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161837 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161837
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
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */long long int) var_8);
                var_18 = min((((((/* implicit */_Bool) (+(((/* implicit */int) var_3))))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) max((arr_4 [i_1] [i_1] [i_0]), (((/* implicit */unsigned char) var_12))))))), (((((/* implicit */_Bool) var_4)) ? ((~(((/* implicit */int) var_5)))) : (((((/* implicit */int) (unsigned short)14569)) - (((/* implicit */int) var_1)))))));
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */int) (+(var_2)));
                var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */int) arr_4 [i_0] [i_1] [i_1])), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (unsigned short)41541))))))) ? (((/* implicit */int) ((((/* implicit */long long int) (~(((/* implicit */int) var_5))))) != (((long long int) 6015269981136485854ULL))))) : (((/* implicit */int) arr_1 [i_0])))))));
            }
        } 
    } 
    var_20 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~((+(((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (_Bool)1))));
    var_21 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned short)13718)) : (-1711692460))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 10502603794502670818ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_9)))) ? (((/* implicit */int) ((((/* implicit */int) var_6)) != (((/* implicit */int) var_12))))) : (((/* implicit */int) ((((/* implicit */_Bool) (short)-1)) && (((/* implicit */_Bool) var_11)))))))) : (var_16)));
}
