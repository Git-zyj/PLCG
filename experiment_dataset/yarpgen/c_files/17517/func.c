/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17517
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17517 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17517
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
    /* LoopSeq 2 */
    for (signed char i_0 = 2; i_0 < 23; i_0 += 1) 
    {
        var_19 = ((/* implicit */_Bool) min((1842644879), (-1807343692)));
        var_20 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((min((arr_2 [(unsigned short)6] [5ULL]), (((/* implicit */long long int) -2004962402)))) > (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)0))))))))));
    }
    for (unsigned int i_1 = 0; i_1 < 13; i_1 += 2) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(1577351599)))) || (((/* implicit */_Bool) ((long long int) arr_1 [15ULL])))));
        arr_7 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) arr_3 [i_1])) + (((((/* implicit */_Bool) var_15)) ? (min((((/* implicit */unsigned int) 1790159876)), (4294967282U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_15)))))));
    }
    var_21 = ((/* implicit */int) (signed char)127);
    var_22 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) -20))))) | (((/* implicit */int) (_Bool)0))));
}
