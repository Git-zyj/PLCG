/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189029
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189029 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189029
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
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        arr_3 [i_0] [i_0] |= ((/* implicit */int) ((((/* implicit */_Bool) ((arr_0 [i_0] [i_0]) + (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0])))))) ? (min((((/* implicit */unsigned int) arr_1 [i_0])), (arr_0 [i_0] [i_0]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 4092043572986788872ULL)) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) arr_2 [i_0] [i_0])))))));
        arr_4 [i_0] = ((/* implicit */signed char) arr_2 [i_0] [i_0]);
        /* LoopSeq 2 */
        for (short i_1 = 1; i_1 < 21; i_1 += 2) /* same iter space */
        {
            arr_7 [i_0] [i_0] [i_1] &= arr_1 [i_0];
            arr_8 [i_0] [i_1] = ((/* implicit */signed char) ((long long int) arr_6 [i_0] [i_1] [i_1 + 1]));
            var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) -1592145515675294266LL))) || (((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_1] [i_1 + 4] [i_1])) ^ (((/* implicit */int) arr_6 [i_0] [i_1 - 1] [i_1]))))))))));
        }
        for (short i_2 = 1; i_2 < 21; i_2 += 2) /* same iter space */
        {
            arr_11 [i_2] [i_0] = (((-(arr_0 [i_2 + 2] [i_2 + 1]))) > (min((((arr_0 [i_0] [i_2]) - (arr_0 [i_0] [i_2]))), (((/* implicit */unsigned int) ((arr_10 [i_0] [i_0] [i_2]) >= (var_3)))))));
            arr_12 [i_2] [i_2] = ((/* implicit */int) (((!(((/* implicit */_Bool) max((((/* implicit */short) var_10)), (arr_6 [i_0] [i_2] [i_2])))))) ? ((~(((((/* implicit */unsigned long long int) ((/* implicit */int) var_18))) & (var_9))))) : (max((((/* implicit */unsigned long long int) (_Bool)1)), (arr_10 [i_0] [i_0] [i_2])))));
            var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)47805)) ? (((17961573199699151005ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_2 - 1]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))));
        }
    }
    var_22 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_8)))) & (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (short)0))))) ? (var_9) : (((((/* implicit */_Bool) (signed char)64)) ? (13357856659492481761ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))))));
    var_23 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)44))))) * (((((/* implicit */int) (unsigned short)0)) & (((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)61)) ? (((/* implicit */int) (unsigned char)197)) : (((/* implicit */int) var_8))))) : (((((/* implicit */_Bool) (signed char)-127)) ? (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */unsigned int) -2000745757)) : (873182540U))) : (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (signed char)-117)) : (((/* implicit */int) (short)-19080)))))))));
}
