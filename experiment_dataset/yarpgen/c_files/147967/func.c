/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147967
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147967 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147967
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
    /* LoopSeq 1 */
    for (int i_0 = 1; i_0 < 24; i_0 += 2) 
    {
        var_13 ^= ((/* implicit */unsigned short) ((((/* implicit */int) arr_1 [i_0])) | (((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-124))))))))));
        arr_3 [i_0 - 1] |= ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_0 + 1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-124)))))))) && ((!((!(((/* implicit */_Bool) (signed char)-105)))))));
        arr_4 [i_0] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) (signed char)124)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)238))))));
        arr_5 [i_0 - 1] = ((/* implicit */_Bool) min((((/* implicit */int) (signed char)-50)), (min((((/* implicit */int) (signed char)-125)), (0)))));
    }
    var_14 = ((/* implicit */long long int) var_4);
}
