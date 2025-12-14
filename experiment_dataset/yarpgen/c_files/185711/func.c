/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185711
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185711 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185711
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
    var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) var_3))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (unsigned short i_1 = 3; i_1 < 22; i_1 += 3) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned short i_2 = 0; i_2 < 23; i_2 += 3) 
                {
                    arr_8 [i_0] [i_2] [22] &= ((/* implicit */int) var_9);
                    arr_9 [i_1] [i_1] [i_1 - 2] [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)49)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-45))) : (var_8)))) ? (((((/* implicit */_Bool) arr_6 [i_0] [i_1] [(short)21])) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_11))))) : (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-37))))))) >= (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_1 [i_2])) ? (2422787279U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)61))))) != (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)0)))))))))));
                }
                /* vectorizable */
                for (unsigned int i_3 = 0; i_3 < 23; i_3 += 3) 
                {
                    var_16 = ((((/* implicit */_Bool) (signed char)-45)) ? (-3021724784505299151LL) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_12 [i_1] [i_1] [i_1 - 2])))));
                    arr_13 [i_1] = ((/* implicit */signed char) (+((~(((/* implicit */int) arr_2 [i_0] [i_0]))))));
                }
                arr_14 [i_1] [i_1 - 2] [i_1 - 2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_3 [i_1 - 3]), (((/* implicit */unsigned long long int) var_11))))) ? ((~(((/* implicit */int) var_0)))) : (((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) (signed char)26)))))));
                var_17 = ((/* implicit */_Bool) ((unsigned long long int) min((((/* implicit */unsigned int) (signed char)49)), (((((/* implicit */_Bool) (unsigned short)5)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)1))) : (var_9))))));
            }
        } 
    } 
    var_18 = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((unsigned int) 2013265920))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 3772841403U)) ? (((/* implicit */unsigned long long int) -16777216)) : (28ULL)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-27))) | (var_8))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)53))) : (14477169498836233413ULL)))))));
    var_19 = ((/* implicit */unsigned long long int) var_11);
    var_20 += ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)1)) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)60)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (min((((/* implicit */unsigned long long int) var_1)), (3969574574873318221ULL))))))));
}
