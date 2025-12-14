/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170112
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170112 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170112
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
    var_19 = ((/* implicit */signed char) var_17);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                /* LoopSeq 3 */
                for (signed char i_2 = 0; i_2 < 12; i_2 += 4) 
                {
                    var_20 ^= ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_1]))));
                    arr_9 [i_0] [i_1] [i_0] [(signed char)8] = ((/* implicit */short) ((unsigned char) (+(((/* implicit */int) arr_5 [i_2] [i_1])))));
                    arr_10 [i_0] [i_2] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (arr_2 [i_0] [1ULL]) : (arr_2 [2ULL] [i_2]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_1] [i_2])) ? (arr_7 [i_1] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-3083))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 2; i_4 < 10; i_4 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) ((((((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)0))))) - (arr_7 [(_Bool)1] [i_4]))) | (((/* implicit */unsigned int) ((/* implicit */int) min((arr_12 [i_4 - 2] [i_4 + 1] [(unsigned short)10] [i_4] [i_4 + 1] [i_4 - 2]), (((/* implicit */unsigned short) (signed char)68)))))))))));
                                arr_15 [(_Bool)1] [(_Bool)1] [(signed char)4] [7ULL] [5] [i_2] [i_2] = ((/* implicit */signed char) arr_3 [i_0] [i_3]);
                                var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)127)) ? (arr_2 [3] [i_2]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)127)) - (((/* implicit */int) (unsigned char)255))))) ? (-1897052638) : (((((/* implicit */int) (unsigned char)0)) ^ (arr_6 [(signed char)10] [(signed char)10]))))))));
                            }
                        } 
                    } 
                }
                for (short i_5 = 4; i_5 < 11; i_5 += 3) 
                {
                    var_23 -= ((/* implicit */short) arr_13 [i_0] [i_5]);
                    arr_18 [i_5] = ((/* implicit */unsigned int) ((((/* implicit */int) var_10)) * (((/* implicit */int) var_0))));
                }
                for (unsigned char i_6 = 1; i_6 < 11; i_6 += 1) 
                {
                    var_24 = (-(((/* implicit */int) var_7)));
                    var_25 ^= arr_8 [i_1] [(short)11] [i_1];
                    var_26 = ((/* implicit */unsigned char) var_2);
                    var_27 |= ((/* implicit */_Bool) (~((+(((/* implicit */int) arr_21 [(short)0] [i_1] [(unsigned char)10] [8LL]))))));
                }
                var_28 = ((/* implicit */_Bool) ((((/* implicit */int) arr_1 [(signed char)3] [i_1])) & (((((/* implicit */int) (unsigned char)255)) & (((/* implicit */int) (unsigned char)255))))));
                var_29 += ((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_2 [(_Bool)0] [i_1]) >= (arr_2 [i_0] [i_1]))))) - (((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (arr_2 [i_0] [i_1]) : (arr_2 [4ULL] [4ULL]))));
            }
        } 
    } 
}
