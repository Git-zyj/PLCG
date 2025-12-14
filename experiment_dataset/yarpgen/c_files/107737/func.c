/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107737
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107737 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107737
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
    var_17 += ((/* implicit */unsigned int) var_13);
    var_18 = ((/* implicit */unsigned char) max((var_4), ((short)-7291)));
    var_19 = ((/* implicit */unsigned short) var_16);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (signed char i_1 = 3; i_1 < 10; i_1 += 3) 
        {
            {
                var_20 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 16634817323372900632ULL)) ? (((/* implicit */long long int) min((((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) arr_2 [i_1])) : (1048572))), (((/* implicit */int) var_4))))) : (((((/* implicit */_Bool) max((9223372036854775807LL), (((/* implicit */long long int) 844022694U))))) ? (min((-6377094089080374431LL), (((/* implicit */long long int) (unsigned short)65535)))) : (((/* implicit */long long int) ((/* implicit */int) (short)-32761)))))));
                arr_4 [i_1] = ((/* implicit */short) 1013856534);
                var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) (((~(arr_3 [i_1 - 2]))) >= (((((/* implicit */_Bool) arr_3 [i_1 - 1])) ? (arr_3 [i_1 - 3]) : (((/* implicit */int) var_1)))))))));
                var_22 ^= ((/* implicit */signed char) min((((/* implicit */unsigned int) max((min((((/* implicit */int) (_Bool)1)), (2111537079))), (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_1])) && (((/* implicit */_Bool) 89852659)))))))), (2800566185U)));
            }
        } 
    } 
}
