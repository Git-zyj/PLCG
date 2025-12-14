/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141053
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141053 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141053
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
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (arr_1 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) <= (((/* implicit */int) arr_0 [i_0]))))))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) 0ULL)) ? (281474976710655ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
        /* LoopNest 2 */
        for (signed char i_1 = 3; i_1 < 19; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    var_14 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((18446462598732840956ULL) + (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)102)) - (((/* implicit */int) (signed char)-1)))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446462598732840961ULL)) ? (((((/* implicit */int) arr_6 [i_1])) / (((/* implicit */int) (signed char)63)))) : ((-(((/* implicit */int) arr_4 [i_0] [i_0] [i_2]))))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)8495))) + (max((arr_3 [i_0] [i_1 + 1] [i_0]), (((/* implicit */unsigned long long int) arr_5 [i_2] [i_1] [i_1 - 2] [i_0]))))))));
                    var_15 += ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)54)) + (((/* implicit */int) (_Bool)1))));
                    var_16 = ((/* implicit */unsigned char) max((var_16), ((unsigned char)253)));
                }
            } 
        } 
    }
    var_17 = (_Bool)0;
    var_18 = ((/* implicit */unsigned char) var_9);
}
