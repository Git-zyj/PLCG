/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110507
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110507 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110507
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
    var_19 = ((/* implicit */long long int) max((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 17651461675217295867ULL)) ? (((/* implicit */int) (short)(-32767 - 1))) : (var_14)))) && (((/* implicit */_Bool) 36028522141057024LL))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) -1)) ? (((/* implicit */int) var_16)) : (var_14)))) ? (((/* implicit */int) ((((/* implicit */_Bool) -936025309450229740LL)) && (((/* implicit */_Bool) (signed char)117))))) : (((/* implicit */int) min(((unsigned short)55937), (((/* implicit */unsigned short) var_9)))))))));
    var_20 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) var_10)) ? ((+(4294967291U))) : (((/* implicit */unsigned int) min((((/* implicit */int) var_2)), (var_14)))))), (((/* implicit */unsigned int) max((((((/* implicit */int) var_17)) << (((((/* implicit */int) var_2)) - (24455))))), (min((((/* implicit */int) var_10)), (var_6))))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 22; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 22; i_1 += 2) 
        {
            {
                var_21 += ((((/* implicit */_Bool) (unsigned short)17388)) ? (((((/* implicit */_Bool) ((unsigned short) -64))) ? (-36028522141057010LL) : (((/* implicit */long long int) ((/* implicit */int) max(((unsigned short)57344), (((/* implicit */unsigned short) (_Bool)1)))))))) : (((/* implicit */long long int) -64)));
                var_22 = ((/* implicit */unsigned char) (((!((!(((/* implicit */_Bool) var_6)))))) ? (max((((/* implicit */long long int) var_8)), (((var_13) ? (var_18) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (-(arr_6 [i_0] [i_0 + 1] [i_0]))))))))));
            }
        } 
    } 
    var_23 -= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (unsigned short)8191)))))) != (((((/* implicit */_Bool) min(((short)21675), (var_7)))) ? (max((((/* implicit */unsigned int) (unsigned short)55912)), (1063732088U))) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_17)))))))));
}
