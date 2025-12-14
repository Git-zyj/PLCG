/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137005
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137005 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137005
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
    var_14 = var_2;
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                {
                    /* LoopSeq 3 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
                    {
                        var_15 |= var_1;
                        /* LoopSeq 2 */
                        for (short i_4 = 1; i_4 < 16; i_4 += 2) 
                        {
                            arr_16 [i_4] [i_3] [i_1] [i_1] [i_4] = ((/* implicit */unsigned long long int) ((_Bool) ((int) var_2)));
                            var_16 ^= ((/* implicit */short) ((long long int) (short)3));
                            var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_13 [i_0] [i_1] [i_2] [i_4 - 1] [8ULL])) ? (((/* implicit */int) arr_13 [i_0] [i_1] [i_4 + 1] [i_4 + 1] [(signed char)12])) : (((/* implicit */int) arr_13 [i_0] [i_1] [i_2] [i_4 + 1] [2])))))));
                        }
                        for (short i_5 = 0; i_5 < 17; i_5 += 2) 
                        {
                            arr_19 [i_3] [i_2] [(signed char)5] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_1] [i_3] [i_2] [i_1] [(signed char)16])) ? (-1LL) : (((/* implicit */long long int) arr_1 [i_0])))))));
                            var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) (unsigned short)22178))));
                        }
                        var_19 = ((/* implicit */short) (~(((int) var_13))));
                    }
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_7 = 0; i_7 < 17; i_7 += 2) 
                        {
                            var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) (short)-3))));
                            arr_25 [i_0] [(signed char)8] [i_2] [i_2] = ((/* implicit */unsigned char) ((arr_15 [i_2]) ? (var_8) : (((/* implicit */unsigned long long int) var_1))));
                            var_21 = ((/* implicit */unsigned char) (~(((/* implicit */int) (_Bool)1))));
                            var_22 = ((/* implicit */long long int) max((var_22), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [(unsigned char)7] [(short)1] [(unsigned short)16] [(short)4] [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_6 [i_7] [i_6] [i_0]))))) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (-3830589466857646274LL)))));
                            var_23 -= ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)22620)) ? (3830589466857646273LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-106)))));
                        }
                        for (int i_8 = 0; i_8 < 17; i_8 += 1) 
                        {
                            var_24 = ((/* implicit */unsigned short) arr_15 [i_8]);
                            arr_30 [i_8] [i_1] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)42915)) ? (((/* implicit */int) (unsigned char)141)) : (arr_3 [i_6] [i_1])))) ? (((/* implicit */int) (short)2)) : (((/* implicit */int) var_11))));
                            var_25 += ((/* implicit */short) var_7);
                            var_26 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-12)) ? (((/* implicit */int) (short)3)) : (((/* implicit */int) (unsigned short)22620))));
                        }
                        var_27 = ((/* implicit */unsigned long long int) max((var_27), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_29 [i_0] [i_1] [(_Bool)1] [i_2] [i_6])) || (((/* implicit */_Bool) arr_27 [i_0] [i_1] [i_2] [i_6] [i_0])))))));
                        var_28 = ((/* implicit */int) min((var_28), (((/* implicit */int) var_7))));
                    }
                    for (unsigned int i_9 = 0; i_9 < 17; i_9 += 4) 
                    {
                        var_29 = ((/* implicit */unsigned long long int) min((var_29), (arr_24 [i_0] [(_Bool)1] [i_2])));
                        var_30 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) var_6))) ? (((var_8) >> (((/* implicit */int) arr_2 [i_1])))) : (((/* implicit */unsigned long long int) arr_22 [i_0] [i_0] [i_0] [i_0] [6ULL]))));
                    }
                    var_31 *= ((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)0))));
                }
            } 
        } 
        var_32 = ((/* implicit */short) min((var_32), (((/* implicit */short) ((unsigned long long int) var_4)))));
        var_33 = ((/* implicit */int) max((var_33), (((/* implicit */int) 6ULL))));
    }
    for (unsigned int i_10 = 0; i_10 < 19; i_10 += 3) 
    {
        var_34 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_36 [i_10])) ? (((/* implicit */int) (!((_Bool)1)))) : (max((arr_36 [i_10]), (arr_36 [8LL])))));
        var_35 = ((/* implicit */unsigned short) min((var_35), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) var_8))) ? (((((/* implicit */_Bool) arr_36 [i_10])) ? (((/* implicit */int) arr_34 [i_10] [(unsigned char)12])) : (((/* implicit */int) (short)12)))) : (max((((/* implicit */int) (!(((/* implicit */_Bool) var_13))))), (arr_36 [i_10]))))))));
        var_36 = ((/* implicit */signed char) ((int) ((unsigned char) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) var_7))))));
    }
}
