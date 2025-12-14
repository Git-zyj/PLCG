/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106316
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106316 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106316
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
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 15; i_0 += 4) 
    {
        for (unsigned char i_1 = 3; i_1 < 14; i_1 += 2) 
        {
            for (int i_2 = 1; i_2 < 13; i_2 += 4) 
            {
                {
                    var_18 += ((/* implicit */short) min((((((/* implicit */_Bool) ((((((/* implicit */int) var_5)) + (2147483647))) >> (((/* implicit */int) (unsigned char)3))))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)10647))) >= (11401417598826136763ULL)))))), (((/* implicit */int) ((max((var_2), (((/* implicit */long long int) var_13)))) > (((/* implicit */long long int) ((/* implicit */int) (unsigned short)53062))))))));
                    arr_6 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (-5895718542374498600LL) : (((/* implicit */long long int) var_12))))), (var_17))))));
                    var_19 = ((/* implicit */long long int) ((((/* implicit */int) var_14)) | (((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_1 - 2] [i_2 + 3])) || (((/* implicit */_Bool) arr_2 [i_0 - 1])))))));
                }
            } 
        } 
    } 
    var_20 += ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_16))));
    var_21 = ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) (short)-20862)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-20857))) : (0LL))) >= (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))))) || (((/* implicit */_Bool) var_0))));
    var_22 = ((/* implicit */long long int) var_8);
    var_23 = ((/* implicit */int) max(((short)20860), (var_13)));
}
