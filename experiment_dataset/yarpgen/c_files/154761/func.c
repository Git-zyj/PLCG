/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154761
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154761 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154761
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
    var_18 = ((/* implicit */short) max((((/* implicit */int) (unsigned char)236)), ((+(((((/* implicit */int) (unsigned char)222)) + (((/* implicit */int) (unsigned char)20))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                var_19 ^= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((((/* implicit */int) var_13)) <= (((/* implicit */int) arr_1 [i_1])))) ? (((/* implicit */int) var_11)) : (((var_14) ? (((/* implicit */int) (unsigned short)34542)) : (((/* implicit */int) var_7)))))))));
                var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) var_0))));
                arr_8 [i_0] [i_0] [(unsigned char)1] = ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */int) max((var_10), (arr_6 [i_0] [i_0] [i_0])))) >= (((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_10)))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */long long int) var_16);
    var_22 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)19))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_5)) < (((/* implicit */int) var_12)))))) : (min((((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned char)171))))), (max((((/* implicit */long long int) var_13)), (var_17)))))));
    var_23 = ((/* implicit */unsigned char) max((max((((/* implicit */int) var_10)), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))), (((var_12) ? (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_6)))) : (((/* implicit */int) var_1))))));
}
