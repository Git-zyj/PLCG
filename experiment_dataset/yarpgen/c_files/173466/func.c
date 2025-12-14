/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173466
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173466 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173466
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
    var_15 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 1240768982)), (var_7)))))) ? (var_0) : ((+((-(var_0)))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (unsigned short i_2 = 3; i_2 < 21; i_2 += 4) 
            {
                {
                    /* LoopSeq 3 */
                    for (int i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) (+((~(((((/* implicit */int) arr_6 [i_0] [i_0] [i_2] [i_3])) * (((/* implicit */int) var_12)))))))))));
                        var_17 = (-(max((((arr_0 [i_2 + 1] [i_1]) << (((((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0])) - (30239))))), (((/* implicit */long long int) arr_8 [i_0] [i_0])))));
                        var_18 = ((/* implicit */short) var_11);
                    }
                    for (int i_4 = 0; i_4 < 22; i_4 += 1) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (int i_5 = 1; i_5 < 21; i_5 += 3) 
                        {
                            var_19 = ((/* implicit */unsigned long long int) arr_0 [i_2 - 3] [i_0]);
                            var_20 = ((/* implicit */long long int) ((3654221840U) + (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (signed char)45))))));
                            var_21 = ((/* implicit */long long int) ((((/* implicit */int) arr_12 [i_5 + 1] [i_5] [i_5] [i_5] [i_2] [i_5 + 1])) < (((/* implicit */int) arr_12 [i_5] [i_5] [i_5] [i_5 + 1] [i_2] [i_5 - 1]))));
                            var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_6 [i_2 - 2] [i_5 + 1] [i_5] [i_5 + 1])) ? (arr_5 [i_5 + 1] [i_5 + 1] [i_2 - 1] [i_5 - 1]) : (((/* implicit */long long int) ((/* implicit */int) var_9))))))));
                        }
                        /* LoopSeq 1 */
                        for (unsigned char i_6 = 2; i_6 < 19; i_6 += 1) 
                        {
                            var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_12)), (var_5)))) ? (arr_1 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_3 [i_1] [8ULL] [i_6 - 1])) >= (8920849394135511932ULL)))))));
                            var_24 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) (unsigned char)102)) ? (arr_11 [i_2] [i_2 - 2] [i_2 - 2] [13]) : (((/* implicit */int) arr_14 [i_2] [i_2 - 2] [i_2]))))));
                            var_25 = ((/* implicit */unsigned long long int) var_14);
                        }
                    }
                    for (int i_7 = 0; i_7 < 22; i_7 += 1) /* same iter space */
                    {
                        arr_22 [i_2] [i_2] = ((/* implicit */unsigned long long int) (-(1240768982)));
                        var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_10))))) ? ((~(((/* implicit */int) arr_9 [12U])))) : (((/* implicit */int) var_3))))) + (((unsigned int) ((((/* implicit */_Bool) 3654221840U)) ? (((/* implicit */int) (unsigned char)140)) : (((/* implicit */int) (unsigned short)8192))))))))));
                    }
                    /* LoopSeq 3 */
                    for (unsigned long long int i_8 = 2; i_8 < 19; i_8 += 4) 
                    {
                        /* LoopSeq 4 */
                        for (int i_9 = 0; i_9 < 22; i_9 += 3) 
                        {
                            var_27 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_8 - 1])))))) - (((((/* implicit */_Bool) arr_1 [i_8 + 3])) ? (((/* implicit */unsigned long long int) -2143904762)) : (arr_1 [i_8 - 2])))));
                            var_28 = ((/* implicit */long long int) min((var_28), (((/* implicit */long long int) (unsigned short)8188))));
                            arr_28 [i_0] [i_1] [i_8] [i_2] [i_0] [3] = ((/* implicit */signed char) min((min((((/* implicit */unsigned long long int) arr_24 [i_0] [i_2])), (arr_15 [i_0] [i_0] [i_1] [(short)20] [i_2] [i_8] [i_9]))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_7 [(unsigned short)9] [i_2] [i_2 + 1] [i_8])))))));
                        }
                        for (unsigned short i_10 = 2; i_10 < 21; i_10 += 2) 
                        {
                            var_29 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_1] [i_2] [i_0] [i_2]))) : (((long long int) arr_12 [i_0] [i_1] [20LL] [i_2 - 1] [i_8] [14ULL]))));
                            var_30 = ((/* implicit */unsigned char) min((var_30), ((unsigned char)102)));
                            var_31 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned char) arr_3 [i_0] [i_1] [i_8])))))) ? (((long long int) var_7)) : ((+(arr_29 [(signed char)14] [i_8] [i_8 - 1] [i_8 + 3] [i_8 + 3])))));
                        }
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            var_32 = ((/* implicit */long long int) 1560314996U);
                            var_33 = ((/* implicit */unsigned int) max((((/* implicit */int) max((var_3), (((/* implicit */unsigned short) arr_26 [i_11] [i_1] [i_1] [i_1] [i_1] [i_0]))))), (min((arr_11 [i_8 + 3] [i_2 - 3] [i_11] [i_11]), (arr_11 [i_8 + 2] [i_2 - 1] [(unsigned short)17] [(unsigned char)11])))));
                        }
                        for (int i_12 = 2; i_12 < 20; i_12 += 4) 
                        {
                            var_34 = (-(((/* implicit */int) arr_33 [i_2 - 1] [i_2 - 1] [i_2 - 3] [i_2 - 3])));
                            var_35 = ((/* implicit */unsigned char) min((var_35), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)103)) ? (((/* implicit */int) (unsigned short)8193)) : ((((_Bool)0) ? (((/* implicit */int) arr_24 [16] [i_12])) : (((/* implicit */int) (unsigned short)57355))))))) ? (((293244979) & (((/* implicit */int) (unsigned short)57342)))) : (-1894489317))))));
                        }
                        var_36 |= ((/* implicit */unsigned short) min((((unsigned char) arr_34 [i_1] [i_8 - 2] [i_8 - 2] [i_1])), (((/* implicit */unsigned char) ((arr_34 [12ULL] [i_8 - 1] [i_8 - 1] [i_8]) < (arr_34 [i_0] [i_8 + 2] [i_1] [i_8]))))));
                        arr_36 [i_0] [15LL] [i_0] [i_2] = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 293244979)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? (min((var_7), (((/* implicit */unsigned long long int) (unsigned char)205)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (3904009279U) : (((/* implicit */unsigned int) (-2147483647 - 1)))))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))));
                    }
                    for (signed char i_13 = 0; i_13 < 22; i_13 += 1) /* same iter space */
                    {
                        var_37 -= ((/* implicit */int) arr_23 [i_13] [i_2] [i_1]);
                        var_38 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_11))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_6 [i_2 - 1] [i_2 - 2] [i_2 - 2] [i_2])))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (var_5)))));
                    }
                    for (signed char i_14 = 0; i_14 < 22; i_14 += 1) /* same iter space */
                    {
                        var_39 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) < (((/* implicit */int) (!(arr_33 [i_14] [i_2 - 2] [i_2 - 2] [i_2 - 2]))))));
                        var_40 = ((/* implicit */int) min((var_40), (((/* implicit */int) 962195932063387035ULL))));
                        var_41 = ((/* implicit */unsigned long long int) var_12);
                    }
                }
            } 
        } 
    } 
    var_42 += ((/* implicit */int) ((((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) (~(-1240768999)))) : (var_7))) >> (((/* implicit */int) (unsigned char)3))));
}
