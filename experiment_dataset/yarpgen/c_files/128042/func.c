/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128042
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128042 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128042
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
    for (unsigned long long int i_0 = 1; i_0 < 12; i_0 += 1) 
    {
        for (unsigned short i_1 = 4; i_1 < 12; i_1 += 4) 
        {
            {
                var_15 += ((/* implicit */short) max((min((arr_2 [i_1 + 1] [i_0]), (arr_2 [i_1 + 2] [i_1]))), (-1)));
                var_16 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_2 [i_0 + 1] [i_1 - 4])) ? (min((((/* implicit */long long int) arr_1 [1LL])), (-5725195325399839839LL))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)22)) <= (((/* implicit */int) (unsigned char)255)))))))) >= (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 878945368)) ? (arr_5 [i_0 - 1] [i_0] [i_0 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0])))))) ? ((+(((/* implicit */int) (signed char)54)))) : (((/* implicit */int) (!(((/* implicit */_Bool) 486366394))))))))));
                /* LoopSeq 4 */
                for (unsigned char i_2 = 1; i_2 < 13; i_2 += 1) 
                {
                    arr_10 [i_0] [i_1 - 3] [i_2] [i_2] = ((/* implicit */unsigned char) (!((((!(((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])))) || (((/* implicit */_Bool) (unsigned short)8191))))));
                    var_17 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (~((~(-876939155))))))));
                    var_18 &= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_0 - 1])) + (((/* implicit */int) arr_1 [i_0 + 1]))))) - (min((((/* implicit */unsigned long long int) (unsigned short)8191)), (arr_4 [i_2 + 1] [i_2 + 1] [i_2])))));
                }
                for (short i_3 = 0; i_3 < 14; i_3 += 3) 
                {
                    arr_13 [i_1] [i_1] = ((/* implicit */short) (~((+(arr_4 [i_0] [i_0] [i_0])))));
                    /* LoopNest 2 */
                    for (signed char i_4 = 1; i_4 < 12; i_4 += 4) 
                    {
                        for (int i_5 = 0; i_5 < 14; i_5 += 4) 
                        {
                            {
                                arr_19 [i_0] [i_4] [i_4] [i_4] [i_4] [i_4 - 1] [i_1] = ((/* implicit */unsigned char) max(((!(((((/* implicit */_Bool) arr_14 [(_Bool)1] [i_1] [(_Bool)1] [(signed char)7])) && (((/* implicit */_Bool) arr_15 [i_0] [i_0])))))), ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)2)) ? (-37330632) : (((/* implicit */int) (unsigned short)18163)))))))));
                                arr_20 [9] [i_4] [i_3] [i_0] [i_4] [i_0] = ((/* implicit */unsigned short) ((_Bool) max((((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)81)) && (((/* implicit */_Bool) (unsigned short)57344))))), ((unsigned short)8192))));
                            }
                        } 
                    } 
                    arr_21 [i_0] [i_0] [i_3] = max((((((/* implicit */_Bool) min((((/* implicit */unsigned short) (unsigned char)25)), (arr_6 [i_3] [i_3] [i_1] [i_0])))) ? ((-(((/* implicit */int) var_1)))) : (((/* implicit */int) min(((unsigned short)57344), (((/* implicit */unsigned short) arr_1 [i_0]))))))), (((((/* implicit */_Bool) arr_6 [i_0] [i_1] [(short)1] [i_3])) ? ((+(-841942731))) : (((/* implicit */int) (unsigned short)47358)))));
                }
                for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                {
                    var_19 = ((/* implicit */short) max((arr_11 [i_0 + 2]), (((((/* implicit */_Bool) ((((/* implicit */_Bool) -1LL)) ? (((/* implicit */int) (signed char)-50)) : (((/* implicit */int) arr_3 [i_0 + 1]))))) && (((/* implicit */_Bool) arr_4 [i_6 + 1] [i_6 + 1] [i_6 + 1]))))));
                    var_20 -= ((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)3205))) <= (arr_14 [i_0] [i_1] [i_1 + 1] [i_1 + 1]))))));
                    arr_24 [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((long long int) 18014398509481983ULL)))));
                }
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    var_21 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((17788022644080086251ULL), (((/* implicit */unsigned long long int) arr_5 [i_0] [i_1] [i_0]))))) ? (((((/* implicit */_Bool) (unsigned short)3839)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)57348))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 3550922592U))))))));
                    /* LoopSeq 2 */
                    for (unsigned short i_8 = 0; i_8 < 14; i_8 += 1) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (signed char i_9 = 0; i_9 < 14; i_9 += 4) 
                        {
                            var_22 = (i_7 % 2 == 0) ? (((/* implicit */long long int) (((((-(((/* implicit */int) arr_29 [i_0] [i_1] [i_1] [i_8] [i_7])))) + (2147483647))) >> (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)57322)))))))) : (((/* implicit */long long int) (((((((-(((/* implicit */int) arr_29 [i_0] [i_1] [i_1] [i_8] [i_7])))) - (2147483647))) + (2147483647))) >> (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)57322))))))));
                            var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_0] [i_0] [i_0 + 1] [i_0] [7])) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)243)) | (((/* implicit */int) arr_1 [i_8]))))) : ((~(arr_7 [9LL] [i_9] [i_7])))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)8197)) | (arr_26 [i_0 - 1] [i_7] [i_0 + 2])))) : (((((/* implicit */_Bool) (~(12644858559939827985ULL)))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)21851))))) : ((~(arr_5 [i_8] [i_1 - 2] [(_Bool)1])))))));
                        }
                        var_24 = ((/* implicit */signed char) ((min((min((((/* implicit */unsigned long long int) (unsigned short)65535)), (arr_12 [i_8]))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)12))))))) | (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0 - 1]))) + (-6235264758488745784LL))))));
                        arr_31 [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((((/* implicit */int) arr_18 [i_8] [(unsigned short)2] [i_1] [i_1 - 2] [i_0 + 1])) % (878945348)))))) ? (((((arr_11 [i_1]) ? (-8335658753768321432LL) : (((/* implicit */long long int) arr_9 [i_1])))) / (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_29 [i_0] [6] [i_7] [i_8] [i_7])))))) : (((/* implicit */long long int) arr_15 [i_1] [i_1]))));
                        arr_32 [i_0] [i_1] [i_1] [i_7] = ((/* implicit */long long int) max((((/* implicit */int) var_11)), (max(((-(1675627034))), (((((/* implicit */int) arr_23 [i_0 - 1] [i_1] [i_7] [i_7])) / (((/* implicit */int) var_11))))))));
                    }
                    for (unsigned short i_10 = 0; i_10 < 14; i_10 += 1) /* same iter space */
                    {
                        arr_37 [i_7] [4ULL] = ((/* implicit */unsigned int) min((((short) arr_4 [i_1] [i_1] [i_0 + 1])), (((/* implicit */short) (!(((/* implicit */_Bool) arr_4 [i_1] [i_1] [i_0 - 1])))))));
                        arr_38 [i_7] [i_10] [i_7] [i_7] [1U] [2] = (-(((/* implicit */int) ((signed char) arr_34 [i_7]))));
                        var_25 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)31479)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_30 [i_10] [i_1 + 1] [9U] [i_10])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) (unsigned char)1)) : (((/* implicit */int) (_Bool)1))))) : (15ULL))) & (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_22 [i_0 + 1] [i_0 - 1] [i_0] [i_0 - 1])), (arr_0 [i_0 + 2]))))));
                    }
                }
                var_26 = ((/* implicit */_Bool) (+((~(((((/* implicit */int) (unsigned char)31)) + (((/* implicit */int) (short)16318))))))));
            }
        } 
    } 
    var_27 = var_14;
    var_28 = ((/* implicit */unsigned long long int) min((var_28), (((/* implicit */unsigned long long int) (+(max((((-6235264758488745784LL) - (((/* implicit */long long int) ((/* implicit */int) var_8))))), (((/* implicit */long long int) min((((/* implicit */unsigned int) 1459486604)), (1312433087U)))))))))));
    var_29 = ((/* implicit */unsigned short) (-(max((((/* implicit */int) min((((/* implicit */signed char) var_11)), ((signed char)-1)))), (var_14)))));
}
