/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184949
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184949 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184949
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
    var_10 = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) + (4281354683U)))) ? (((/* implicit */long long int) max((58720256), (((/* implicit */int) var_5))))) : (var_6))));
    var_11 = ((((/* implicit */_Bool) (signed char)-32)) ? (max((((/* implicit */long long int) max((var_2), (((/* implicit */int) var_7))))), (((long long int) var_2)))) : (max((((/* implicit */long long int) var_3)), (var_6))));
    var_12 = ((/* implicit */short) (+(((((((/* implicit */_Bool) -58720261)) ? (((/* implicit */int) (signed char)-14)) : (((/* implicit */int) (unsigned char)169)))) & (((/* implicit */int) ((unsigned char) (signed char)1)))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                var_13 = ((((/* implicit */_Bool) (signed char)-32)) && (((((/* implicit */_Bool) max((0LL), (((/* implicit */long long int) (signed char)31))))) || (((/* implicit */_Bool) (~(((/* implicit */int) arr_2 [i_0]))))))));
                var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) var_8))));
                arr_5 [i_0] [i_1] = max((max((((/* implicit */long long int) var_5)), (((long long int) (signed char)1)))), (((/* implicit */long long int) 4281354687U)));
            }
        } 
    } 
}
