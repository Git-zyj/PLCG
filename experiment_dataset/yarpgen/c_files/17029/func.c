/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17029
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17029 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17029
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
    var_13 = ((/* implicit */unsigned int) min((((unsigned short) var_7)), (var_4)));
    var_14 = ((/* implicit */unsigned int) (unsigned short)16368);
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) arr_2 [i_0]);
        var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)49167)) & (((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)164)) && (((/* implicit */_Bool) var_2))))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0]))))));
        arr_4 [i_0] = ((/* implicit */int) ((((/* implicit */long long int) arr_2 [i_0])) & (((long long int) arr_2 [i_0]))));
        var_16 = ((/* implicit */signed char) ((((/* implicit */long long int) arr_2 [i_0])) != ((~(min((((/* implicit */long long int) (unsigned short)16378)), (arr_0 [i_0] [21])))))));
    }
    for (signed char i_1 = 3; i_1 < 10; i_1 += 1) 
    {
        var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)28)))))));
        arr_8 [i_1] |= (~(((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1 + 2]))) / (arr_0 [i_1 - 1] [i_1 + 1]))));
    }
    for (long long int i_2 = 0; i_2 < 15; i_2 += 1) 
    {
        /* LoopSeq 2 */
        for (signed char i_3 = 0; i_3 < 15; i_3 += 2) 
        {
            var_18 -= ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_3])) && (((/* implicit */_Bool) arr_13 [i_2]))))) == (((/* implicit */int) min((((/* implicit */short) (unsigned char)224)), ((short)3775))))));
            /* LoopSeq 3 */
            for (unsigned char i_4 = 0; i_4 < 15; i_4 += 3) 
            {
                var_19 = (-(((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_2]))) * (arr_17 [i_2] [i_3] [i_2]))));
                arr_20 [i_2] [i_2] [i_3] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) arr_17 [i_2] [i_3] [i_3]))) ? (((/* implicit */unsigned int) arr_16 [i_3] [i_3])) : (min((((/* implicit */unsigned int) (unsigned char)234)), (var_0)))))) ? (((/* implicit */int) (((~(((/* implicit */int) (unsigned char)237)))) <= (((/* implicit */int) (unsigned short)16362))))) : (((/* implicit */int) (((+(var_5))) > (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_4]))))))));
                arr_21 [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-((-(arr_2 [i_4])))))) || (((33554431U) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_2] [i_3] [i_4])))))));
            }
            /* vectorizable */
            for (unsigned int i_5 = 0; i_5 < 15; i_5 += 1) 
            {
                arr_24 [i_2] = ((/* implicit */short) var_1);
                /* LoopNest 2 */
                for (unsigned char i_6 = 0; i_6 < 15; i_6 += 3) 
                {
                    for (unsigned int i_7 = 2; i_7 < 14; i_7 += 3) 
                    {
                        {
                            var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) var_6))));
                            var_21 ^= ((/* implicit */unsigned int) (((~(((/* implicit */int) (signed char)-116)))) > (((/* implicit */int) arr_22 [i_2] [i_7 - 2] [i_5] [i_6]))));
                            var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 1663045271U)) ? (((/* implicit */int) arr_22 [i_7 - 2] [i_7 - 2] [i_7 - 1] [i_7 - 2])) : (((/* implicit */int) arr_22 [i_7 - 2] [i_7 - 2] [i_7 - 1] [i_7 - 2]))));
                        }
                    } 
                } 
            }
            for (signed char i_8 = 0; i_8 < 15; i_8 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned int i_9 = 0; i_9 < 15; i_9 += 3) 
                {
                    for (int i_10 = 0; i_10 < 15; i_10 += 3) 
                    {
                        {
                            arr_39 [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_2] [i_2])) ? (arr_12 [i_2] [i_2]) : (arr_12 [i_2] [i_2])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) arr_28 [i_10] [i_10] [(short)6] [i_3] [i_3] [i_2] [i_2])), (var_12)))) ? (((/* implicit */int) ((signed char) var_6))) : (((/* implicit */int) (unsigned short)34702)))))));
                            var_23 ^= ((/* implicit */signed char) ((((arr_2 [i_2]) / (1765929730U))) / (min((arr_2 [i_9]), (((/* implicit */unsigned int) (signed char)34))))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (signed char i_11 = 3; i_11 < 13; i_11 += 3) 
                {
                    var_24 = ((((/* implicit */_Bool) max((arr_18 [i_11 + 1] [i_11 + 1] [i_11 + 1] [i_11]), (arr_18 [i_11 - 1] [i_11 + 1] [i_11] [i_11])))) ? (max((arr_18 [i_11 - 3] [i_11 - 2] [i_11] [(unsigned short)11]), (arr_18 [i_11 - 3] [(signed char)3] [i_11 - 1] [i_11]))) : (((arr_18 [i_11 + 2] [i_11] [i_11 - 2] [i_11 + 2]) >> (((arr_18 [i_11 + 2] [i_11] [i_11] [i_11]) - (4117004521U))))));
                    var_25 = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-46))) - (arr_38 [i_2] [i_3] [i_11 + 2] [i_11 + 2] [i_8] [11LL] [i_3]))));
                    var_26 -= ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_8] [i_11])) ? (((/* implicit */long long int) arr_23 [i_2] [i_3] [i_8] [i_11])) : (9223372036854775807LL)))) ? (arr_18 [i_3] [i_11 - 2] [i_3] [i_11 - 3]) : ((~(24U)))))) >= (arr_29 [i_2] [i_2] [i_3] [(unsigned char)4] [i_3] [9] [i_11])));
                }
                var_27 ^= ((/* implicit */signed char) (+(((/* implicit */int) ((signed char) arr_27 [i_3] [i_3] [i_3] [(unsigned char)2])))));
            }
            var_28 *= ((/* implicit */signed char) (-((~(((/* implicit */int) (signed char)-85))))));
        }
        for (short i_12 = 2; i_12 < 14; i_12 += 4) 
        {
            var_29 = ((/* implicit */unsigned int) min((var_29), (((/* implicit */unsigned int) ((((/* implicit */int) min((arr_22 [i_12] [i_12] [i_12 - 1] [i_12 - 2]), (arr_22 [i_12] [i_12] [i_12 - 1] [8LL])))) < ((((-2147483647 - 1)) + (((/* implicit */int) arr_22 [i_12] [i_12] [i_12 - 2] [i_12])))))))));
            var_30 = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned char)112))));
        }
        var_31 = ((/* implicit */int) ((arr_34 [i_2] [i_2] [i_2]) ^ (((/* implicit */unsigned int) ((/* implicit */int) (signed char)126)))));
        var_32 = ((/* implicit */unsigned char) arr_23 [i_2] [i_2] [i_2] [i_2]);
        var_33 += ((/* implicit */long long int) ((((/* implicit */_Bool) -10LL)) && (((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_17 [i_2] [4U] [(signed char)10])) ? (((/* implicit */int) arr_28 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2])) : (((/* implicit */int) arr_11 [i_2]))))), (((((/* implicit */_Bool) (short)-6506)) ? (1261304272U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)209))))))))));
    }
}
