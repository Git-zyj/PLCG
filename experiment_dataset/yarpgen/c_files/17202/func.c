/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17202
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17202 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17202
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
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (unsigned char i_1 = 3; i_1 < 11; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */unsigned int) arr_1 [i_0] [i_0]);
                arr_5 [i_0] = ((/* implicit */unsigned short) var_16);
                var_20 -= ((/* implicit */unsigned long long int) min(((-(((/* implicit */int) ((((/* implicit */int) var_16)) == (var_7)))))), (((((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) arr_1 [i_0] [i_1 - 2])))) ? (((/* implicit */int) ((((/* implicit */int) var_8)) > (((/* implicit */int) (unsigned short)1054))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_18)) || (arr_3 [(signed char)0] [i_1]))))))));
                var_21 += arr_1 [i_1] [i_0];
                arr_6 [i_0] [i_0] = ((/* implicit */short) ((signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-92))) / (1873077712U)))) ? ((+(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (signed char)126)))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned char) var_9);
}
