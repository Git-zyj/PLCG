/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15972
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15972 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15972
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
    for (signed char i_0 = 3; i_0 < 21; i_0 += 3) 
    {
        for (unsigned char i_1 = 2; i_1 < 21; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned char i_3 = 2; i_3 < 20; i_3 += 4) 
                    {
                        {
                            /* LoopSeq 3 */
                            /* vectorizable */
                            for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 4) /* same iter space */
                            {
                                var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) arr_13 [i_3]))));
                                var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_0])) ? (arr_12 [i_0]) : (arr_12 [i_0])));
                                var_19 ^= ((/* implicit */unsigned long long int) ((arr_10 [i_0] [i_0 - 1] [i_0 - 1] [(unsigned char)13] [i_3 + 2] [i_4]) | (arr_10 [i_4] [i_4] [i_3] [i_2] [i_1 + 1] [i_0])));
                                var_20 += ((/* implicit */unsigned char) arr_0 [i_0] [i_0]);
                            }
                            /* vectorizable */
                            for (unsigned long long int i_5 = 0; i_5 < 22; i_5 += 4) /* same iter space */
                            {
                                var_21 = ((/* implicit */unsigned char) (-(arr_14 [i_0 - 1] [i_1 - 1] [i_3 - 2])));
                                var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) ((unsigned char) arr_5 [i_3 - 1] [i_1 + 1])))));
                            }
                            for (unsigned long long int i_6 = 0; i_6 < 22; i_6 += 4) /* same iter space */
                            {
                                var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) (~(max((16372820570003518596ULL), (18446744073709551615ULL))))))));
                                var_24 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_1] [i_1 + 1] [i_1 + 1] [i_3 + 2])) && (((/* implicit */_Bool) arr_7 [i_0] [i_1 - 1] [i_1] [i_3 - 2])))))) / (min((arr_7 [(short)8] [i_1 - 2] [i_3] [i_3 - 1]), (arr_7 [i_1 - 2] [i_1 - 2] [i_2] [i_3 - 1])))));
                                var_25 ^= min((max((min((16372820570003518607ULL), (2073923503706033024ULL))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_9 [i_3] [i_2] [i_1] [i_0]))))))), (((/* implicit */unsigned long long int) max((((/* implicit */int) max((((/* implicit */short) arr_5 [i_0 - 2] [i_0])), (arr_16 [i_6] [i_3] [i_2] [i_1 - 1] [i_0])))), ((-(((/* implicit */int) arr_8 [i_3] [i_6]))))))));
                            }
                            var_26 = min((((/* implicit */unsigned long long int) arr_5 [i_0 - 1] [i_0])), (((((/* implicit */_Bool) arr_12 [i_0])) ? ((~(16372820570003518618ULL))) : (max((arr_0 [i_0] [i_3 + 1]), (2073923503706033024ULL))))));
                            var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) min((((((/* implicit */unsigned long long int) max((-2147483622), (((/* implicit */int) arr_9 [i_3 + 1] [i_2] [i_1 + 1] [i_0 + 1]))))) & (2073923503706033024ULL))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) 2073923503706033026ULL)) && (((/* implicit */_Bool) (short)-24286)))))))))))));
                            var_28 = ((/* implicit */unsigned char) 2073923503706033000ULL);
                            var_29 = ((/* implicit */unsigned char) min((((((/* implicit */int) max((((/* implicit */short) arr_15 [i_0])), (arr_16 [i_0] [i_1] [i_2] [i_2] [i_3])))) / (((((/* implicit */_Bool) arr_15 [i_3])) ? (((/* implicit */int) arr_5 [i_0] [i_1 - 2])) : (((/* implicit */int) (signed char)-16)))))), (((/* implicit */int) max((arr_6 [i_0] [(signed char)14] [i_2] [i_0 - 1]), (arr_6 [(_Bool)1] [i_0 - 1] [i_0 - 1] [i_0 - 1]))))));
                        }
                    } 
                } 
                var_30 = ((/* implicit */unsigned long long int) arr_4 [6ULL] [i_0] [6ULL]);
            }
        } 
    } 
    var_31 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_14))));
    var_32 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min(((~(16372820570003518598ULL))), (var_8)))) ? ((+(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) > (2073923503706033012ULL)))))) : (((/* implicit */int) var_3))));
    /* LoopNest 2 */
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        for (signed char i_8 = 1; i_8 < 10; i_8 += 4) 
        {
            {
                var_33 = ((/* implicit */unsigned long long int) max((var_33), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_8 + 2] [i_7])) ? (((/* implicit */unsigned int) arr_10 [(_Bool)1] [(_Bool)1] [i_8] [i_8] [(signed char)0] [i_8])) : (max((4294967295U), (0U)))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (_Bool)1)), (((arr_12 [(short)12]) << (((((/* implicit */int) arr_2 [(unsigned char)0] [i_8])) + (970)))))))) : (16372820570003518633ULL)))));
                var_34 = ((/* implicit */_Bool) min(((+(((/* implicit */int) arr_17 [i_8 + 1] [i_8] [i_8 + 2] [i_8 + 2] [i_8 + 2] [i_8 - 1] [i_8 + 1])))), ((~(((/* implicit */int) arr_17 [i_8 + 2] [i_8] [i_8 + 2] [i_8 - 1] [i_8 + 2] [i_8 - 1] [i_8 + 1]))))));
                var_35 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_9 [i_7] [11ULL] [i_8] [i_8])), (arr_7 [i_8 + 2] [i_8] [i_7] [i_7])))) ? (16372820570003518593ULL) : (((((/* implicit */unsigned long long int) 4294967292U)) & (10852770507154310604ULL)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_8])) ? (2073923503706033000ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [(signed char)13] [i_8] [i_7] [20U])))))) ? ((~(arr_11 [i_7] [i_7] [i_7] [i_8]))) : (min((((/* implicit */unsigned long long int) (short)4)), (arr_7 [(unsigned char)20] [(unsigned char)11] [i_7] [i_7]))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_16 [i_8 - 1] [i_8 + 1] [i_8 + 2] [i_8 + 2] [i_8 - 1])))))));
                var_36 = min((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (_Bool)1)), (2073923503706033016ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_8] [i_8 + 2]))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)192))) | (arr_11 [i_7] [(signed char)3] [i_8] [i_8]))))), (((/* implicit */unsigned long long int) max((min((arr_3 [i_8] [i_7]), ((unsigned char)168))), (arr_3 [i_7] [i_8 - 1])))));
                var_37 = ((/* implicit */unsigned char) ((min((((/* implicit */unsigned long long int) arr_16 [i_8 - 1] [i_8 + 2] [i_8 - 1] [i_7] [i_7])), (9223301668110598144ULL))) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_17 [i_8 - 1] [i_8] [i_8] [(unsigned char)17] [i_8 - 1] [i_8] [i_7])) ? (((/* implicit */int) arr_2 [i_8] [i_8])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [(signed char)12] [i_8 - 1] [i_8 + 1] [i_7]))))))))));
            }
        } 
    } 
    var_38 = ((/* implicit */unsigned char) max((var_38), (((/* implicit */unsigned char) max((max((var_10), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (2073923503706033043ULL))))), (((/* implicit */unsigned long long int) max((var_6), (((/* implicit */unsigned char) ((2147483647) > (((/* implicit */int) (signed char)-55)))))))))))));
}
