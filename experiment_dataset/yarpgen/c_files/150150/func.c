/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150150
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150150 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150150
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
    var_11 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) (+(((/* implicit */int) var_7))))) | (max((4194303LL), (((/* implicit */long long int) (_Bool)1))))));
    var_12 = ((/* implicit */signed char) var_9);
    var_13 = ((/* implicit */signed char) ((short) (-(((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) 11076588709523266570ULL))))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        var_14 = ((/* implicit */signed char) ((short) (-(((/* implicit */int) arr_1 [i_0])))));
        arr_4 [i_0] = (~(7370155364186285045ULL));
    }
    /* vectorizable */
    for (signed char i_1 = 1; i_1 < 22; i_1 += 4) 
    {
        arr_8 [i_1] [i_1] = ((/* implicit */int) (+(7370155364186285046ULL)));
        arr_9 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -539948818439783759LL)) ? (((/* implicit */unsigned long long int) 1495955366U)) : (7370155364186285046ULL)));
    }
    var_15 = ((/* implicit */signed char) var_4);
}
