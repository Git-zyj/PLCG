/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109743
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109743 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109743
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
    var_15 = min(((-(((/* implicit */int) var_10)))), (((((/* implicit */_Bool) ((long long int) var_9))) ? ((~(((/* implicit */int) var_1)))) : (((var_0) & (((/* implicit */int) var_11)))))));
    var_16 = ((/* implicit */unsigned short) ((var_6) ? (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) var_8))))) >> (((max((var_12), (((/* implicit */unsigned int) var_14)))) - (3575387162U)))))) : (max((((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_3))))), (min((-5965085281256611651LL), (((/* implicit */long long int) -174462023))))))));
    var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) var_7))));
    /* LoopNest 3 */
    for (signed char i_0 = 3; i_0 < 13; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    var_18 = ((/* implicit */signed char) min((((unsigned int) arr_2 [i_0 - 2])), (((/* implicit */unsigned int) ((((/* implicit */int) var_1)) | (((/* implicit */int) arr_2 [i_0 + 3])))))));
                    var_19 = max((((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_11)), (arr_6 [i_0] [i_1] [i_1])))) ? (min((var_7), (((/* implicit */unsigned long long int) (unsigned char)111)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_1])) ? (-5965085281256611651LL) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0])))))))), (((/* implicit */unsigned long long int) ((var_5) || (((/* implicit */_Bool) (unsigned short)46599))))));
                }
            } 
        } 
    } 
    var_20 &= ((/* implicit */int) var_3);
}
