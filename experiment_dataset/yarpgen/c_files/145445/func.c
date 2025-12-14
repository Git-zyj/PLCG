/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145445
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145445 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145445
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
    var_18 = ((/* implicit */short) var_2);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 4; i_0 < 11; i_0 += 2) 
    {
        var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) ((((/* implicit */int) (!(((arr_1 [i_0 - 3]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)10111)))))))) >= ((+(((/* implicit */int) arr_0 [i_0 + 1])))))))));
        arr_4 [i_0 - 2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)12040))))) ? ((~(((/* implicit */int) ((((/* implicit */int) (unsigned short)65046)) != (((/* implicit */int) var_3))))))) : (((/* implicit */int) var_13))));
    }
}
