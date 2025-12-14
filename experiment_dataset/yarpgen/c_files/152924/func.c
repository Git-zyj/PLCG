/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152924
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152924 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152924
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
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 1) /* same iter space */
    {
        var_10 = ((/* implicit */long long int) max((((/* implicit */unsigned short) max((arr_0 [i_0]), (arr_0 [i_0])))), (max(((unsigned short)4095), (((/* implicit */unsigned short) (_Bool)1))))));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 8; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    var_11 = ((/* implicit */signed char) min((var_11), (((/* implicit */signed char) var_7))));
                    /* LoopSeq 1 */
                    for (signed char i_3 = 3; i_3 < 11; i_3 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (signed char i_4 = 2; i_4 < 11; i_4 += 1) 
                        {
                            var_12 ^= ((/* implicit */_Bool) max(((+(((/* implicit */int) arr_9 [i_1 - 2] [i_2] [i_4 - 1])))), (((((/* implicit */int) arr_0 [i_3 + 1])) & ((-2147483647 - 1))))));
                            var_13 = ((/* implicit */unsigned char) arr_3 [i_0]);
                            arr_15 [i_1] [i_1 + 4] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((_Bool) arr_4 [i_3 - 2] [i_1] [i_1])))));
                            arr_16 [i_1] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_2 [i_1 - 1] [i_0])))) ? ((~(arr_2 [i_0] [i_2]))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0]))))))));
                        }
                        for (int i_5 = 0; i_5 < 12; i_5 += 3) 
                        {
                            var_14 = ((/* implicit */short) (-(((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */int) arr_13 [i_0] [i_1 + 1] [i_2] [i_3] [i_3 + 1] [i_1 + 2])) : (((/* implicit */int) arr_14 [i_1 + 2] [i_1] [i_1] [i_2] [i_3 - 1]))))));
                            var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) min((var_2), (((/* implicit */unsigned short) (signed char)71))))), (max((((/* implicit */unsigned int) (short)-18880)), (arr_2 [i_3] [i_1])))))))))));
                            var_16 ^= ((min((((/* implicit */unsigned int) (((_Bool)1) || (((/* implicit */_Bool) arr_4 [i_2] [(short)0] [i_2]))))), (((unsigned int) arr_19 [i_0] [i_1 - 2] [i_2] [i_5])))) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [4U]))));
                            arr_21 [i_0] [i_3] [i_2] [i_3] [i_1] = ((/* implicit */unsigned short) (((~(min((arr_20 [i_0] [i_1] [i_2] [i_1] [i_3] [i_3] [i_5]), (arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))) > (((/* implicit */unsigned int) ((/* implicit */int) max((arr_9 [i_1] [i_1 - 2] [i_5]), (arr_9 [i_0] [i_3] [i_5])))))));
                        }
                        for (unsigned int i_6 = 0; i_6 < 12; i_6 += 4) 
                        {
                            var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])), ((+(((/* implicit */int) arr_12 [i_6] [i_3] [i_3] [i_2] [i_1] [i_0]))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_1]))))) : (((/* implicit */int) max((((/* implicit */unsigned short) var_6)), (arr_19 [i_0] [i_1 + 2] [i_2] [i_6]))))));
                            arr_25 [i_3] [i_3 - 3] [i_3 + 1] [i_3] [i_3 - 2] [i_1] [i_3 - 2] = ((/* implicit */unsigned char) (+((-(((((/* implicit */int) var_7)) / (-146225286)))))));
                            arr_26 [i_0] [i_1] [i_1] [i_2] [i_3 - 2] [i_1] [i_6] = ((/* implicit */short) arr_13 [i_1 - 2] [i_1 + 3] [i_2] [i_3] [i_6] [i_0]);
                            var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) (~((~(-2069648713))))))));
                        }
                        var_19 &= ((/* implicit */int) arr_11 [(short)8]);
                        var_20 = ((/* implicit */unsigned char) max((max((((/* implicit */int) (!(((/* implicit */_Bool) var_9))))), ((-(((/* implicit */int) (signed char)11)))))), ((~(((/* implicit */int) (signed char)-11))))));
                    }
                }
            } 
        } 
    }
    for (unsigned short i_7 = 0; i_7 < 12; i_7 += 1) /* same iter space */
    {
        var_21 = ((/* implicit */short) max((((((/* implicit */int) var_7)) - (arr_27 [i_7] [i_7]))), (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= ((~(arr_27 [i_7] [i_7]))))))));
        var_22 ^= ((/* implicit */int) max((((/* implicit */unsigned int) (_Bool)1)), (arr_17 [(signed char)6] [i_7] [i_7])));
        var_23 ^= ((/* implicit */short) max((min((2705778688U), (((/* implicit */unsigned int) arr_28 [i_7])))), (((/* implicit */unsigned int) ((signed char) arr_28 [i_7])))));
        /* LoopNest 2 */
        for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
        {
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                {
                    arr_35 [i_7] [i_7] [i_8] [i_9] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) 266338304)) ? (-1241475058) : (((/* implicit */int) arr_14 [i_7] [i_8] [i_8] [i_9] [i_9]))))) ? (((/* implicit */int) ((arr_5 [i_7]) && (((/* implicit */_Bool) arr_19 [i_9] [i_8] [i_8 - 1] [i_7]))))) : (((/* implicit */int) arr_7 [i_8 - 1] [i_8 - 1]))))));
                    var_24 = ((/* implicit */_Bool) (+(((/* implicit */int) ((_Bool) (unsigned short)32752)))));
                }
            } 
        } 
        /* LoopSeq 2 */
        for (signed char i_10 = 0; i_10 < 12; i_10 += 1) 
        {
            arr_38 [4U] [i_10] [i_10] &= ((/* implicit */short) (((-(((arr_27 [i_7] [i_7]) / (arr_3 [i_10]))))) != (((/* implicit */int) arr_8 [(_Bool)1]))));
            var_25 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(576460752034988032LL))))))), ((+(arr_2 [i_7] [i_10])))));
            arr_39 [i_10] = ((/* implicit */unsigned short) max((arr_6 [i_10]), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_10 [i_10] [i_10])))))));
            var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */int) (!(arr_5 [i_7])))), (((((/* implicit */_Bool) (short)29564)) ? (arr_32 [i_10]) : (((/* implicit */int) arr_36 [i_7] [i_10]))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_7] [i_7] [i_7] [i_7] [i_7] [i_10]))) : (((((((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1)))) - (arr_2 [i_10] [i_10]))) ^ (arr_18 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7])))));
        }
        for (signed char i_11 = 0; i_11 < 12; i_11 += 3) 
        {
            var_27 = ((/* implicit */signed char) max(((unsigned char)185), (((/* implicit */unsigned char) (_Bool)1))));
            var_28 = ((/* implicit */int) max((var_28), (((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */int) arr_11 [(short)0])), (((((arr_32 [0LL]) + (2147483647))) << (((((/* implicit */int) arr_41 [i_7] [i_7])) - (56364)))))))) ? (((/* implicit */unsigned long long int) (((+(((/* implicit */int) (unsigned char)26)))) % ((-(((/* implicit */int) (short)28801))))))) : ((+(arr_6 [6ULL]))))))));
            var_29 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((arr_27 [i_7] [i_11]), (arr_27 [i_11] [i_7]))))));
        }
    }
    var_30 = min((((/* implicit */int) var_3)), ((+(((/* implicit */int) (!(((/* implicit */_Bool) var_7))))))));
}
