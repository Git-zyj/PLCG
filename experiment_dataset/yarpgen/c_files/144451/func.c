/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144451
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144451 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144451
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
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                arr_6 [i_1] = ((/* implicit */_Bool) (((((+(((((/* implicit */long long int) arr_4 [i_1] [i_0])) | (-2051423371891255531LL))))) + (9223372036854775807LL))) >> (((((/* implicit */_Bool) ((int) (_Bool)1))) ? (((/* implicit */int) ((_Bool) (unsigned char)62))) : (((/* implicit */int) max((arr_5 [i_0] [i_0]), (((/* implicit */unsigned short) arr_3 [i_0] [i_0] [i_0])))))))));
                var_11 = ((/* implicit */_Bool) arr_2 [i_0]);
                var_12 = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) (signed char)-102)) ? (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)50738))) * (arr_4 [i_0] [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_0 [i_0]) > (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_1]))))))))));
            }
        } 
    } 
    var_13 = min(((-((~(var_7))))), (max((((((/* implicit */_Bool) (signed char)-102)) ? (var_7) : (var_7))), (((/* implicit */int) (!((_Bool)1)))))));
    var_14 = ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) (unsigned short)50738)) ? (((/* implicit */int) (unsigned char)30)) : (((/* implicit */int) ((_Bool) (unsigned short)63410))))));
    var_15 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_6))))) ? (((((/* implicit */_Bool) (unsigned char)216)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_1)))) : ((+(((/* implicit */int) var_10)))))), ((((+(((/* implicit */int) (signed char)-124)))) % ((+(((/* implicit */int) (signed char)106))))))));
}
