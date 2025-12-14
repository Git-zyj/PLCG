/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173035
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173035 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173035
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                arr_7 [i_0] [10LL] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [(_Bool)1] [i_1]))) : (var_5))))) >= (((/* implicit */int) (unsigned char)0))));
                var_19 = ((/* implicit */long long int) min((((((/* implicit */int) (_Bool)0)) | (((/* implicit */int) (unsigned char)232)))), (((/* implicit */int) var_16))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned short) min((((((((/* implicit */unsigned long long int) 7361122254731627382LL)) * (var_1))) / (((/* implicit */unsigned long long int) var_8)))), (((/* implicit */unsigned long long int) var_4))));
    var_21 = ((/* implicit */unsigned int) min(((~(((/* implicit */int) min((var_16), (var_16)))))), (min((((/* implicit */int) (!(((/* implicit */_Bool) var_0))))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_16))))))));
    var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) var_0)) ? (var_2) : (((/* implicit */int) var_4)))))) || (((/* implicit */_Bool) var_15))));
}
