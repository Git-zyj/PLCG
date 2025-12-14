/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136689
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136689 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136689
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
    var_14 ^= ((/* implicit */int) max((((/* implicit */unsigned int) ((((/* implicit */int) max((var_7), (var_2)))) / (((((/* implicit */_Bool) -6270579219742388183LL)) ? (var_4) : (((/* implicit */int) (short)10380))))))), ((~(min((1852148904U), (((/* implicit */unsigned int) var_6))))))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        var_15 *= ((/* implicit */unsigned short) min((min((((/* implicit */unsigned int) ((((/* implicit */int) var_13)) * (((/* implicit */int) var_8))))), (((((/* implicit */unsigned int) ((/* implicit */int) var_5))) * (2442818423U))))), (((/* implicit */unsigned int) arr_1 [1U]))));
        arr_3 [(signed char)14] = ((/* implicit */signed char) max((((((/* implicit */_Bool) (short)26660)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)96)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_8))))) : (((((/* implicit */_Bool) arr_0 [(unsigned short)8])) ? (-9223372036854775788LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)135))))))), (((/* implicit */long long int) min((((/* implicit */short) (!(((/* implicit */_Bool) (short)-10380))))), (var_5))))));
        arr_4 [i_0] = ((/* implicit */unsigned long long int) min((1852148904U), (((/* implicit */unsigned int) (short)2))));
    }
    for (signed char i_1 = 3; i_1 < 18; i_1 += 3) 
    {
        var_16 ^= ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((arr_5 [20]) ? (((((/* implicit */int) arr_6 [0U])) ^ (((/* implicit */int) arr_5 [(signed char)20])))) : (((arr_5 [(signed char)6]) ? (((/* implicit */int) (signed char)52)) : (((/* implicit */int) arr_6 [(_Bool)1]))))))), (min((max((((/* implicit */unsigned int) (signed char)-38)), (1825969403U))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_6 [14U])) & (((/* implicit */int) (unsigned char)135)))))))));
        var_17 &= ((/* implicit */unsigned char) (_Bool)1);
        arr_7 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) arr_5 [i_1])) : ((+(((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))))));
        arr_8 [i_1] [i_1] = ((/* implicit */unsigned short) min((((((4650294268164567747LL) == (((/* implicit */long long int) ((/* implicit */int) (signed char)-67))))) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) max(((short)-30346), (((/* implicit */short) arr_6 [i_1]))))))), ((-(((/* implicit */int) (_Bool)1))))));
    }
    for (long long int i_2 = 0; i_2 < 21; i_2 += 3) 
    {
        var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) ((long long int) arr_11 [i_2] [i_2])))) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_5 [(_Bool)0])) / (((/* implicit */int) arr_6 [(_Bool)1]))))), (329333580140103262ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_3 = 2; i_3 < 20; i_3 += 4) 
        {
            arr_16 [i_3 - 1] [i_2] [(unsigned char)13] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483647ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_3] [i_2] [(unsigned short)4]))) : (arr_9 [i_2] [i_2])))) || (((/* implicit */_Bool) arr_9 [i_3 - 1] [i_3 + 1]))));
            var_19 = ((/* implicit */signed char) (-(((/* implicit */int) (short)10393))));
        }
    }
}
