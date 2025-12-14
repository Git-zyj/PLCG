/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126077
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126077 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126077
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) max((((var_5) >> (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) >= (var_5)))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) var_1))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)65535)) < (((/* implicit */int) var_8))))) : ((+(((/* implicit */int) var_1)))))))));
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) arr_0 [i_0]);
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_3 = 0; i_3 < 23; i_3 += 2) /* same iter space */
                    {
                        var_13 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) ((var_5) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65525)))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (arr_1 [i_1]) : (((/* implicit */int) (unsigned short)6))))) : (((((/* implicit */_Bool) (unsigned short)64406)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (arr_0 [(_Bool)1])))))));
                        var_14 = ((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_11))))) ? (((/* implicit */int) ((((/* implicit */int) var_4)) >= (((/* implicit */int) var_2))))) : (((/* implicit */int) ((arr_0 [i_0]) < (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_2] [i_2])))))))));
                        var_15 = ((/* implicit */unsigned char) max((((/* implicit */long long int) max((arr_8 [i_0] [i_1] [i_3] [i_3]), (arr_5 [i_0])))), (((((/* implicit */_Bool) (signed char)-96)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_1] [i_1])))))));
                    }
                    for (unsigned short i_4 = 0; i_4 < 23; i_4 += 2) /* same iter space */
                    {
                        var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) arr_9 [i_1] [i_1] [i_1]))));
                        arr_13 [i_2] [i_1] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_6 [i_2])), (1995691175U)))))))) > ((((~(var_5))) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)41109)))))));
                        arr_14 [i_2] [i_2] = ((((/* implicit */int) var_11)) ^ (var_7));
                        var_17 = ((/* implicit */long long int) arr_1 [i_2]);
                    }
                    var_18 = ((/* implicit */int) var_11);
                }
            } 
        } 
        /* LoopNest 3 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (signed char i_6 = 2; i_6 < 22; i_6 += 3) 
            {
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned int i_8 = 0; i_8 < 23; i_8 += 4) 
                        {
                            var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) ((((/* implicit */int) arr_16 [i_5] [i_5])) >> (((((/* implicit */int) arr_12 [i_6] [i_6] [i_6] [i_6] [i_6 - 2])) + (24358))))))));
                            var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(2572081305U)))) || (((/* implicit */_Bool) (-(var_3))))));
                        }
                        for (unsigned short i_9 = 0; i_9 < 23; i_9 += 3) 
                        {
                            var_21 = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)20)) ? (((/* implicit */int) (unsigned short)65509)) : (((/* implicit */int) (unsigned short)6))))) ? ((~(arr_0 [14U]))) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_4 [i_9]))))))) + (((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */int) (unsigned short)16898)) >= (((/* implicit */int) (unsigned short)65525))))))))));
                            arr_28 [i_7] [i_5] [i_6 + 1] [i_7] [i_7] = ((/* implicit */signed char) arr_8 [i_0] [i_5] [i_6 - 1] [i_9]);
                            var_22 &= (!(((/* implicit */_Bool) var_5)));
                            arr_29 [i_5] [i_5] [i_5] [i_0] [i_9] [i_9] [i_7] = ((/* implicit */unsigned char) var_1);
                        }
                        var_23 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_9 [i_0] [i_5] [i_0])))) & (((9223372036854775785LL) | (((/* implicit */long long int) ((/* implicit */int) (unsigned short)59545)))))));
                        var_24 = (+((+(((/* implicit */int) (!(arr_4 [i_6])))))));
                        var_25 = ((/* implicit */signed char) ((((/* implicit */int) var_2)) >> (((((/* implicit */int) (signed char)-17)) + (44)))));
                    }
                } 
            } 
        } 
    }
    /* LoopNest 2 */
    for (int i_10 = 0; i_10 < 15; i_10 += 2) 
    {
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            {
                arr_34 [i_10] [i_10] [(unsigned short)1] &= ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) var_12)) != (((/* implicit */int) var_2))))) >= (((((/* implicit */int) arr_33 [(_Bool)1] [(_Bool)1] [i_11])) | (((/* implicit */int) arr_33 [i_10] [3LL] [i_11]))))));
                /* LoopNest 2 */
                for (_Bool i_12 = 0; i_12 < 0; i_12 += 1) 
                {
                    for (unsigned char i_13 = 0; i_13 < 15; i_13 += 1) 
                    {
                        {
                            var_26 &= ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_11 [i_10] [i_10] [i_12] [i_13] [i_10] [i_12 + 1])) ? (arr_11 [i_10] [(short)15] [(_Bool)1] [i_12 + 1] [i_12] [i_12 + 1]) : (arr_11 [i_10] [i_11] [i_11] [20LL] [i_10] [i_12 + 1]))) % ((+(arr_11 [i_11] [i_10] [i_10] [i_13] [i_13] [i_12 + 1])))));
                            var_27 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_20 [i_10] [i_12 + 1] [i_12])))))));
                            arr_41 [i_10] [i_13] [i_12] [i_12] [4LL] = ((((arr_31 [i_13] [i_12]) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned short)1129)))) % ((~(((/* implicit */int) var_1)))));
                        }
                    } 
                } 
                var_28 = ((/* implicit */_Bool) max((var_28), (((/* implicit */_Bool) ((((/* implicit */long long int) (~((-(((/* implicit */int) (short)-32719))))))) * (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) | (var_5)))) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)166)) >> (((((/* implicit */int) (unsigned short)65515)) - (65504)))))) : ((+(var_3))))))))));
                var_29 = min((((((/* implicit */int) (unsigned short)6)) | (((/* implicit */int) ((unsigned short) var_11))))), (((/* implicit */int) (signed char)-67)));
            }
        } 
    } 
    var_30 = ((/* implicit */signed char) (short)32727);
    var_31 = var_11;
}
