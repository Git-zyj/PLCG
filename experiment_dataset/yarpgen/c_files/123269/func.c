/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123269
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123269 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123269
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
    /* LoopSeq 3 */
    for (unsigned short i_0 = 1; i_0 < 17; i_0 += 1) 
    {
        arr_2 [i_0 + 3] [i_0] = ((/* implicit */long long int) (unsigned char)252);
        arr_3 [(unsigned char)18] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_0])) || (((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)126)) || (((/* implicit */_Bool) 0U))))), (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (unsigned char)4)) : (((/* implicit */int) (unsigned char)4)))))))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 10; i_1 += 1) 
    {
        arr_7 [i_1] [i_1] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-120))) : (arr_1 [i_1])));
        var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_1])) ? ((~(7217080734393116556LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 87905449)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [7LL] [i_1]))) : (var_1))))));
        arr_8 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (-5251209072343652346LL) : (((/* implicit */long long int) arr_5 [i_1]))))) ? (((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) (unsigned char)72)) : (((/* implicit */int) var_14)))) : (((((/* implicit */int) (unsigned short)14400)) | (((/* implicit */int) (short)1057))))));
        arr_9 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((((/* implicit */_Bool) var_0)) ? (arr_1 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1] [i_1]))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 6621983008792310670LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-32))) : (2965907930U))))));
        arr_10 [i_1] [8] = ((/* implicit */int) (signed char)(-127 - 1));
    }
    /* vectorizable */
    for (signed char i_2 = 4; i_2 < 11; i_2 += 1) 
    {
        var_16 = ((/* implicit */unsigned int) max((var_16), (((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) -1967343260)) ? (1696040971U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)103))))) : (31U)))));
        arr_13 [i_2] [i_2 - 3] = ((/* implicit */unsigned long long int) (((+(((/* implicit */int) arr_11 [i_2 - 4] [i_2])))) | (((/* implicit */int) (unsigned char)67))));
        var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 22800716)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)252))) : (arr_1 [i_2 + 1]))))));
        var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) ((((/* implicit */int) arr_12 [i_2 - 1])) / (((/* implicit */int) arr_12 [i_2 - 1])))))));
    }
    var_19 = var_7;
    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) 268435456U)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (((((/* implicit */_Bool) max(((unsigned char)124), ((unsigned char)225)))) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (((((/* implicit */_Bool) var_11)) ? (-5913028719040771714LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)0)))))))));
}
