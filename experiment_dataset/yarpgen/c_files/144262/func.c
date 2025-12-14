/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144262
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144262 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144262
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
    var_18 = ((/* implicit */unsigned char) var_6);
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) % (((((/* implicit */_Bool) (~(6128325399590921843ULL)))) ? (max((((/* implicit */unsigned int) var_1)), (3994707584U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))));
    var_20 = ((/* implicit */int) var_3);
    var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (signed char)-29)) : (((/* implicit */int) var_1))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)26))) | (var_0)))))) ? (((/* implicit */int) var_8)) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_15))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 19; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_1] = ((/* implicit */signed char) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0 + 2] [i_0] [i_1]))) : (3739182035U)))) ? (((/* implicit */int) arr_0 [i_0 - 1] [i_1])) : (((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)0))))))), ((((_Bool)0) ? (555785269U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)101)))))));
                var_22 = ((/* implicit */unsigned long long int) ((int) (_Bool)1));
                var_23 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-12421))))), (min((((/* implicit */unsigned long long int) arr_1 [i_0])), (arr_5 [i_1]))))))));
            }
        } 
    } 
}
