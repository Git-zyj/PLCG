/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17552
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17552 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17552
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
    var_12 = ((/* implicit */unsigned int) min((var_12), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) max((1448512882U), (var_11))))) ? (((/* implicit */long long int) var_0)) : (((long long int) ((((/* implicit */_Bool) 299542273)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_10))))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */unsigned int) (+(299542273)));
                    arr_8 [i_0] [i_1] [i_2] = ((/* implicit */unsigned int) min((((/* implicit */int) (!(((/* implicit */_Bool) 987039282))))), (var_3)));
                    arr_9 [i_1] [i_2] = ((/* implicit */unsigned int) max((min((arr_3 [i_2 + 1] [i_2 + 1] [i_2]), (-987039283))), (var_3)));
                    arr_10 [i_2 + 1] [i_1] [i_0] = ((/* implicit */int) ((((((/* implicit */_Bool) 174942603)) || (((/* implicit */_Bool) -905263852679391076LL)))) ? (((((var_9) || (((/* implicit */_Bool) 299542273)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (987039282) : (((/* implicit */int) var_9))))) : (66584576U))) : (((((/* implicit */unsigned int) var_7)) * (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (arr_4 [i_2 + 1] [i_1] [i_0])))))));
                    arr_11 [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_3)), (4228382719U)))) ? (((((/* implicit */_Bool) arr_3 [i_2 + 1] [i_2 + 1] [i_2 + 1])) ? (4228382719U) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) -640781289))) ? (((/* implicit */int) ((var_9) || (var_2)))) : (var_3))))));
                }
            } 
        } 
    } 
    var_14 = ((((/* implicit */int) max((((unsigned char) 1107613734U)), (((unsigned char) var_7))))) == (((((/* implicit */_Bool) (~(var_6)))) ? (((((/* implicit */_Bool) (signed char)101)) ? (((/* implicit */int) var_2)) : (var_7))) : (var_7))));
    var_15 = (-(var_5));
}
