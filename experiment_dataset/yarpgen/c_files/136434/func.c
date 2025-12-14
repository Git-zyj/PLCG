/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136434
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136434 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136434
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
    var_16 = ((/* implicit */long long int) max((var_15), (((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) 5247787093356110961ULL))))))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 3; i_0 < 13; i_0 += 3) 
    {
        var_17 += ((/* implicit */_Bool) min((((unsigned char) min(((_Bool)1), ((_Bool)1)))), (((/* implicit */unsigned char) arr_0 [i_0 - 3]))));
        var_18 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0])) | (((/* implicit */int) ((_Bool) (short)-32763)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) (-(var_14)))) == (((unsigned long long int) arr_1 [15U] [i_0])))))) : (max((((arr_1 [i_0] [i_0]) - (((/* implicit */long long int) ((/* implicit */int) var_12))))), (((var_14) + (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 + 2])))))))));
    }
}
