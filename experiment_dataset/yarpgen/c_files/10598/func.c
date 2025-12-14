/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10598
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10598 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10598
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
    var_13 *= ((/* implicit */unsigned short) ((((/* implicit */int) var_2)) != (min((((/* implicit */int) ((var_1) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))), (((((/* implicit */int) var_3)) & (((/* implicit */int) var_0))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 4; i_1 < 14; i_1 += 1) 
        {
            for (unsigned short i_2 = 3; i_2 < 15; i_2 += 2) 
            {
                {
                    arr_12 [i_0] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_11 [i_1 - 2] [i_2 + 2] [i_2 + 2]))));
                    var_14 *= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_0])) ? (((/* implicit */int) arr_4 [i_0] [i_0] [i_2])) : (((/* implicit */int) arr_0 [i_0] [i_0]))))) != (arr_8 [i_0] [i_0] [i_2 - 1])));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) ((((14644719627306559815ULL) << (((/* implicit */int) (unsigned short)4)))) | (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))));
                                arr_20 [i_0] [i_1] [i_3] [i_4] = ((/* implicit */_Bool) (((-(arr_8 [i_2] [i_3] [i_4]))) % (arr_6 [i_1 - 3] [i_1])));
                                arr_21 [i_0] [i_3] [i_2] [i_3] [i_4] [i_2] [i_2] = ((/* implicit */unsigned char) arr_15 [i_2] [i_2 + 2] [i_2] [i_2 + 2] [i_2 - 1] [i_2 - 2]);
                                arr_22 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_3] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_1 - 2] [i_2 + 3]))) : (arr_8 [i_3] [(unsigned char)16] [i_0])));
                                arr_23 [i_1] [i_2] [i_3] [i_4] = ((/* implicit */short) arr_1 [(unsigned char)12] [i_1]);
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopSeq 3 */
        for (unsigned char i_5 = 0; i_5 < 18; i_5 += 3) 
        {
            var_16 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_19 [i_0] [i_0] [i_0]))));
            var_17 ^= ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_16 [i_5] [i_5] [(short)15] [i_0]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0])) && (((/* implicit */_Bool) arr_0 [i_0] [(unsigned char)11])))))) : ((+(arr_8 [i_5] [i_5] [i_0])))));
            arr_27 [i_0] = ((/* implicit */unsigned short) (+(((((/* implicit */int) arr_24 [i_0] [i_0] [i_0])) & (((/* implicit */int) arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [i_5]))))));
        }
        for (unsigned char i_6 = 0; i_6 < 18; i_6 += 4) /* same iter space */
        {
            arr_30 [i_0] [i_0] [i_6] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_17 [i_0] [i_0] [i_0] [i_6] [i_6]))));
            var_18 = ((/* implicit */unsigned char) arr_15 [i_0] [i_0] [16ULL] [i_6] [i_0] [i_6]);
            var_19 = ((/* implicit */short) arr_8 [(short)16] [i_6] [i_0]);
        }
        for (unsigned char i_7 = 0; i_7 < 18; i_7 += 4) /* same iter space */
        {
            arr_33 [i_0] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_7])) || (((/* implicit */_Bool) arr_29 [i_7] [i_0]))))) - (((/* implicit */int) arr_13 [i_0] [i_0]))));
            var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((((/* implicit */int) arr_18 [i_0] [i_7] [i_7] [i_0] [(short)14] [i_7])) | (((/* implicit */int) arr_18 [i_0] [i_0] [i_0] [i_0] [i_7] [i_7])))))));
            var_21 = ((/* implicit */signed char) (~(((/* implicit */int) arr_13 [i_0] [i_7]))));
            /* LoopNest 2 */
            for (signed char i_8 = 0; i_8 < 18; i_8 += 1) 
            {
                for (unsigned long long int i_9 = 0; i_9 < 18; i_9 += 4) 
                {
                    {
                        arr_38 [i_0] [i_7] [i_8] [i_9] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)27)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)240))) : (33554431ULL)));
                        var_22 = ((/* implicit */short) (((-(((/* implicit */int) (unsigned short)14499)))) >= (((/* implicit */int) (_Bool)1))));
                        arr_39 [i_0] [i_7] [i_8] [i_9] = ((/* implicit */short) (+(arr_8 [i_9] [i_8] [i_0])));
                    }
                } 
            } 
        }
    }
    for (short i_10 = 0; i_10 < 15; i_10 += 4) 
    {
        var_23 = ((/* implicit */short) arr_19 [i_10] [i_10] [i_10]);
        /* LoopSeq 1 */
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            var_24 = max(((unsigned short)39825), ((unsigned short)14494));
            arr_46 [i_11] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_8 [i_10] [i_11] [i_10]), (((/* implicit */unsigned long long int) arr_10 [i_10] [i_10] [i_11]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_11] [i_10] [(short)3]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_43 [(unsigned char)14])))))));
        }
    }
    for (unsigned long long int i_12 = 0; i_12 < 23; i_12 += 4) 
    {
        var_25 = ((/* implicit */unsigned long long int) arr_47 [i_12]);
        var_26 += ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_49 [i_12])) / (((/* implicit */int) max((((/* implicit */unsigned char) arr_49 [i_12])), (arr_48 [i_12] [i_12]))))));
        arr_50 [i_12] = ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */int) arr_47 [i_12])) == (((/* implicit */int) arr_47 [i_12])))))));
    }
}
