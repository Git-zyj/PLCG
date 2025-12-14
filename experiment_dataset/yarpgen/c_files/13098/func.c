/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13098
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13098 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13098
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
    var_15 = ((/* implicit */unsigned int) var_13);
    var_16 &= ((/* implicit */unsigned char) (+(((/* implicit */int) (((-(((/* implicit */int) (_Bool)1)))) < (((/* implicit */int) ((((/* implicit */int) var_6)) != (((/* implicit */int) (_Bool)1))))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (unsigned int i_2 = 2; i_2 < 16; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (long long int i_3 = 1; i_3 < 15; i_3 += 4) 
                    {
                        arr_12 [i_2] [i_1] [i_0] &= ((/* implicit */int) arr_2 [(_Bool)1]);
                        arr_13 [i_3 - 1] [i_0] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_8 [(_Bool)1] [i_3 - 1])) ? (((/* implicit */int) ((unsigned char) (_Bool)1))) : (((/* implicit */int) min((var_8), (((/* implicit */short) ((((/* implicit */unsigned long long int) arr_8 [5U] [i_3 - 1])) >= (var_3)))))))));
                        /* LoopSeq 3 */
                        for (short i_4 = 0; i_4 < 18; i_4 += 3) 
                        {
                            var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) var_10))));
                            arr_17 [i_0] [(signed char)15] [i_2] [i_3] [i_0] [9U] [i_0] = ((/* implicit */unsigned int) arr_2 [i_2 - 1]);
                        }
                        for (long long int i_5 = 1; i_5 < 16; i_5 += 1) /* same iter space */
                        {
                            var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(arr_5 [i_0] [10U] [i_2 - 1] [i_3])))) ? (arr_3 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1)))));
                            var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(var_0)))) ? (((/* implicit */int) max((arr_1 [i_2 + 2]), (arr_1 [i_2 + 2])))) : (((/* implicit */int) ((_Bool) arr_1 [i_2 + 1]))))))));
                        }
                        for (long long int i_6 = 1; i_6 < 16; i_6 += 1) /* same iter space */
                        {
                            arr_22 [(short)2] [i_6] [i_2] [i_3] [i_0] = ((arr_8 [i_6 + 1] [i_2 + 1]) - (max((arr_15 [i_2 - 1] [i_2] [i_2 + 1] [i_3 + 3] [i_6 + 1]), (((/* implicit */unsigned int) arr_21 [i_6] [i_6 + 1] [i_3 + 2] [i_3 + 2] [i_2 + 1] [i_2 - 1])))));
                            arr_23 [i_0] [(_Bool)1] [10U] [i_3] [i_6] = ((/* implicit */signed char) ((((((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned short)26862)) : (((/* implicit */int) arr_6 [i_0] [i_1] [i_2] [i_3]))))) != (((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_5))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) ((short) arr_4 [i_0] [i_1]))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_0 [i_3] [11LL])) : (((/* implicit */int) var_6))))))) : ((~(((((/* implicit */_Bool) var_9)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))))));
                            var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) min((((/* implicit */unsigned long long int) var_1)), (((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_19 [i_0] [i_6])), (arr_8 [i_3] [i_0])))) ? (((/* implicit */unsigned long long int) arr_10 [i_6 + 2] [i_6 - 1])) : (max((var_7), (((/* implicit */unsigned long long int) var_2)))))))))));
                        }
                    }
                    var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) max((((/* implicit */unsigned int) ((short) arr_8 [i_2 - 1] [i_2 + 2]))), (min((arr_8 [i_2 + 1] [i_2 - 2]), (((/* implicit */unsigned int) arr_2 [i_2 + 2])))))))));
                    var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((20ULL), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) arr_15 [i_0] [i_0] [i_0] [i_2] [i_2])) & (3880407478948463524LL))))))) ? (min((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_18 [i_1])) : (((/* implicit */int) arr_2 [(unsigned char)7])))), (((/* implicit */int) arr_2 [i_2])))) : (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_4)) ? (3880407478948463524LL) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_2] [16U])))))))));
                }
            } 
        } 
    } 
}
