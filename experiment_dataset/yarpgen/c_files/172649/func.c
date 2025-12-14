/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172649
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172649 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172649
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
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */int) ((short) 338984907));
        var_17 = ((/* implicit */unsigned char) 1071644672U);
        arr_5 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) (unsigned char)19)) > (((/* implicit */int) (short)-11870))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 10; i_1 += 4) 
    {
        var_18 = ((/* implicit */int) (((-(((/* implicit */int) (unsigned char)19)))) < (((((/* implicit */_Bool) -1)) ? (((/* implicit */int) (short)-11870)) : (((/* implicit */int) var_3))))));
        arr_8 [i_1] = ((unsigned char) 338984900);
    }
    var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((_Bool) -338984908)))));
    var_20 = ((/* implicit */unsigned char) (~(((/* implicit */int) (short)14987))));
    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (short)-23342)) ? (((/* implicit */int) (short)-23332)) : (689787332))), (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) 2147483647)) : ((+((+(3732968867U)))))));
}
