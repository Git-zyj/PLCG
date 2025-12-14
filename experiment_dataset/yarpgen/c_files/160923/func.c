/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160923
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160923 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160923
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
    var_20 ^= ((var_1) / (((((/* implicit */_Bool) (unsigned char)73)) ? (((/* implicit */int) (unsigned short)10077)) : (-1716302590))));
    var_21 = ((((/* implicit */int) var_5)) - (((var_10) ^ (((/* implicit */int) ((var_2) > (((/* implicit */int) (short)25427))))))));
    var_22 = ((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)48)) - (((/* implicit */int) (unsigned short)10072))))) ? (((/* implicit */int) (short)25425)) : (((/* implicit */int) (short)25426))))) / (((((((/* implicit */_Bool) (unsigned short)10077)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-25426))))) * (((/* implicit */unsigned int) ((/* implicit */int) (short)-25427))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                arr_5 [(unsigned char)9] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_3 [i_0] [i_0] [i_0]), (((/* implicit */unsigned int) ((signed char) var_6)))))) ? (((unsigned long long int) (short)25423)) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) (signed char)-36)) : (arr_4 [i_1]))))));
                arr_6 [i_0] [i_0] [i_1] = ((/* implicit */unsigned int) arr_4 [i_0]);
                arr_7 [i_1] [i_0] [i_0] = ((/* implicit */signed char) (!(var_3)));
            }
        } 
    } 
    var_23 = ((/* implicit */int) 708663655U);
}
