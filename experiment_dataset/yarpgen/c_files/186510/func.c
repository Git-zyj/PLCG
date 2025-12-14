/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186510
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186510 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186510
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
    for (unsigned char i_0 = 1; i_0 < 14; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 2; i_2 < 12; i_2 += 1) 
                {
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_16 = ((/* implicit */short) -5586156105335396672LL);
                            arr_9 [i_0 + 2] [i_0 + 2] [i_2 + 2] [i_3] = ((max((arr_2 [i_0] [i_0] [i_0]), (((/* implicit */long long int) (+(((/* implicit */int) arr_5 [i_3] [i_2 - 2] [i_1] [i_0]))))))) / (arr_2 [i_0 + 1] [i_1] [(short)9]));
                            arr_10 [i_0] [i_3] = ((/* implicit */short) arr_2 [i_0] [i_0] [i_0]);
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (unsigned int i_4 = 0; i_4 < 16; i_4 += 3) 
                {
                    var_17 = arr_11 [i_1] [i_4];
                    /* LoopNest 2 */
                    for (long long int i_5 = 3; i_5 < 14; i_5 += 1) 
                    {
                        for (unsigned int i_6 = 1; i_6 < 15; i_6 += 1) 
                        {
                            {
                                var_18 -= ((/* implicit */unsigned int) (+((+(((var_8) ? (((/* implicit */int) (unsigned char)244)) : (((/* implicit */int) var_8))))))));
                                arr_20 [i_0] [i_1] [i_0] [i_5] [i_1] [i_5 + 2] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_18 [i_1] [i_5] [i_5])) ? (((((/* implicit */_Bool) arr_17 [i_6] [10] [i_4] [i_1] [i_1] [i_1] [i_0])) ? (max((((/* implicit */long long int) (unsigned char)109)), (arr_2 [i_0] [i_0] [i_4]))) : (((/* implicit */long long int) ((/* implicit */int) min(((unsigned char)25), ((unsigned char)156))))))) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_5 + 1] [i_6 + 1])))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_17 [i_0] [i_0 - 1] [i_0 + 1] [i_0] [i_0 - 1] [i_0 - 1] [i_0 + 2])) ? (((/* implicit */int) arr_17 [i_0] [i_0] [i_0 + 1] [i_0 + 2] [i_0] [i_0 - 1] [i_0 + 2])) : (((/* implicit */int) arr_17 [i_0 - 1] [i_0 + 2] [i_0 + 1] [i_0 + 1] [i_0] [i_0] [i_0 + 2])))) < (((/* implicit */int) max((arr_13 [(unsigned char)7] [(unsigned char)9] [i_0 + 1] [i_0] [12] [12LL]), (arr_17 [i_0] [i_0] [i_0 + 1] [i_0] [i_0 + 2] [i_0] [i_0 + 2]))))));
                }
                for (unsigned char i_7 = 2; i_7 < 14; i_7 += 4) 
                {
                    arr_23 [i_7] [i_1] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_15 [i_7 - 1] [i_0 - 1] [i_0 + 2])) ? (((/* implicit */int) arr_19 [i_0 - 1] [i_0 + 2] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1])) : (((/* implicit */int) arr_19 [i_0 - 1] [i_0 + 2] [i_0 + 2] [i_0 + 1] [i_0 - 1] [i_0 + 1] [i_0 + 1])))) * (((((/* implicit */_Bool) arr_19 [i_0 + 2] [i_0 + 1] [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_0 + 1] [i_0 - 1])) ? (((/* implicit */int) arr_19 [i_0 + 2] [i_0 + 2] [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_0 + 2] [i_0 + 2])) : (arr_15 [i_7 + 2] [i_0 - 1] [i_0 - 1])))));
                    var_20 = var_9;
                    var_21 *= ((/* implicit */_Bool) arr_17 [i_0 - 1] [i_0 - 1] [i_0 + 1] [2LL] [i_1] [i_0 + 1] [i_7 + 2]);
                }
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_8 = 0; i_8 < 18; i_8 += 4) 
    {
        for (int i_9 = 0; i_9 < 18; i_9 += 1) 
        {
            for (int i_10 = 0; i_10 < 18; i_10 += 1) 
            {
                {
                    arr_31 [i_8] [i_8] = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_24 [i_8])) << (6U))) << (((var_14) + (3694636119470005337LL)))));
                    /* LoopNest 2 */
                    for (unsigned char i_11 = 1; i_11 < 17; i_11 += 3) 
                    {
                        for (unsigned char i_12 = 1; i_12 < 17; i_12 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_24 [i_11 + 1]), (arr_24 [i_11 - 1])))) ? (((/* implicit */int) arr_24 [i_11 + 1])) : (((((/* implicit */_Bool) arr_24 [i_11 - 1])) ? (((/* implicit */int) (unsigned char)164)) : (((/* implicit */int) arr_24 [i_11 + 1])))))))));
                                arr_36 [i_8] [i_9] [i_10] [i_11] [i_12] = ((/* implicit */unsigned char) ((arr_29 [i_12 + 1] [i_10] [14U]) % (((/* implicit */long long int) max((((/* implicit */unsigned int) (-(((/* implicit */int) arr_33 [i_9] [i_11]))))), ((~(var_2))))))));
                                var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) min((((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_7)), (arr_24 [i_8])))) ? (arr_32 [8] [i_9] [i_10] [i_10]) : (((((/* implicit */_Bool) arr_25 [i_12 - 1] [i_9])) ? (arr_27 [i_11 + 1] [i_8]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)91))))))), (((/* implicit */unsigned int) ((unsigned char) max((arr_29 [i_9] [i_9] [(unsigned char)9]), (arr_29 [i_8] [(unsigned short)7] [i_8]))))))))));
                                var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_24 [13U])) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)156)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)101))) : (arr_26 [i_8] [i_8] [i_8])))) ? (max((3648021469U), (((/* implicit */unsigned int) (unsigned short)9344)))) : (arr_32 [i_8] [i_9] [i_11 + 1] [i_12 - 1]))) : (((/* implicit */unsigned int) (+(((/* implicit */int) min((arr_25 [i_8] [i_9]), ((unsigned char)106))))))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 4 */
                    for (unsigned short i_13 = 1; i_13 < 15; i_13 += 3) 
                    {
                        arr_41 [i_8] [i_8] [i_10] [i_13] = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) (~(((/* implicit */int) ((unsigned char) arr_34 [i_8] [i_9])))))), (arr_26 [i_8] [i_8] [i_10])));
                        var_25 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_29 [(unsigned short)15] [i_10] [i_13])))) ? (((/* implicit */int) arr_38 [i_13] [i_13 + 2])) : (((/* implicit */int) (unsigned short)43841))))) ? ((~(arr_27 [i_8] [i_8]))) : (((((/* implicit */_Bool) max((arr_34 [i_8] [2]), (((/* implicit */unsigned short) (unsigned char)233))))) ? (min((arr_27 [15] [i_8]), (((/* implicit */unsigned int) arr_24 [i_9])))) : (((/* implicit */unsigned int) (-2147483647 - 1)))))));
                    }
                    /* vectorizable */
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        arr_44 [i_8] [(unsigned short)8] [i_10] [i_14] [i_14] = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)141)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)57897)))));
                        arr_45 [i_8] [i_9] [i_10] [i_10] = ((/* implicit */unsigned int) arr_40 [i_8] [i_9] [i_9] [i_8] [i_8] [i_8]);
                        var_26 = (-(((/* implicit */int) (unsigned char)0)));
                    }
                    /* vectorizable */
                    for (unsigned char i_15 = 0; i_15 < 18; i_15 += 3) 
                    {
                        arr_49 [(unsigned char)12] [(unsigned char)12] [(unsigned char)12] = ((/* implicit */short) ((((/* implicit */unsigned int) (-(((/* implicit */int) arr_30 [i_8] [i_8] [i_10] [i_15]))))) >= (arr_27 [i_8] [i_15])));
                        arr_50 [i_8] [i_8] [i_9] [i_10] [i_10] [i_15] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_24 [i_8])))))) / (((((/* implicit */unsigned int) ((/* implicit */int) var_15))) & (4167193882U)))));
                    }
                    for (unsigned short i_16 = 1; i_16 < 16; i_16 += 2) 
                    {
                        var_27 = ((/* implicit */unsigned int) (!(((((/* implicit */_Bool) ((((/* implicit */int) var_12)) >> (((arr_52 [i_16] [8U] [i_9] [i_8]) - (2798907508U)))))) || (((/* implicit */_Bool) (unsigned char)99))))));
                        arr_54 [i_8] [i_9] [i_16] [i_16 + 2] = ((/* implicit */unsigned char) min((arr_52 [i_8] [i_8] [i_8] [i_8]), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((arr_51 [i_10]) / (((/* implicit */int) (unsigned char)194))))))))));
                    }
                }
            } 
        } 
    } 
}
