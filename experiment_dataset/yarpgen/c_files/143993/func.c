/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143993
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143993 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143993
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
    var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */long long int) (+(((/* implicit */int) var_0))))), (var_7)))) ? (var_8) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-70))) <= (var_10)))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-46))) == (var_8)))))))));
    var_15 = ((/* implicit */unsigned char) var_7);
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 21; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                var_16 |= ((/* implicit */short) (signed char)49);
                /* LoopSeq 3 */
                /* vectorizable */
                for (long long int i_2 = 2; i_2 < 20; i_2 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 22; i_4 += 1) 
                        {
                            {
                                arr_15 [i_0] [i_0] [(signed char)11] [i_0] [(unsigned short)1] [i_0 + 1] [12LL] &= ((/* implicit */long long int) (((-(arr_12 [i_0] [i_0] [7LL] [i_3] [i_4] [i_4]))) < (arr_14 [i_0 - 2] [i_4] [i_4] [i_4] [i_4])));
                                arr_16 [i_0] [i_1] [(short)20] [i_2] [(unsigned short)0] [i_3] [i_4] = ((/* implicit */_Bool) ((((((/* implicit */int) arr_3 [i_0] [i_1])) * (((/* implicit */int) var_0)))) * (((((/* implicit */int) (signed char)56)) / (((/* implicit */int) (signed char)-70))))));
                                arr_17 [i_0] [i_0] [i_0 - 1] &= ((/* implicit */long long int) ((arr_12 [(unsigned char)19] [i_2 - 2] [i_2 - 2] [i_2] [i_2] [i_2 - 1]) == (((/* implicit */long long int) ((/* implicit */int) (signed char)56)))));
                                arr_18 [i_0] [i_2] [i_2] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)12122)) && (((/* implicit */_Bool) arr_1 [i_0 - 1]))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) arr_1 [i_1])) >= (((/* implicit */int) arr_9 [i_2] [(short)12] [i_2]))))) >= (((/* implicit */int) ((_Bool) var_4)))));
                }
                for (short i_5 = 0; i_5 < 22; i_5 += 1) /* same iter space */
                {
                    arr_21 [i_0 - 1] [i_5] [i_1] [i_5] = ((/* implicit */long long int) ((short) ((((/* implicit */int) (signed char)-77)) - (((/* implicit */int) ((((/* implicit */int) arr_2 [i_5])) >= (((/* implicit */int) (unsigned short)17689))))))));
                    var_18 &= ((/* implicit */unsigned char) ((short) var_7));
                    arr_22 [i_0 - 1] [i_0 - 1] [i_5] [i_5] = ((/* implicit */long long int) ((((/* implicit */long long int) min(((-(((/* implicit */int) (short)16383)))), (((((/* implicit */int) arr_1 [15LL])) | (((/* implicit */int) (signed char)-53))))))) >= (((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)163)))))) | (var_13)))));
                    var_19 *= ((/* implicit */short) var_10);
                }
                /* vectorizable */
                for (short i_6 = 0; i_6 < 22; i_6 += 1) /* same iter space */
                {
                    arr_26 [i_0] [i_1] [i_6] [i_1] = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_5)) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))))) & (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0 + 1] [i_0] [i_0 - 1] [i_0 - 2])))));
                    arr_27 [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)58231)) ? (((/* implicit */int) (signed char)68)) : (((/* implicit */int) (signed char)50))));
                    arr_28 [i_0] [(signed char)4] [i_6] = ((/* implicit */signed char) ((unsigned long long int) arr_3 [i_0 - 2] [i_0 - 2]));
                    var_20 ^= ((/* implicit */unsigned char) (-(((/* implicit */int) (signed char)53))));
                    arr_29 [i_0] [i_1] [i_6] = ((/* implicit */unsigned char) arr_12 [i_6] [i_1] [i_1] [i_1] [i_0 - 1] [i_0]);
                }
                var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) (short)-12123))) ? (((/* implicit */int) arr_20 [i_0] [i_0] [i_1])) : (((/* implicit */int) ((((/* implicit */_Bool) max((4398046511103LL), (arr_14 [20U] [(unsigned short)14] [(_Bool)1] [(unsigned short)10] [i_1])))) || (((/* implicit */_Bool) ((short) (signed char)-86)))))))))));
                /* LoopNest 3 */
                for (unsigned short i_7 = 0; i_7 < 22; i_7 += 1) 
                {
                    for (signed char i_8 = 2; i_8 < 20; i_8 += 1) 
                    {
                        for (long long int i_9 = 0; i_9 < 22; i_9 += 4) 
                        {
                            {
                                arr_41 [i_9] [i_8 + 1] [i_8] [i_7] [i_8] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_20 [i_9] [i_1] [i_1])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_40 [i_0] [i_0] [i_7] [i_7] [i_8] [i_7] [i_9]))))))) || (((/* implicit */_Bool) var_3))));
                                var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)70)) ? (((long long int) (signed char)88)) : (((/* implicit */long long int) ((/* implicit */int) var_4)))));
                                var_23 = (+(min((arr_12 [i_0 + 1] [i_0 - 2] [i_0 - 1] [i_0 - 1] [i_0 - 2] [i_8 + 1]), (((/* implicit */long long int) arr_35 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1])))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
