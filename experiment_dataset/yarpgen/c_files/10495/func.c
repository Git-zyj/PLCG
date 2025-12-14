/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10495
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10495 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10495
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
    var_13 = ((/* implicit */unsigned char) (_Bool)1);
    var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((var_1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_8)))) : (((/* implicit */int) var_3))))) ? (((/* implicit */int) min((var_5), (min(((signed char)87), (((/* implicit */signed char) var_4))))))) : (((/* implicit */int) var_12)))))));
    var_15 = ((/* implicit */signed char) (unsigned char)30);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned char)227)) ? (((/* implicit */int) (signed char)-87)) : (((/* implicit */int) arr_4 [i_0] [(unsigned char)0])))) / (((/* implicit */int) ((((/* implicit */int) arr_2 [i_0])) != (((/* implicit */int) (unsigned char)22)))))))) : (((((/* implicit */_Bool) arr_3 [i_0])) ? (min((arr_1 [i_0]), (((/* implicit */unsigned long long int) (signed char)69)))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)147)))))))));
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned short) max((((((/* implicit */int) arr_0 [i_1] [i_1])) << (((((((/* implicit */int) var_2)) | (((/* implicit */int) var_10)))) - (239))))), ((((!(((/* implicit */_Bool) var_5)))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_8)))) : (((/* implicit */int) max(((unsigned char)50), (((/* implicit */unsigned char) (_Bool)1)))))))));
                arr_6 [i_1] = (unsigned char)135;
            }
        } 
    } 
}
