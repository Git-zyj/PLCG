/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137650
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
    for (signed char i_0 = 2; i_0 < 19; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((((/* implicit */int) var_11)) & (((/* implicit */int) (unsigned short)0)))) : (((/* implicit */int) (unsigned short)2))))) ? (((/* implicit */int) (unsigned char)252)) : (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (unsigned short)14)) : ((~(((/* implicit */int) (unsigned short)2))))))));
        var_17 = ((/* implicit */signed char) (unsigned char)14);
    }
    for (unsigned short i_1 = 0; i_1 < 11; i_1 += 2) 
    {
        var_18 = ((/* implicit */unsigned short) (unsigned char)105);
        arr_9 [i_1] = ((/* implicit */signed char) (unsigned char)19);
        var_19 = ((/* implicit */unsigned char) ((((/* implicit */int) var_8)) & (((/* implicit */int) var_7))));
    }
    /* LoopSeq 1 */
    for (signed char i_2 = 1; i_2 < 17; i_2 += 4) 
    {
        arr_12 [i_2] [i_2] = ((/* implicit */signed char) (~((~((~(((/* implicit */int) var_2))))))));
        var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) min(((~(((/* implicit */int) var_6)))), ((~(((/* implicit */int) (unsigned short)65519)))))))));
    }
}
