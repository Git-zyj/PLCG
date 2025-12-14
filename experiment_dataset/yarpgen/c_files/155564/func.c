/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155564
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155564 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155564
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
    var_17 = ((/* implicit */unsigned short) ((short) (-((~(var_9))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (long long int i_2 = 1; i_2 < 9; i_2 += 2) 
            {
                {
                    var_18 = ((/* implicit */short) ((((arr_6 [i_0] [i_1] [i_1] [i_2 + 1]) > (((/* implicit */unsigned long long int) -285961375260373905LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_2] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)2))) : (arr_6 [i_0] [i_0] [i_1] [i_2])))) ? (((/* implicit */unsigned long long int) 2996259501U)) : (min((arr_6 [i_0] [i_0] [i_1] [i_0]), (((/* implicit */unsigned long long int) (unsigned char)164))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 3; i_3 < 7; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 10; i_4 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) (unsigned char)105))));
                                var_20 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_0]))) + (arr_9 [i_0] [i_1] [i_0] [0LL] [i_3 - 2] [i_4]))) > (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2147483636)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (unsigned char)164)))))))) * ((~(((((/* implicit */int) (unsigned char)103)) + (((/* implicit */int) (unsigned char)170))))))));
                                var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_7)) ? (arr_8 [i_1] [i_2] [i_3 - 2] [i_1]) : (4294967295U))), (((/* implicit */unsigned int) max((((/* implicit */int) arr_4 [i_1] [i_2 + 1])), (1665175201))))))) ? (((((/* implicit */_Bool) arr_6 [i_2 - 1] [i_2] [2] [i_3 + 3])) ? (arr_6 [i_2 + 1] [i_2 + 1] [(_Bool)1] [i_3 + 2]) : (arr_6 [i_2 + 1] [i_3] [i_3] [i_3 + 2]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_0 [i_3 - 1]), (((/* implicit */unsigned char) (_Bool)0)))))))))));
                                arr_11 [i_0] [i_4] [i_3 + 1] [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 1927399754)) ? (11693819003768040587ULL) : (((/* implicit */unsigned long long int) -5841705587078437857LL)))) | (((((/* implicit */_Bool) max((((/* implicit */short) (signed char)113)), (arr_1 [i_0] [i_0])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1665175183)) ? (((/* implicit */int) (unsigned char)209)) : (((/* implicit */int) arr_5 [i_0] [i_4]))))) : (max((((/* implicit */unsigned long long int) var_1)), (arr_6 [(unsigned char)9] [i_1] [i_1] [(short)2])))))));
                            }
                        } 
                    } 
                    arr_12 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (unsigned char)109)))) ? (((/* implicit */int) (signed char)3)) : (((/* implicit */int) ((arr_8 [i_0] [i_1] [i_1] [i_0]) != (((/* implicit */unsigned int) -1665175223)))))))) || (((/* implicit */_Bool) (~(((((/* implicit */_Bool) (signed char)-124)) ? (-1665175194) : (((/* implicit */int) var_7)))))))));
                }
            } 
        } 
        var_22 = ((/* implicit */_Bool) (~(((long long int) arr_6 [(short)6] [i_0] [i_0] [i_0]))));
        var_23 ^= ((/* implicit */int) ((min((((long long int) (unsigned char)134)), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned short)29650))))))) * (((((/* implicit */_Bool) ((unsigned char) -2147483644))) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [(unsigned char)0] [i_0]))) : (min((((/* implicit */long long int) arr_4 [(_Bool)1] [i_0])), (var_9)))))));
        /* LoopNest 3 */
        for (unsigned char i_5 = 3; i_5 < 9; i_5 += 4) 
        {
            for (unsigned int i_6 = 0; i_6 < 10; i_6 += 4) 
            {
                for (unsigned short i_7 = 4; i_7 < 9; i_7 += 1) 
                {
                    {
                        arr_20 [i_7] [i_0] [i_0] [i_0] = max((min((8098689434999901568LL), (((/* implicit */long long int) ((short) 8465589969593706177LL))))), (((/* implicit */long long int) (unsigned char)93)));
                        arr_21 [i_6] [i_5] [i_6] [i_7 - 2] &= ((max((((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)35887))))), (min((((/* implicit */long long int) (unsigned char)31)), (var_10))))) - (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_6] [8])) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_6] [i_7])))))) || (((/* implicit */_Bool) (~(var_16)))))))));
                    }
                } 
            } 
        } 
    }
}
