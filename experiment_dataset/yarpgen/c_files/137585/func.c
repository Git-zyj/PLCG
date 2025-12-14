/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137585
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137585 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137585
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
    var_18 = ((/* implicit */_Bool) var_1);
    var_19 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_7))));
    var_20 ^= ((/* implicit */long long int) max((((/* implicit */int) var_10)), ((~(((/* implicit */int) (short)-23190))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_21 |= ((/* implicit */short) (~(((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_6))) - (arr_2 [(unsigned short)2] [i_2]))) > (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_2] [i_0]))))))));
                    arr_9 [(unsigned short)2] [i_1] [i_2] = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) (~(((/* implicit */int) min(((signed char)0), ((signed char)-1))))))), ((-(((((/* implicit */_Bool) var_6)) ? (arr_2 [i_0] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_14)))))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) max((((/* implicit */short) (unsigned char)162)), ((short)-1)))) : (((((/* implicit */int) (short)-7)) + (((/* implicit */int) var_11))))))) ? ((+(((var_3) + (16963490465661958462ULL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (var_16) : (var_13))))));
}
