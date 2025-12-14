/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107886
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107886 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107886
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
    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) 1079076236365869294LL)) || (((/* implicit */_Bool) var_3))));
    var_17 = ((/* implicit */int) ((_Bool) -1079076236365869307LL));
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 13; i_0 += 3) /* same iter space */
    {
        var_18 *= ((/* implicit */unsigned int) (signed char)55);
        arr_2 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) 1079076236365869294LL)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned char)148))));
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 13; i_1 += 3) /* same iter space */
    {
        var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) ((arr_4 [i_1]) ? (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)40712))))) : (arr_0 [i_1]))))));
        arr_6 [i_1] = ((unsigned char) -3755854218560670937LL);
    }
    for (short i_2 = 0; i_2 < 13; i_2 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned int i_3 = 0; i_3 < 13; i_3 += 1) 
        {
            /* LoopSeq 1 */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) max((1079076236365869288LL), (((/* implicit */long long int) min((arr_5 [i_3]), (((((/* implicit */_Bool) arr_14 [0LL] [0LL] [i_4] [0LL])) ? (((/* implicit */int) (unsigned short)24809)) : (((/* implicit */int) (unsigned char)206))))))))))));
                var_21 = min((max((((/* implicit */long long int) arr_5 [i_2])), (min((1079076236365869294LL), (((/* implicit */long long int) var_0)))))), (((/* implicit */long long int) ((((/* implicit */int) arr_14 [i_3] [i_3] [i_4] [i_4])) + (((/* implicit */int) arr_14 [i_3] [i_3] [i_2] [i_3]))))));
                var_22 ^= (~(((/* implicit */int) arr_13 [i_3] [2LL])));
                arr_17 [i_3] [i_3] = ((/* implicit */signed char) ((unsigned int) (~(min((arr_9 [i_4]), (((/* implicit */long long int) arr_7 [i_2])))))));
            }
            arr_18 [i_2] [i_3] [i_3] = ((/* implicit */unsigned int) max((max(((~(2085159194139000657LL))), (((/* implicit */long long int) arr_7 [i_3])))), (((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (short)-20570))) <= (max((((/* implicit */long long int) arr_8 [i_2])), (9223372036854775805LL))))))));
            var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) max((1079076236365869276LL), (((/* implicit */long long int) 1377458369))))) && (arr_8 [i_3])))), (min((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_5 [i_3]))))), (arr_15 [i_3] [i_3] [i_2]))))))));
            arr_19 [i_2] [i_3] [i_2] = ((/* implicit */short) (~(((/* implicit */int) arr_8 [i_2]))));
        }
        var_24 = ((/* implicit */signed char) min((arr_15 [i_2] [i_2] [i_2]), (((/* implicit */long long int) max(((unsigned short)40712), (((/* implicit */unsigned short) arr_8 [i_2])))))));
    }
}
