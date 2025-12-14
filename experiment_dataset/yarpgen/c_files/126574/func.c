/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126574
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126574 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126574
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
    var_11 = ((/* implicit */_Bool) (+((-(var_8)))));
    var_12 = ((/* implicit */signed char) var_5);
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (long long int i_2 = 2; i_2 < 16; i_2 += 3) 
            {
                {
                    var_13 = ((/* implicit */_Bool) min((max((((/* implicit */unsigned int) arr_0 [i_2 + 3])), (((((/* implicit */_Bool) var_7)) ? (460769261U) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))), ((+(3834198040U)))));
                    var_14 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_2 [i_2] [i_2])))) ? (((/* implicit */long long int) (-(4294967295U)))) : (((((/* implicit */_Bool) var_4)) ? (var_5) : (arr_2 [i_0] [(signed char)2])))))));
                    arr_8 [i_2] [i_1] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) min(((signed char)11), (var_0)))) ? (3834198062U) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (short)-31172)))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) (_Bool)1))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_2])) : (((/* implicit */int) arr_1 [i_0])))) : (((/* implicit */int) var_9)))))));
                    var_15 = ((/* implicit */signed char) (+(6U)));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */short) ((((/* implicit */int) (unsigned short)39386)) & (((/* implicit */int) (unsigned short)27816))));
}
