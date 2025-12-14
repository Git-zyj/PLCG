/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148101
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148101 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148101
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
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 1; i_2 < 21; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        {
                            arr_8 [i_0] [i_1] [i_2 + 2] [i_2 + 1] [i_3] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_0 [i_0])), (var_14)))) ? (((/* implicit */int) ((unsigned char) arr_0 [i_0]))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0])))))));
                            var_15 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_2] [i_1])) ? (2373348502U) : (94308054U)))) ? (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (unsigned short)65535))))) : (min((var_3), (((/* implicit */unsigned long long int) arr_4 [i_1] [(unsigned char)13] [i_3])))))) * (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned short)3)) : (((/* implicit */int) (signed char)-1)))) - (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0]))))))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 23; i_4 += 2) 
                {
                    for (unsigned int i_5 = 3; i_5 < 20; i_5 += 3) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 23; i_6 += 2) 
                        {
                            {
                                var_16 *= ((/* implicit */short) max((((/* implicit */unsigned long long int) (_Bool)1)), (var_14)));
                                var_17 = ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_0])) || (((/* implicit */_Bool) arr_12 [i_6] [i_5 + 3] [i_0] [i_0] [i_0] [i_0]))))) + (((/* implicit */int) arr_12 [i_5] [(unsigned char)6] [i_5 + 2] [i_0] [i_5 - 1] [i_5])))) : (((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [(unsigned short)18] [(_Bool)1]))) == (arr_9 [i_4])))))));
                                var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) || (((((/* implicit */int) ((((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0] [i_0])) != (arr_4 [i_0] [i_1] [i_1])))) == (((/* implicit */int) min((arr_3 [(unsigned char)5] [i_1]), (((/* implicit */signed char) var_4)))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_7 = 0; i_7 < 23; i_7 += 3) 
                {
                    for (unsigned int i_8 = 3; i_8 < 20; i_8 += 3) 
                    {
                        {
                            arr_23 [i_8 + 2] [i_0] [i_8] [i_8] = ((/* implicit */long long int) max((var_9), (((/* implicit */unsigned char) arr_3 [i_0] [(short)0]))));
                            arr_24 [i_1] [i_8 - 2] &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)104)) ? (((/* implicit */int) ((((/* implicit */_Bool) -1261882372)) && ((_Bool)1)))) : (((/* implicit */int) (unsigned short)2842))))) ? (((/* implicit */int) ((((/* implicit */int) arr_15 [i_8 - 3] [i_1] [i_7] [(unsigned char)2] [i_0] [i_1] [i_0])) > (((/* implicit */int) (unsigned short)1))))) : (((/* implicit */int) (unsigned short)48252))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_9 = 0; i_9 < 21; i_9 += 1) 
    {
        for (short i_10 = 3; i_10 < 20; i_10 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_11 = 1; i_11 < 18; i_11 += 4) 
                {
                    for (unsigned long long int i_12 = 2; i_12 < 18; i_12 += 2) 
                    {
                        for (unsigned char i_13 = 1; i_13 < 19; i_13 += 2) 
                        {
                            {
                                arr_40 [i_9] = ((/* implicit */signed char) max((var_3), ((((_Bool)1) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)255)) && (((/* implicit */_Bool) (unsigned char)193))))))))));
                                var_19 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */int) var_10)), ((-(((/* implicit */int) arr_6 [i_9] [i_13 + 1] [(signed char)5] [i_12 - 2] [i_13]))))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) * (var_3))) : ((((_Bool)1) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_4))))) : (((((/* implicit */_Bool) -2713529166478848422LL)) ? (arr_9 [(unsigned short)6]) : (((/* implicit */unsigned long long int) -2713529166478848422LL))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_14 = 0; i_14 < 21; i_14 += 1) 
                {
                    for (unsigned long long int i_15 = 0; i_15 < 21; i_15 += 3) 
                    {
                        {
                            var_20 ^= ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)1)) ? (((/* implicit */int) max((((/* implicit */unsigned short) (short)-21470)), ((unsigned short)34160)))) : ((~(((/* implicit */int) (_Bool)1))))))) ? ((((!(((/* implicit */_Bool) var_10)))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) (unsigned short)15295))))) : (((((/* implicit */_Bool) -21LL)) ? (((/* implicit */int) (signed char)-41)) : (((/* implicit */int) (unsigned char)13)))))) : (((/* implicit */int) (_Bool)0)));
                            arr_45 [i_9] [i_14] [i_9] [i_9] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) / (((((/* implicit */_Bool) arr_44 [i_15] [i_10 + 1] [i_10] [i_10] [i_9] [(_Bool)0])) ? (arr_44 [i_10] [i_10 - 2] [i_10] [(unsigned char)13] [(_Bool)1] [i_9]) : (arr_44 [i_14] [i_10 - 2] [i_10] [i_10] [i_10] [i_10 - 3])))));
                            var_21 &= ((/* implicit */unsigned int) var_13);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_16 = 0; i_16 < 21; i_16 += 3) 
                {
                    for (unsigned char i_17 = 0; i_17 < 21; i_17 += 3) 
                    {
                        {
                            arr_53 [i_9] [i_16] [i_10] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)21470)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (2713529166478848422LL)));
                            var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */long long int) 32767U)) : (1125899369971712LL))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                {
                    for (unsigned short i_19 = 3; i_19 < 19; i_19 += 3) 
                    {
                        {
                            arr_60 [i_9] [i_9] [(short)19] [i_9] = ((/* implicit */short) arr_58 [i_9] [i_19 - 1] [i_19 + 1]);
                            arr_61 [i_9] = ((/* implicit */signed char) (~(arr_52 [i_9] [17U] [i_9] [i_19])));
                        }
                    } 
                } 
            }
        } 
    } 
}
