/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173189
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173189 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173189
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
    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */signed char) ((((/* implicit */unsigned long long int) var_12)) > (var_13)))), (var_7))))) : (((((/* implicit */long long int) ((/* implicit */int) var_3))) | (min((((/* implicit */long long int) var_8)), (var_15)))))));
    /* LoopSeq 4 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 2) /* same iter space */
    {
        var_17 = (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0]))))));
        var_18 = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_1 [i_0])) % (((/* implicit */int) var_10)))) >= (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0]))))));
        arr_3 [i_0] = ((/* implicit */unsigned char) (((~(((((/* implicit */_Bool) (signed char)1)) ? (arr_2 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_3))))))) & (((/* implicit */long long int) ((/* implicit */int) var_8)))));
        var_19 = ((/* implicit */short) (~(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_3))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned short i_1 = 2; i_1 < 8; i_1 += 4) 
        {
            var_20 = ((/* implicit */short) ((unsigned short) ((int) (signed char)-1)));
            var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) (signed char)1)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)1))) : (-4045398609527526098LL))) & (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [0LL] [i_1])))))))))));
        }
        for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 4) 
        {
            var_22 -= ((/* implicit */unsigned short) ((unsigned int) ((min((arr_8 [i_0]), (((/* implicit */unsigned long long int) arr_1 [i_0])))) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))));
            var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_3))))))))) * (((((/* implicit */_Bool) ((signed char) arr_2 [i_0]))) ? (((((/* implicit */long long int) ((/* implicit */int) var_14))) ^ (var_11))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_7)))))))))));
        }
        for (signed char i_3 = 0; i_3 < 11; i_3 += 1) 
        {
            var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0] [7U] [i_0])))))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) var_15)) : (16178062100543738957ULL)))))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-114))) : (arr_7 [i_0] [i_0]))) : (var_5))))));
            arr_12 [6LL] [i_0] [i_0] = ((/* implicit */long long int) ((((_Bool) ((((/* implicit */_Bool) arr_8 [i_3])) ? (var_5) : (arr_2 [i_0])))) ? (((/* implicit */int) ((((/* implicit */int) arr_9 [i_3])) > (((/* implicit */int) var_3))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (var_11)))) ? (((/* implicit */int) ((((/* implicit */int) var_10)) >= (((/* implicit */int) arr_9 [i_3]))))) : (min((arr_6 [i_3] [i_3] [i_0]), (((/* implicit */int) var_7))))))));
        }
    }
    for (long long int i_4 = 0; i_4 < 11; i_4 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_5 = 2; i_5 < 9; i_5 += 4) 
        {
            /* LoopSeq 1 */
            for (long long int i_6 = 1; i_6 < 10; i_6 += 3) 
            {
                var_25 *= ((/* implicit */unsigned int) (-(arr_11 [5U] [i_5 - 2] [i_6 - 1])));
                var_26 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_16 [i_4] [i_5 - 1]))));
                var_27 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) -8427638348716473423LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767))) : (var_0)))));
                var_28 &= ((/* implicit */unsigned int) var_8);
            }
            var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_4 [i_4] [i_5] [i_5])) ^ (var_4)))) * (((unsigned int) var_10))));
            var_30 = ((/* implicit */signed char) (-(var_15)));
        }
        var_31 -= ((/* implicit */long long int) min((((((var_0) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1))))) - (((((/* implicit */_Bool) 11459667362272609511ULL)) ? (arr_8 [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))), (((/* implicit */unsigned long long int) ((unsigned char) (unsigned char)217)))));
        var_32 &= ((int) (!(((/* implicit */_Bool) arr_16 [i_4] [i_4]))));
        var_33 = ((/* implicit */short) min((var_33), (((/* implicit */short) ((((/* implicit */_Bool) ((min((((/* implicit */unsigned long long int) (signed char)-1)), (var_13))) << ((((-(arr_8 [i_4]))) - (817069101159586573ULL)))))) ? (((/* implicit */long long int) (-(arr_16 [i_4] [i_4])))) : (min((((((arr_2 [i_4]) + (9223372036854775807LL))) << (((((arr_10 [(signed char)5]) + (8494753991547086689LL))) - (54LL))))), (((/* implicit */long long int) 246082080U)))))))));
    }
    for (signed char i_7 = 0; i_7 < 16; i_7 += 4) 
    {
        var_34 = ((/* implicit */short) arr_23 [i_7]);
        var_35 &= ((/* implicit */unsigned char) min((((signed char) ((((/* implicit */_Bool) arr_22 [i_7])) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_6)))), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_22 [i_7])) && (((/* implicit */_Bool) ((long long int) var_8))))))));
        /* LoopSeq 2 */
        for (signed char i_8 = 0; i_8 < 16; i_8 += 2) 
        {
            var_36 = ((/* implicit */long long int) (short)5028);
            var_37 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) 8427638348716473423LL))) ? (((((/* implicit */_Bool) arr_21 [i_7] [i_7])) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_7] [(unsigned char)1]))))) : (((long long int) min(((unsigned char)44), (((/* implicit */unsigned char) arr_22 [i_8])))))));
        }
        for (unsigned long long int i_9 = 1; i_9 < 12; i_9 += 1) 
        {
            var_38 = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_7] [i_9 + 4]))) + (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_7] [i_9]))) : (var_13))))) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_24 [i_9] [i_9 + 4])))))));
            var_39 *= ((/* implicit */unsigned char) ((((int) ((arr_27 [i_7] [i_9] [8LL]) ? (((/* implicit */int) arr_24 [i_9] [i_7])) : (((/* implicit */int) (signed char)-114))))) & (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (!(arr_27 [i_7] [i_7] [(short)9]))))) <= ((~(var_6))))))));
        }
        var_40 = var_5;
    }
    for (short i_10 = 0; i_10 < 16; i_10 += 2) 
    {
        var_41 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_29 [i_10])), (var_11)))), (((unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_10]))) : (var_15))))));
        var_42 = min((min((min((((/* implicit */long long int) arr_21 [(signed char)8] [(signed char)8])), (9223372036854775807LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_28 [i_10] [i_10])) && (((/* implicit */_Bool) var_4))))))), (((((/* implicit */_Bool) 3985249202381672118LL)) ? (((((/* implicit */_Bool) arr_26 [i_10])) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (8705435093486074851LL))) : (((/* implicit */long long int) ((/* implicit */int) var_1))))));
        /* LoopNest 2 */
        for (long long int i_11 = 0; i_11 < 16; i_11 += 4) 
        {
            for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
            {
                {
                    var_43 *= ((/* implicit */signed char) (+(((/* implicit */int) arr_21 [i_11] [i_10]))));
                    var_44 = ((/* implicit */signed char) var_12);
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned short i_13 = 0; i_13 < 16; i_13 += 4) 
                    {
                        var_45 = ((/* implicit */unsigned int) ((signed char) ((((var_15) + (9223372036854775807LL))) << (((((-8427638348716473423LL) + (8427638348716473478LL))) - (54LL))))));
                        var_46 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_27 [(short)7] [i_11] [i_11]))))) ? (((/* implicit */int) arr_25 [i_12 - 1] [i_12 - 1])) : (((((/* implicit */int) var_2)) ^ (((/* implicit */int) arr_26 [i_10]))))));
                        arr_37 [i_13] [(signed char)7] [i_12] [i_12] [i_11] [i_10] = ((/* implicit */unsigned int) ((((((/* implicit */long long int) var_4)) & (var_5))) <= (((/* implicit */long long int) ((/* implicit */int) (signed char)1)))));
                        var_47 = ((/* implicit */signed char) ((((/* implicit */int) arr_25 [i_10] [i_11])) == (arr_36 [i_10] [i_12] [i_12 - 1] [i_12 - 1] [11U])));
                    }
                    for (signed char i_14 = 2; i_14 < 15; i_14 += 4) 
                    {
                        var_48 = ((/* implicit */unsigned char) arr_34 [i_10] [i_11] [i_10]);
                        var_49 = ((/* implicit */unsigned int) min((var_49), (((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) var_8))) && (((/* implicit */_Bool) (+(((/* implicit */int) arr_30 [i_12])))))))))))));
                        var_50 &= ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) (-((+(arr_28 [i_10] [i_14])))))) : (min((((/* implicit */long long int) arr_34 [i_12 - 1] [i_14 + 1] [i_14 - 1])), (arr_39 [i_14 - 2] [i_14 + 1])))));
                    }
                    var_51 = ((/* implicit */unsigned int) arr_30 [i_10]);
                    var_52 = ((/* implicit */long long int) min((var_52), (((/* implicit */long long int) (~(min((((/* implicit */int) arr_25 [i_10] [i_12 - 1])), (var_4))))))));
                }
            } 
        } 
        var_53 = ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_21 [i_10] [15ULL]))) % (((((/* implicit */_Bool) arr_38 [1LL] [i_10] [i_10] [1LL])) ? (arr_38 [i_10] [i_10] [i_10] [i_10]) : (3985249202381672118LL))))));
    }
}
