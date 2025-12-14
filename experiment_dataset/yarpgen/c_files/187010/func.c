/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187010
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187010 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187010
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
    var_14 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(min((3050973023U), (((/* implicit */unsigned int) -182454117)))))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 2; i_0 < 11; i_0 += 3) 
    {
        var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) arr_0 [6U]))));
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) ((var_3) - (((/* implicit */long long int) min((arr_2 [i_0 + 1]), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-1))) == (1443807287U)))))))));
    }
    for (unsigned int i_1 = 0; i_1 < 16; i_1 += 1) 
    {
        arr_6 [i_1] = ((/* implicit */signed char) var_8);
        /* LoopSeq 1 */
        for (long long int i_2 = 0; i_2 < 16; i_2 += 1) 
        {
            var_16 += ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (~(((2044528428U) << (((2851160030U) - (2851160005U)))))))), (min((arr_9 [i_1] [i_1] [i_1]), (arr_9 [i_1] [i_1] [i_2])))));
            var_17 = ((/* implicit */_Bool) (-(((int) (_Bool)0))));
            arr_10 [12U] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_2]))) == (7853185509299600314ULL)));
            /* LoopSeq 3 */
            for (unsigned short i_3 = 4; i_3 < 15; i_3 += 2) 
            {
                var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-36)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-74))) : (2470520336U)))) ? (((((/* implicit */_Bool) arr_11 [i_1] [(_Bool)0] [i_2] [(_Bool)0])) ? (arr_9 [i_3] [i_2] [(_Bool)1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [(short)11]))))))))));
                var_19 = ((/* implicit */unsigned int) (-(7853185509299600314ULL)));
            }
            for (unsigned short i_4 = 2; i_4 < 14; i_4 += 2) 
            {
                var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((((/* implicit */unsigned int) var_1)) - (2851160014U))))));
                var_21 += ((/* implicit */unsigned int) min((min((-1LL), (((/* implicit */long long int) (signed char)-38)))), (((/* implicit */long long int) (signed char)26))));
                arr_15 [i_1] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_13 [i_4 - 2] [i_4 + 1] [i_4 - 2] [i_4 - 1]))))) ? (((((/* implicit */int) arr_13 [i_4 - 2] [i_4 + 2] [i_4 - 2] [i_4 - 1])) * (((/* implicit */int) var_11)))) : (((((/* implicit */int) arr_13 [i_4 + 2] [i_4 + 1] [i_4 + 2] [i_4 - 1])) ^ (((/* implicit */int) arr_13 [i_4 + 1] [i_4 - 2] [i_4 + 2] [i_4 - 2]))))));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 16; i_5 += 4) 
                {
                    for (unsigned long long int i_6 = 0; i_6 < 16; i_6 += 1) 
                    {
                        {
                            arr_21 [i_1] [i_1] [6ULL] [6ULL] [11U] = ((/* implicit */int) (+(arr_20 [i_1] [i_2] [i_4 - 2] [i_5] [i_6])));
                            arr_22 [i_1] [i_2] [i_4 - 1] [i_5] [i_6] = ((/* implicit */short) arr_13 [i_1] [i_1] [i_1] [i_1]);
                            var_22 = ((/* implicit */_Bool) min((((/* implicit */long long int) ((arr_13 [i_4 - 2] [i_4] [i_4 - 1] [i_4]) ? (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) * (var_13))) : (((((/* implicit */_Bool) arr_17 [i_1] [i_1])) ? (arr_12 [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_6])))))))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) min((var_13), (694682806U)))) : (((((/* implicit */_Bool) var_1)) ? (-14LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)8516)))))))));
                            var_23 ^= ((/* implicit */long long int) (~(694682803U)));
                        }
                    } 
                } 
            }
            for (short i_7 = 3; i_7 < 13; i_7 += 3) 
            {
                var_24 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_7 - 3])) ? (((/* implicit */int) arr_5 [i_7 - 1])) : (((/* implicit */int) arr_5 [i_7 + 2]))))) || (((/* implicit */_Bool) ((var_1) & (((/* implicit */int) arr_13 [2U] [2U] [i_2] [i_1]))))));
                arr_25 [i_1] [14ULL] [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) | ((((((_Bool)1) ? (arr_20 [i_1] [i_1] [i_1] [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_1] [2ULL] [i_2] [i_7]))))) * (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)0))) : (3158008704U))))))));
            }
        }
    }
}
