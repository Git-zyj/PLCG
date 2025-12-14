/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169397
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169397 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169397
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
    var_13 = ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) (~(var_7)))))))));
    var_14 = ((/* implicit */_Bool) (-(((/* implicit */int) var_9))));
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 10; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                arr_6 [i_0] = ((/* implicit */short) ((((((/* implicit */int) (short)-23428)) - (((/* implicit */int) (short)-3508)))) + ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)23404))))));
                var_15 += ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0 + 1] [i_1]))) - (((arr_2 [i_0]) >> (((((/* implicit */int) arr_0 [i_1])) - (22798)))))))) ? (((((/* implicit */int) min((arr_0 [i_0]), (((/* implicit */short) arr_3 [i_0] [i_1]))))) & (((/* implicit */int) ((((/* implicit */int) arr_0 [i_0 + 3])) >= (((/* implicit */int) arr_0 [(signed char)6]))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 + 4])) ? (arr_2 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1] [i_0])))))) ? (((((/* implicit */_Bool) arr_2 [(signed char)2])) ? (((/* implicit */int) arr_5 [(_Bool)1] [i_1])) : (((/* implicit */int) arr_0 [i_0])))) : (((((/* implicit */int) arr_1 [i_1])) & (((/* implicit */int) arr_1 [i_0 - 2]))))))));
                var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) ((((((/* implicit */_Bool) arr_2 [i_0 + 3])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0 - 1] [i_1]))) : (arr_2 [i_0]))) << (((max((((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (short)-23412)) : (((/* implicit */int) arr_3 [i_0] [i_1]))))), (201326592U))) - (4294943864U))))))));
                var_17 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */_Bool) (~(arr_2 [i_0 + 4])))) ? (((/* implicit */int) max((arr_5 [i_0] [i_1]), (arr_5 [i_0] [i_0])))) : (((((/* implicit */int) (short)-23430)) + (((/* implicit */int) (_Bool)1))))))) > (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 - 2])) ? (((/* implicit */int) arr_3 [i_0] [i_1])) : (((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */long long int) ((arr_5 [i_0 + 2] [i_0 + 2]) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_4 [(short)4] [(short)4]))))) : (((((/* implicit */_Bool) (short)8079)) ? (8622274146530017234LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_2 = 1; i_2 < 16; i_2 += 3) 
    {
        for (short i_3 = 0; i_3 < 18; i_3 += 4) 
        {
            for (short i_4 = 0; i_4 < 18; i_4 += 3) 
            {
                {
                    var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) (signed char)115))) >= (1047349042176576246LL))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (((2644826866275507526LL) + (((/* implicit */long long int) ((/* implicit */int) (short)-32101)))))))) ? (((arr_8 [i_2 + 1] [i_2 - 1]) + (arr_8 [i_2 + 1] [i_2 - 1]))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_2 - 1] [i_2])) ? (((/* implicit */long long int) arr_8 [i_3] [i_3])) : (arr_13 [i_2] [i_3] [i_3] [i_4])))) ? (min((((/* implicit */unsigned int) arr_7 [i_2])), (arr_8 [i_2] [i_3]))) : (((((/* implicit */_Bool) arr_11 [i_2] [i_3] [i_4] [i_4])) ? (arr_10 [i_2] [i_4]) : (arr_10 [i_2] [i_2]))))))))));
                    arr_14 [i_2] [(short)13] [i_4] [i_4] = ((/* implicit */short) ((((((/* implicit */_Bool) ((arr_10 [i_2] [i_3]) - (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_2])))))) ? (min((arr_10 [i_4] [(_Bool)1]), (arr_8 [i_2] [i_3]))) : (((/* implicit */unsigned int) ((/* implicit */int) min((arr_9 [i_2]), (arr_12 [i_2 + 1] [i_2] [i_3] [i_4]))))))) - (((((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_2 + 2] [i_2 - 1] [i_2 - 1] [i_2 + 1]))) & (arr_10 [i_2 + 2] [i_2 - 1])))));
                    /* LoopNest 2 */
                    for (signed char i_5 = 2; i_5 < 17; i_5 += 3) 
                    {
                        for (signed char i_6 = 0; i_6 < 18; i_6 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned int) min((var_19), (((((((/* implicit */int) arr_12 [i_2 + 1] [i_3] [i_4] [i_2 + 1])) < (((/* implicit */int) arr_12 [i_2] [i_3] [(short)8] [(unsigned char)12])))) ? (((((/* implicit */_Bool) arr_8 [i_2 + 1] [i_5 - 1])) ? (arr_8 [i_2 - 1] [i_5 - 2]) : (arr_8 [i_2 - 1] [i_5 + 1]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_17 [i_2] [i_5 + 1] [i_5 + 1] [i_2] [i_6])) ? (((/* implicit */int) arr_17 [i_2] [i_5 + 1] [i_4] [i_5] [i_4])) : (((/* implicit */int) arr_17 [i_2] [i_5 - 2] [(_Bool)0] [(_Bool)1] [i_5 - 2])))))))));
                                var_20 = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) << (((/* implicit */int) (_Bool)1))));
                                arr_20 [i_2 - 1] [i_3] [i_6] = ((/* implicit */unsigned char) min(((((_Bool)1) ? (((/* implicit */int) (short)-23449)) : (((/* implicit */int) (short)1019)))), (((((/* implicit */_Bool) arr_15 [i_3] [i_5 + 1])) ? (((/* implicit */int) arr_12 [i_2 + 1] [i_2 - 1] [i_3] [i_3])) : (((/* implicit */int) arr_12 [i_2] [i_2] [i_4] [i_5]))))));
                            }
                        } 
                    } 
                    arr_21 [i_2] = ((/* implicit */short) (!((_Bool)1)));
                    var_21 *= ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_11 [i_2] [i_2 - 1] [i_2 - 1] [(unsigned char)14])) ? (((/* implicit */int) arr_11 [i_2] [i_2 + 1] [i_2] [(unsigned char)1])) : (((/* implicit */int) arr_11 [i_2 - 1] [i_2 - 1] [i_2 + 2] [i_2])))) / (((((/* implicit */_Bool) arr_11 [i_2] [i_2 + 2] [i_2 + 2] [(short)11])) ? (((/* implicit */int) arr_11 [i_2] [i_2 + 1] [i_2 - 1] [i_2 + 1])) : (((/* implicit */int) arr_11 [i_2 + 2] [i_2 - 1] [i_2] [i_2]))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_3))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) ((((/* implicit */int) var_9)) < (((/* implicit */int) var_10))))) : ((+(((/* implicit */int) var_12)))))))));
}
