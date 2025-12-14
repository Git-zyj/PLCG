/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142887
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
    var_16 = ((/* implicit */unsigned long long int) var_5);
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 3) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_1 [i_0]) ? (((/* implicit */int) (signed char)7)) : (((/* implicit */int) ((unsigned char) arr_0 [2U])))))) ? (arr_0 [10ULL]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) (short)32767))) ? (((/* implicit */int) max((var_11), (((/* implicit */short) arr_1 [i_0]))))) : (((/* implicit */int) var_6))))))))));
        arr_2 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) ((short) arr_1 [i_0]))) * (((/* implicit */int) arr_1 [i_0]))));
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            arr_5 [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((_Bool) ((arr_3 [i_0] [i_1]) ? (((/* implicit */int) (short)-32765)) : (((/* implicit */int) var_15)))))), (var_7)));
            var_18 = ((/* implicit */unsigned char) arr_0 [i_0]);
            arr_6 [17ULL] [i_0] [17ULL] = ((/* implicit */long long int) min((((((/* implicit */_Bool) ((((/* implicit */int) (short)(-32767 - 1))) / (((/* implicit */int) (short)-32758))))) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) arr_1 [i_0])), (arr_4 [i_0]))))));
        }
    }
    for (long long int i_2 = 0; i_2 < 20; i_2 += 3) /* same iter space */
    {
        var_19 = arr_7 [i_2] [i_2];
        arr_10 [i_2] = ((/* implicit */signed char) (((((-9223372036854775807LL - 1LL)) < ((-9223372036854775807LL - 1LL)))) ? ((((-(arr_0 [(short)4]))) | (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (arr_0 [18])));
    }
    for (unsigned char i_3 = 2; i_3 < 19; i_3 += 3) 
    {
        var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (short)32757))))) >> (((arr_8 [i_3 + 1]) + (429478665)))))) : (((((/* implicit */_Bool) arr_9 [(_Bool)1] [i_3])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (signed char)127))))) : (arr_0 [14LL])))));
        var_21 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */int) var_8)), (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_0)) : (arr_8 [i_3 - 1])))))) ? (((/* implicit */int) arr_14 [i_3] [i_3 - 1])) : (((((/* implicit */_Bool) min((4294967274U), (((/* implicit */unsigned int) arr_4 [i_3 - 2]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_13))))) : (((((/* implicit */int) arr_4 [i_3])) + (arr_8 [i_3 - 1])))))));
        var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */long long int) (short)-32739)), (((33554431LL) | (((/* implicit */long long int) ((/* implicit */int) var_8)))))))) && (((/* implicit */_Bool) ((long long int) (!(((/* implicit */_Bool) var_9))))))));
        arr_15 [(short)3] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) ((unsigned char) arr_14 [i_3 + 1] [i_3]))) ? (max((((/* implicit */long long int) arr_13 [i_3])), (arr_11 [i_3 - 2]))) : (((arr_3 [i_3] [i_3]) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255)))))))));
    }
    var_23 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((var_9) == (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) var_10)))))))), (((((/* implicit */unsigned long long int) ((long long int) (_Bool)1))) - (((((/* implicit */_Bool) (unsigned short)8191)) ? (6ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))))));
}
