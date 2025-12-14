/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158479
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158479 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158479
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
    var_19 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) var_2)), (((unsigned long long int) 2251799813685247LL))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (short i_2 = 2; i_2 < 17; i_2 += 1) 
            {
                {
                    var_20 |= ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned short)19512)), (240U)))) ? (((((/* implicit */_Bool) var_14)) ? (var_4) : (var_0))) : (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)89))) | (670280219U))))))));
                    var_21 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)28)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 670280209U)) ? (((/* implicit */int) var_16)) : (0)))) : (((unsigned int) 4294967292U))))) ? ((((~(arr_8 [i_2]))) % (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)253))))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [(unsigned short)0] [i_1]))));
                    var_22 ^= ((/* implicit */short) min((((((/* implicit */_Bool) arr_1 [(unsigned short)14] [i_0])) ? (((((/* implicit */_Bool) var_18)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)28381))) : (var_10))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_3)))))), (((/* implicit */unsigned long long int) ((((_Bool) arr_5 [i_2] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_2] [i_2 - 1] [(_Bool)1]))) : (((((/* implicit */_Bool) (short)-540)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) : (arr_2 [i_2]))))))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned long long int) min((min(((unsigned short)1), (((/* implicit */unsigned short) (_Bool)0)))), (((/* implicit */unsigned short) var_14))));
}
