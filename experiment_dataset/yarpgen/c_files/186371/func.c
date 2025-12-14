/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186371
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186371 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186371
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
    var_20 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) max(((+(((/* implicit */int) (_Bool)1)))), (var_7)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) var_5)) : (3756666385U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (max((538300910U), (((/* implicit */unsigned int) var_7))))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                {
                    var_21 = ((/* implicit */unsigned char) ((unsigned int) (unsigned char)255));
                    var_22 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_0 [i_0] [i_0])), (3756666398U)))) ? (min((((/* implicit */unsigned int) (unsigned char)142)), (3756666398U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (unsigned char)114)))))), (max((538300897U), (((/* implicit */unsigned int) arr_4 [i_0] [i_1] [i_2]))))));
                    var_23 = ((/* implicit */unsigned char) min((max((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)46854))))), (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_2] [i_2]))) : (0ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_2])) ? (((/* implicit */int) arr_4 [i_2] [i_1] [i_0])) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) < (4294967295U)))))))));
                    var_24 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_0 [11LL] [i_2])) & (((/* implicit */int) arr_0 [i_0] [i_1])))))));
                }
            } 
        } 
    } 
}
