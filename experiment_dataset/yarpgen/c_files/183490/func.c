/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183490
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183490 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183490
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
    var_15 = ((/* implicit */unsigned char) var_10);
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    arr_11 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */unsigned char) ((unsigned long long int) (~(3431484938U))));
                    arr_12 [(unsigned short)3] [i_1] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) (signed char)3))) ? (((/* implicit */unsigned long long int) max((1U), (((/* implicit */unsigned int) arr_3 [i_1] [i_1]))))) : (var_12)))) ? (min((3431484952U), (((/* implicit */unsigned int) arr_7 [i_1] [i_1] [i_1])))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_2 [i_2]))))));
                    arr_13 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((0ULL) % (max((17267643016443451378ULL), (((/* implicit */unsigned long long int) 863482357U))))))) ? (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned short)14)))) : (((/* implicit */int) ((arr_3 [i_0] [i_1]) != (((/* implicit */int) var_0)))))));
                }
            } 
        } 
        arr_14 [i_0] = ((/* implicit */_Bool) max((var_4), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_9 [i_0] [i_0] [i_0])) : (((/* implicit */int) ((_Bool) arr_9 [i_0] [i_0] [i_0]))))))));
    }
    /* vectorizable */
    for (unsigned int i_3 = 0; i_3 < 19; i_3 += 2) 
    {
        arr_19 [i_3] |= ((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? (arr_1 [i_3]) : (((/* implicit */int) (_Bool)0))));
        arr_20 [(short)6] = ((/* implicit */signed char) ((((/* implicit */int) var_0)) != (((int) arr_5 [(unsigned char)9] [i_3]))));
        var_16 = ((/* implicit */int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)0)) != (-2030497338))))) : (arr_6 [i_3] [4ULL])));
    }
}
