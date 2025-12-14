/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111447
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111447 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111447
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
    var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) 2656993159U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (min((7902563429187529588ULL), (4953156262550532893ULL))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned char) (signed char)100)), (((unsigned char) 1115349252)))))))))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0])) << (((/* implicit */int) var_10))))) ? ((~(((/* implicit */int) ((((/* implicit */unsigned long long int) 2656993178U)) <= (18001516199185561822ULL)))))) : (((/* implicit */int) ((_Bool) min((((/* implicit */unsigned long long int) 2656993190U)), (7902563429187529588ULL))))))))));
        arr_2 [i_0] [i_0] = (~(min((7902563429187529588ULL), (((/* implicit */unsigned long long int) 1115349252)))));
        var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) ((((-1115349252) / (1115349252))) / (((/* implicit */int) (signed char)108)))))));
        var_22 ^= ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (short)32767))) - (1271682153U)));
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 15; i_1 += 1) 
    {
        arr_6 [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) var_15)) * (((/* implicit */int) var_18))));
        var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) ((var_6) ^ (arr_4 [i_1]))))));
        var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)15)) ? (((/* implicit */int) (signed char)-26)) : (((/* implicit */int) (unsigned char)1))));
    }
    for (int i_2 = 0; i_2 < 25; i_2 += 1) 
    {
        /* LoopNest 2 */
        for (short i_3 = 2; i_3 < 24; i_3 += 1) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    var_25 ^= ((/* implicit */int) min((13052823138412684035ULL), (((/* implicit */unsigned long long int) 3030388357U))));
                    var_26 = ((/* implicit */short) min((((/* implicit */unsigned int) (_Bool)1)), (150437797U)));
                    var_27 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_7 [i_3 - 1]) >> (((var_1) - (10052534574866447358ULL)))))) ? (((/* implicit */unsigned long long int) max((arr_7 [i_3 - 1]), (((/* implicit */int) var_15))))) : (max((((/* implicit */unsigned long long int) arr_7 [i_3 + 1])), (var_1)))));
                }
            } 
        } 
        arr_15 [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_7 [i_2])))) ? (max((var_1), (((/* implicit */unsigned long long int) var_5)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (var_16) : (-1115349240))))))) ? (((/* implicit */unsigned long long int) (~((~(((/* implicit */int) var_9))))))) : (min((((/* implicit */unsigned long long int) arr_13 [i_2] [i_2] [i_2])), (((((/* implicit */_Bool) 4144529507U)) ? (10544180644522022049ULL) : (((/* implicit */unsigned long long int) 1115349260))))))));
    }
}
