/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136740
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136740 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136740
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((max((5871316317641409674LL), (((/* implicit */long long int) arr_0 [i_0])))) - (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
        arr_5 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) >= (((/* implicit */int) min((var_7), (((/* implicit */unsigned char) (_Bool)1)))))))) : (max((((/* implicit */int) var_13)), (arr_0 [i_0])))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 1) /* same iter space */
    {
        arr_8 [i_1] [i_1] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)13977))) : (((((/* implicit */long long int) ((/* implicit */int) var_12))) / (7416868794281855393LL)))))), (((((/* implicit */_Bool) max((576460748008456192LL), (((/* implicit */long long int) arr_1 [i_1]))))) ? (((/* implicit */unsigned long long int) (((_Bool)1) ? (arr_0 [i_1]) : (((/* implicit */int) var_7))))) : (((((/* implicit */_Bool) 9901535652428560680ULL)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0)))))))));
        arr_9 [2LL] [i_1] = ((/* implicit */int) (_Bool)1);
    }
    var_19 &= ((/* implicit */unsigned int) (((!((_Bool)1))) ? (((/* implicit */int) var_8)) : (((((/* implicit */int) ((-7587637029992754382LL) <= (((/* implicit */long long int) ((/* implicit */int) var_12)))))) >> (((/* implicit */int) var_3))))));
    /* LoopSeq 1 */
    for (unsigned int i_2 = 1; i_2 < 17; i_2 += 2) 
    {
        var_20 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_11 [i_2 + 1]))));
        var_21 -= var_3;
    }
    var_22 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((var_2) ? (((/* implicit */int) (unsigned short)36639)) : (((/* implicit */int) (unsigned short)7680))))), (((((/* implicit */_Bool) (signed char)-4)) ? (((1668575507290086795ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (2ULL)))));
    var_23 = ((/* implicit */signed char) ((unsigned long long int) (-(((/* implicit */int) (!(var_3)))))));
}
