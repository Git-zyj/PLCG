/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136905
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136905 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136905
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (signed char i_2 = 2; i_2 < 20; i_2 += 1) 
                {
                    arr_8 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (-(arr_1 [i_2 - 2])))))))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        arr_12 [i_2 + 1] [i_1] &= ((/* implicit */unsigned int) max((-1LL), (((/* implicit */long long int) max((((/* implicit */int) arr_6 [i_0] [i_1] [i_2 + 1] [i_2 - 1])), (arr_9 [i_0] [i_1] [i_2] [i_2 + 1]))))));
                        var_12 -= ((/* implicit */unsigned char) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_2 - 1]))) - (12679868811043758258ULL)))));
                    }
                    /* vectorizable */
                    for (long long int i_4 = 0; i_4 < 22; i_4 += 4) 
                    {
                        var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) var_9))));
                        /* LoopSeq 2 */
                        for (unsigned int i_5 = 1; i_5 < 21; i_5 += 4) 
                        {
                            arr_19 [i_2] [i_5] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_9 [i_0] [i_5 + 1] [i_2 - 2] [i_5 + 1])) ? (((/* implicit */int) (signed char)-1)) : (arr_9 [i_2] [i_5 + 1] [i_2 - 1] [i_2])));
                            var_14 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (-923236791) : (((/* implicit */int) var_2))));
                            var_15 = ((/* implicit */unsigned char) ((unsigned long long int) (signed char)-111));
                        }
                        for (long long int i_6 = 0; i_6 < 22; i_6 += 4) 
                        {
                            arr_24 [i_0] [0LL] [i_2 + 1] = ((unsigned int) ((((/* implicit */_Bool) 6195570052604293968LL)) || (((/* implicit */_Bool) (unsigned char)209))));
                            arr_25 [i_1] [i_1] [i_1] [i_4] [i_6] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_3 [i_0] [i_0]))));
                        }
                        arr_26 [i_1] [i_1] [i_2] = ((/* implicit */unsigned long long int) (-(((((/* implicit */int) (unsigned char)47)) - (-1)))));
                    }
                }
                var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) (signed char)37))));
                var_17 = min((((/* implicit */long long int) (((-(1244208147U))) >= (((/* implicit */unsigned int) arr_0 [i_0]))))), (arr_10 [i_0] [i_1]));
                var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) min((((/* implicit */long long int) 923236779)), (arr_17 [i_0] [i_0] [i_0] [i_1]))))));
                arr_27 [i_0] [i_1] = ((/* implicit */unsigned char) arr_22 [i_0] [i_0] [i_0] [i_1] [i_0] [21U] [i_1]);
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned short) max((((/* implicit */long long int) var_10)), (min((((/* implicit */long long int) ((582605737U) ^ (3935957720U)))), ((+(1075907305258301387LL)))))));
    var_20 = ((/* implicit */unsigned long long int) var_3);
    var_21 = ((/* implicit */unsigned char) max((max((((/* implicit */unsigned long long int) var_0)), (((var_7) + (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)3))))) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))));
    var_22 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_10))));
}
