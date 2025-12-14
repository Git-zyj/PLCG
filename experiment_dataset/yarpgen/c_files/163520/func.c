/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163520
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163520 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163520
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
    for (unsigned char i_0 = 2; i_0 < 9; i_0 += 2) 
    {
        for (unsigned char i_1 = 3; i_1 < 11; i_1 += 1) 
        {
            {
                arr_7 [i_0] [i_0] [7ULL] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-((-(arr_2 [i_0])))))) ? (((((/* implicit */_Bool) ((5115315854954631076LL) - (((/* implicit */long long int) 1048575U))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_4)))) : (var_9))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1)))))))))));
                arr_8 [i_0] [i_0] [i_1 - 1] = ((/* implicit */unsigned int) arr_0 [i_0 - 2]);
                arr_9 [i_1 - 1] [i_1] [i_0 + 1] = ((/* implicit */_Bool) max((((/* implicit */long long int) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (4294967278U))) >= (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0 - 2]))))))))), (((((/* implicit */_Bool) arr_2 [i_0 + 1])) ? (max((var_1), (((/* implicit */long long int) arr_2 [i_0 + 2])))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7))))))))));
                arr_10 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) (-(((((/* implicit */int) ((_Bool) var_10))) + (((/* implicit */int) arr_5 [i_0 + 2]))))));
                arr_11 [i_0 + 1] [i_0 + 1] |= ((((/* implicit */unsigned int) ((/* implicit */int) ((short) (signed char)-32)))) - (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)74)) ? (1829574282U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : ((~(1048558U))))));
            }
        } 
    } 
    var_12 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_11))) > (var_1)));
    var_13 = ((/* implicit */signed char) var_10);
    var_14 = ((/* implicit */unsigned short) (+(((min((var_6), (((/* implicit */long long int) var_0)))) + (((/* implicit */long long int) ((/* implicit */int) var_8)))))));
}
