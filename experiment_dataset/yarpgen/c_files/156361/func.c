/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156361
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156361 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156361
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
    for (unsigned int i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1] [i_0] [i_0])) ? (arr_0 [i_0 - 1]) : (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) || (((/* implicit */_Bool) arr_1 [i_0 - 1] [i_1])))))))) || (((((/* implicit */int) max((((/* implicit */short) (signed char)10)), ((short)20171)))) <= (((/* implicit */int) ((17010711145445135763ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (short)20171))))))))));
                var_17 -= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_0 + 3])) ? (arr_0 [i_0 + 2]) : (((arr_0 [i_1]) % (arr_0 [i_1])))));
                var_18 += ((/* implicit */unsigned int) ((((arr_2 [(signed char)0] [13U] [13U]) + (((/* implicit */long long int) arr_0 [i_0 + 1])))) | (arr_2 [(unsigned char)5] [i_1] [(unsigned char)5])));
            }
        } 
    } 
    var_19 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) max((((17010711145445135770ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) (short)20182))))), (((/* implicit */unsigned long long int) (unsigned char)56))))) ? (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) ((var_10) != (var_12)))) : (((((/* implicit */int) (short)-20171)) & (((/* implicit */int) (unsigned char)161)))))) : (((/* implicit */int) var_15))));
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */int) var_6)) << (((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_15))))) < (max((var_2), (((/* implicit */long long int) var_12)))))))));
    var_21 = ((/* implicit */unsigned long long int) var_7);
    var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) var_10))))), (var_1)))) ? (var_14) : (((/* implicit */unsigned long long int) ((((((/* implicit */long long int) var_11)) < (var_2))) ? (((/* implicit */int) ((var_12) < (((/* implicit */int) var_8))))) : (((/* implicit */int) var_6)))))));
}
