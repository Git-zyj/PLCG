/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130989
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130989 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130989
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
    for (long long int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        var_11 += ((/* implicit */signed char) min((min((((unsigned char) var_6)), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_10))))))), (((/* implicit */unsigned char) ((((/* implicit */long long int) (+(((/* implicit */int) var_6))))) != (arr_1 [i_0]))))));
        arr_2 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */int) min((((/* implicit */unsigned char) (signed char)-81)), (var_6)))), (min((186341925), (((/* implicit */int) (short)-23928))))))) ? (((/* implicit */long long int) (~((~(((/* implicit */int) (signed char)-89))))))) : ((~(var_9)))));
    }
    /* LoopSeq 1 */
    for (short i_1 = 0; i_1 < 25; i_1 += 4) 
    {
        var_12 = ((/* implicit */signed char) ((short) ((long long int) (~(593840839)))));
        var_13 = ((/* implicit */long long int) ((((/* implicit */int) min(((signed char)-103), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_5)))))))) - (var_7)));
    }
}
