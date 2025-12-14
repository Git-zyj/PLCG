/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176007
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176007 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176007
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
    var_20 = ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_12)) : (var_18))), (((/* implicit */int) var_12))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)45)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (signed char)14))))) : (var_6));
    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_13)) ? ((+(((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_1)))))) : (((/* implicit */int) var_19))));
    var_22 = ((/* implicit */signed char) -475365415);
    var_23 = ((/* implicit */unsigned short) ((((((/* implicit */long long int) ((/* implicit */int) (signed char)33))) != (((((/* implicit */_Bool) (signed char)-15)) ? (-3102627099303962634LL) : (((/* implicit */long long int) -2147483631)))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_16)) && (((/* implicit */_Bool) var_0)))))) + ((~(var_6))))) : (((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)182))) > (9223372036854775808ULL))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (short)4586)))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                arr_4 [i_1] [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0])) ? (arr_0 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)120)))))) ? (((/* implicit */unsigned long long int) var_2)) : (9223372036854775795ULL)));
                /* LoopSeq 1 */
                /* vectorizable */
                for (long long int i_2 = 0; i_2 < 16; i_2 += 1) 
                {
                    arr_7 [i_2] [i_1] = ((/* implicit */int) (((!(((/* implicit */_Bool) 2644104546U)))) ? (((/* implicit */long long int) ((/* implicit */int) ((var_9) < (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))) : (((((/* implicit */long long int) -475365425)) % (arr_3 [9])))));
                    arr_8 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_2])) % (((var_16) << (((((arr_3 [i_0]) + (691881474600005100LL))) - (9LL)))))));
                    var_24 += ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-81)) ? (((((/* implicit */int) (unsigned char)205)) << (((9223372036854775799ULL) - (9223372036854775785ULL))))) : (((/* implicit */int) (short)(-32767 - 1)))));
                }
                var_25 = ((/* implicit */unsigned short) arr_2 [i_0]);
            }
        } 
    } 
}
