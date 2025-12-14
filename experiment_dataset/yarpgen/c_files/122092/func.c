/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122092
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122092 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122092
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
    var_14 = ((/* implicit */signed char) (-((+(((/* implicit */int) (unsigned short)1664))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 3; i_0 < 16; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */int) var_9)) != (((/* implicit */int) arr_1 [i_0])))))))) && (((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) == (((/* implicit */int) arr_1 [i_0 - 1]))))))))));
        var_15 = ((/* implicit */unsigned char) (~(17719226322501309998ULL)));
        arr_5 [i_0 - 3] [i_0] = ((/* implicit */unsigned short) (-((~((-(((/* implicit */int) var_5))))))));
    }
    var_16 = ((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) var_3)) != (((/* implicit */int) var_10))))) < (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))))))));
    var_17 = ((/* implicit */unsigned char) (+((+(((/* implicit */int) (short)0))))));
}
