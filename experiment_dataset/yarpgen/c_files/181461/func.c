/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181461
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181461 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181461
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 4; i_0 < 21; i_0 += 1) 
    {
        var_20 = ((/* implicit */unsigned short) min((((long long int) min((7LL), (((/* implicit */long long int) (unsigned char)255))))), (((/* implicit */long long int) arr_0 [i_0]))));
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            var_21 = ((/* implicit */unsigned char) (-((-(((/* implicit */int) ((var_6) == (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))))))))));
            arr_4 [13LL] [i_1] = ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */int) arr_3 [i_0 - 1] [i_0 - 1])) * (((/* implicit */int) arr_3 [i_0 + 1] [i_0]))))) - ((-(((((/* implicit */_Bool) arr_3 [i_1] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_17))) : (arr_2 [(signed char)13] [(signed char)13] [i_0])))))));
        }
        for (unsigned char i_2 = 1; i_2 < 22; i_2 += 1) 
        {
            arr_8 [i_2 + 2] [i_0] [i_0] = ((/* implicit */short) ((((((/* implicit */int) arr_1 [i_0 - 3])) == (((/* implicit */int) arr_1 [i_0 - 3])))) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_5 [i_0 + 3]))))) : (((long long int) ((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_4)))))));
            arr_9 [(unsigned char)7] [i_0] [i_0 - 4] = ((/* implicit */short) ((((((/* implicit */_Bool) (unsigned char)243)) && (((/* implicit */_Bool) (short)2)))) ? (((((/* implicit */long long int) arr_7 [i_0 - 3])) % (min((((/* implicit */long long int) arr_3 [i_2] [i_0])), (arr_2 [i_2] [i_0 + 3] [i_0 - 1]))))) : (((((/* implicit */long long int) (-(((/* implicit */int) arr_5 [i_0]))))) & (var_19)))));
            arr_10 [(unsigned char)12] [(signed char)13] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */int) ((short) arr_1 [i_0]))) > (((/* implicit */int) ((1277484658082273428LL) > (arr_2 [(signed char)4] [i_2] [i_2])))))))));
            arr_11 [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_2 + 2])) || (((((/* implicit */_Bool) arr_1 [i_0 - 2])) || (((/* implicit */_Bool) arr_2 [6U] [i_0 - 2] [i_0]))))));
        }
    }
    for (short i_3 = 3; i_3 < 12; i_3 += 4) 
    {
        arr_15 [13LL] [13LL] = ((/* implicit */unsigned char) ((((long long int) ((((/* implicit */int) (unsigned char)243)) / (((/* implicit */int) (signed char)(-127 - 1)))))) | (min((((/* implicit */long long int) var_11)), (arr_2 [(signed char)5] [i_3] [i_3])))));
        var_22 *= ((unsigned char) min((((/* implicit */int) (!(((/* implicit */_Bool) var_11))))), ((~(((/* implicit */int) var_16))))));
        var_23 = ((/* implicit */short) (((~(((((/* implicit */int) var_7)) | (((/* implicit */int) var_2)))))) * (((/* implicit */int) arr_3 [i_3 + 1] [i_3 + 1]))));
        arr_16 [i_3] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_3]))) > (arr_7 [i_3 + 2])))) == (((/* implicit */int) var_5))));
        arr_17 [(unsigned char)3] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) (-((+(((/* implicit */int) (unsigned char)17))))))) : (((((/* implicit */_Bool) ((long long int) 3U))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_7))) != (arr_2 [i_3] [i_3] [(short)16]))))) : (arr_7 [i_3 + 2])))));
    }
    /* LoopNest 2 */
    for (long long int i_4 = 1; i_4 < 23; i_4 += 2) 
    {
        for (unsigned short i_5 = 0; i_5 < 25; i_5 += 4) 
        {
            {
                var_24 -= ((/* implicit */unsigned char) min((max(((unsigned short)65535), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)12))))))), (((/* implicit */unsigned short) (signed char)18))));
                /* LoopSeq 3 */
                for (signed char i_6 = 0; i_6 < 25; i_6 += 3) /* same iter space */
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (signed char i_7 = 0; i_7 < 25; i_7 += 4) 
                    {
                        arr_29 [i_4 + 1] [i_6] [i_4] [i_4 + 1] [i_4] [i_4 - 1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_28 [i_4 + 1] [i_4 + 1] [i_4 + 1] [i_4 + 2])) ? (arr_0 [i_4 + 2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))));
                        var_25 = ((/* implicit */short) (((~(var_6))) == (((/* implicit */long long int) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (arr_0 [i_5]) : (arr_21 [i_4]))))));
                        var_26 += ((/* implicit */short) (+(arr_19 [i_4 + 1])));
                    }
                    for (unsigned int i_8 = 0; i_8 < 25; i_8 += 4) 
                    {
                        arr_33 [i_6] [i_5] [i_6] = ((short) arr_28 [(signed char)3] [i_5] [i_5] [i_5]);
                        arr_34 [i_6] = ((/* implicit */unsigned int) var_10);
                        var_27 = ((/* implicit */short) (!(((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_32 [(signed char)0] [i_4 - 1] [i_4 - 1] [(unsigned char)20] [i_4 - 1] [i_4])), (arr_31 [i_4 + 1] [i_4 + 1] [i_4 - 1]))))));
                        arr_35 [i_4] [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_5 [i_6])), (var_0)))) ? (((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) arr_24 [i_5])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_27 [i_8] [i_6] [i_6] [i_4 - 1])))) : (((((/* implicit */int) var_15)) - (((/* implicit */int) arr_3 [i_4] [i_4])))))) : (((/* implicit */int) (((+(((/* implicit */int) var_14)))) < (((/* implicit */int) var_15)))))));
                    }
                    var_28 = ((/* implicit */short) ((signed char) ((((/* implicit */int) var_7)) == (((/* implicit */int) (unsigned short)49165)))));
                    /* LoopSeq 3 */
                    for (short i_9 = 2; i_9 < 23; i_9 += 2) 
                    {
                        arr_38 [i_6] [i_6] [i_5] [i_6] = ((/* implicit */signed char) min((((/* implicit */int) ((unsigned char) arr_32 [i_9 - 1] [i_9] [(signed char)24] [i_9] [18LL] [(signed char)24]))), (((((/* implicit */int) var_12)) & (((((/* implicit */int) arr_5 [i_9 + 1])) - (((/* implicit */int) var_14))))))));
                        var_29 = ((/* implicit */signed char) ((arr_2 [i_6] [i_5] [1U]) - (((/* implicit */long long int) ((/* implicit */int) max((arr_23 [i_4 + 2] [16LL]), (((/* implicit */unsigned short) var_14))))))));
                    }
                    /* vectorizable */
                    for (short i_10 = 3; i_10 < 22; i_10 += 3) 
                    {
                        var_30 = ((/* implicit */signed char) min((var_30), (((/* implicit */signed char) var_13))));
                        arr_42 [i_6] [i_5] [i_6] = ((/* implicit */signed char) ((unsigned short) (+(((/* implicit */int) arr_5 [(signed char)23])))));
                        arr_43 [i_4] [(signed char)10] [i_4] [i_6] [i_4 + 1] = ((((((var_10) % (((/* implicit */long long int) ((/* implicit */int) arr_31 [i_10 + 1] [i_6] [i_5]))))) + (9223372036854775807LL))) << (((((/* implicit */int) var_7)) - (106))));
                    }
                    for (unsigned int i_11 = 0; i_11 < 25; i_11 += 4) 
                    {
                        arr_46 [i_4 + 2] [i_4] [i_6] = ((/* implicit */signed char) ((short) min((min((var_10), (((/* implicit */long long int) (signed char)(-127 - 1))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_18 [i_4]))))))));
                        var_31 = ((/* implicit */signed char) min((var_31), (((/* implicit */signed char) (((!(((/* implicit */_Bool) min((var_5), (((/* implicit */short) var_7))))))) ? (arr_0 [i_4]) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_17))))))))));
                    }
                }
                for (signed char i_12 = 0; i_12 < 25; i_12 += 3) /* same iter space */
                {
                    var_32 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((signed char) arr_18 [i_12])))));
                    var_33 = ((/* implicit */short) (signed char)(-127 - 1));
                    var_34 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (arr_19 [i_12]) : ((-(((((/* implicit */_Bool) 837807371U)) ? (((/* implicit */long long int) 1661587450U)) : (9223372036854775807LL)))))));
                }
                for (signed char i_13 = 0; i_13 < 25; i_13 += 3) /* same iter space */
                {
                    var_35 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_4]))))))))) != (((arr_45 [i_5] [i_4 + 1] [i_4 + 1] [i_4]) | (((/* implicit */long long int) (~(((/* implicit */int) arr_32 [i_4] [i_4 - 1] [i_4] [i_4] [22U] [(short)0])))))))));
                    var_36 = ((/* implicit */long long int) max((var_36), (((/* implicit */long long int) ((((/* implicit */_Bool) ((var_1) & (((/* implicit */long long int) ((/* implicit */int) arr_32 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4 + 2])))))) ? ((~(1U))) : (((/* implicit */unsigned int) ((((((/* implicit */int) arr_32 [24LL] [i_4] [(unsigned char)18] [(unsigned char)9] [i_4] [i_4 + 2])) + (2147483647))) << (((((((/* implicit */int) arr_32 [i_4 - 1] [i_4] [i_4] [i_4 + 2] [i_4] [i_4 + 1])) + (26144))) - (6)))))))))));
                }
            }
        } 
    } 
    var_37 = ((/* implicit */long long int) ((short) min((var_6), (min((var_6), (((/* implicit */long long int) var_5)))))));
    var_38 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (var_0) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_15))))))))));
    var_39 = ((/* implicit */short) min((var_39), (((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_17))) + (var_0)))) && (((/* implicit */_Bool) ((((((/* implicit */int) var_15)) + (2147483647))) >> (((((/* implicit */int) var_4)) + (24991)))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_10))))))) : (((/* implicit */int) var_4)))))));
}
