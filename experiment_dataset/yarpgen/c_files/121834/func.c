/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121834
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121834 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121834
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
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 3) /* same iter space */
    {
        arr_3 [(signed char)3] [i_0] &= ((/* implicit */unsigned int) ((int) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_0 [i_0] [i_0])), (var_5))))) != (((unsigned long long int) (short)-1)))));
        /* LoopSeq 3 */
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                var_10 = ((/* implicit */short) (!(((/* implicit */_Bool) -5114724183372520813LL))));
                /* LoopSeq 4 */
                for (short i_3 = 1; i_3 < 11; i_3 += 3) 
                {
                    var_11 |= var_8;
                    var_12 += ((/* implicit */_Bool) max(((+(((/* implicit */int) var_6)))), (((/* implicit */int) max((arr_10 [i_3 + 1] [i_3 + 1] [i_3] [2]), (arr_10 [i_3 + 1] [(unsigned short)6] [i_3 + 1] [i_3 - 1]))))));
                }
                for (unsigned short i_4 = 1; i_4 < 11; i_4 += 2) /* same iter space */
                {
                    var_13 = arr_13 [i_0] [(short)5] [(short)5] [(unsigned short)10];
                    var_14 = max((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [(signed char)8] [i_2] [i_0] [i_0])) ? (((/* implicit */int) var_1)) : (-404087665)))) && (((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) var_0))))))), (((((/* implicit */_Bool) (short)-8)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (short)-14)))));
                }
                for (unsigned short i_5 = 1; i_5 < 11; i_5 += 2) /* same iter space */
                {
                    var_15 = ((/* implicit */int) ((max((((/* implicit */long long int) max(((short)-21259), (((/* implicit */short) (signed char)-9))))), (140737488355264LL))) / (((/* implicit */long long int) ((((/* implicit */int) (short)7)) << (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)207)) || (((/* implicit */_Bool) 9223372036854775807LL))))))))));
                    var_16 = ((/* implicit */signed char) ((((((/* implicit */int) min((((/* implicit */signed char) arr_5 [i_0] [i_1] [i_2])), ((signed char)-9)))) | (((/* implicit */int) arr_5 [(short)11] [(short)11] [i_2])))) == (((/* implicit */int) arr_10 [i_0] [(signed char)8] [i_2] [i_5 + 1]))));
                    var_17 = ((/* implicit */unsigned short) ((signed char) (((!(((/* implicit */_Bool) arr_0 [i_0] [6LL])))) || (((/* implicit */_Bool) var_8)))));
                }
                for (unsigned short i_6 = 1; i_6 < 11; i_6 += 2) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (int i_7 = 0; i_7 < 12; i_7 += 3) 
                    {
                        var_18 = (i_7 % 2 == 0) ? (((/* implicit */unsigned char) min((((((((/* implicit */int) (signed char)-37)) + (2147483647))) >> (((/* implicit */int) max((var_4), (arr_21 [i_7] [i_6] [i_2] [i_2] [i_1] [i_7])))))), (((/* implicit */int) max((((((/* implicit */int) (signed char)63)) != (((/* implicit */int) (short)-4)))), (((((/* implicit */_Bool) 2071154996)) || (((/* implicit */_Bool) (short)18)))))))))) : (((/* implicit */unsigned char) min((((((((/* implicit */int) (signed char)-37)) + (2147483647))) >> (((((/* implicit */int) max((var_4), (arr_21 [i_7] [i_6] [i_2] [i_2] [i_1] [i_7])))) - (51))))), (((/* implicit */int) max((((((/* implicit */int) (signed char)63)) != (((/* implicit */int) (short)-4)))), (((((/* implicit */_Bool) 2071154996)) || (((/* implicit */_Bool) (short)18))))))))));
                        var_19 = min((((/* implicit */int) ((((/* implicit */int) (unsigned char)208)) <= (((/* implicit */int) (signed char)-1))))), (((((((/* implicit */int) arr_7 [i_6 + 1] [i_2])) + (2147483647))) << (((((var_2) + (2079102021))) - (30))))));
                    }
                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 12; i_8 += 3) 
                    {
                        var_20 ^= ((/* implicit */signed char) (~(((/* implicit */int) var_1))));
                        arr_24 [i_1] [i_0] [i_0] [i_0] [i_8] = ((/* implicit */long long int) ((arr_6 [i_6 - 1]) & (arr_6 [i_6 - 1])));
                    }
                    var_21 &= ((/* implicit */short) ((((/* implicit */_Bool) arr_23 [i_6 - 1] [i_6 - 1] [(signed char)11] [(signed char)11])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [3U] [i_6 - 1] [i_2] [i_2])) ? (((/* implicit */int) arr_23 [1ULL] [i_6 - 1] [i_0] [i_0])) : (((/* implicit */int) arr_23 [i_6 + 1] [i_6 - 1] [i_2] [i_2])))))));
                }
                var_22 += ((/* implicit */long long int) (+(((/* implicit */int) (short)32767))));
                /* LoopNest 2 */
                for (long long int i_9 = 2; i_9 < 11; i_9 += 4) 
                {
                    for (int i_10 = 0; i_10 < 12; i_10 += 3) 
                    {
                        {
                            var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_9 - 1] [i_9 - 1] [i_9 - 1] [i_10])) ? (((/* implicit */int) (signed char)-30)) : (((/* implicit */int) arr_14 [i_9 + 1] [i_9 + 1] [i_9 + 1] [i_9 - 1]))))) ? (((((/* implicit */_Bool) (unsigned short)49284)) ? (arr_1 [i_9 + 1]) : (((/* implicit */int) (signed char)-104)))) : ((~(((/* implicit */int) arr_21 [i_2] [i_2] [i_2] [i_9 - 1] [i_10] [i_9]))))));
                            var_24 = ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) max((((/* implicit */unsigned short) (short)23416)), ((unsigned short)65535)))) : (((((((/* implicit */_Bool) arr_30 [i_0])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_26 [i_0] [i_0] [i_0] [i_9 - 2])))) / (((((/* implicit */_Bool) arr_26 [i_0] [(unsigned short)10] [i_2] [i_0])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_9 [11ULL] [(short)11] [i_9] [i_9 - 2] [(unsigned short)1] [i_0])))))));
                            var_25 *= ((/* implicit */int) ((((/* implicit */long long int) ((min((-88638867), (var_2))) / (((/* implicit */int) min((((/* implicit */short) arr_5 [i_10] [i_2] [i_1])), ((short)-4))))))) / (((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1] [i_1] [i_10]))) - (((((/* implicit */long long int) ((/* implicit */int) arr_30 [i_10]))) + (-5357068273563229900LL)))))));
                        }
                    } 
                } 
            }
            var_26 = max(((+(var_2))), (((/* implicit */int) max((((((/* implicit */int) (signed char)19)) != (((/* implicit */int) var_3)))), ((_Bool)1)))));
            var_27 &= ((/* implicit */unsigned short) ((((/* implicit */int) arr_13 [i_0] [i_0] [i_1] [i_0])) - (max((((((/* implicit */int) (short)31)) - (((/* implicit */int) var_5)))), (((/* implicit */int) arr_16 [i_1]))))));
            var_28 = ((/* implicit */signed char) ((((((/* implicit */int) arr_23 [i_0] [i_1] [i_1] [i_0])) - (((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) arr_20 [10] [i_1] [10] [(short)0] [0U] [i_1])) : (((/* implicit */int) (signed char)-27)))))) >= (((/* implicit */int) var_6))));
        }
        for (unsigned short i_11 = 0; i_11 < 12; i_11 += 1) /* same iter space */
        {
            var_29 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) 311877041U))))) - (((((/* implicit */int) var_5)) / (((/* implicit */int) arr_21 [(unsigned short)0] [i_11] [i_0] [i_11] [i_11] [i_11])))))))));
            var_30 -= ((/* implicit */_Bool) ((max((((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-69))) : (1821848158U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)1714)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_9))))))) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_0] [i_11]))))))));
        }
        for (unsigned short i_12 = 0; i_12 < 12; i_12 += 1) /* same iter space */
        {
            arr_35 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(15416083889230988469ULL)))) ? (arr_34 [i_0] [i_12] [i_0]) : (((arr_34 [i_0] [i_0] [i_12]) / (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))));
            var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */int) (signed char)(-127 - 1))), (((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) var_1))))))) && (((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_18 [7LL] [i_12] [i_0] [i_0])), ((unsigned short)12509))))));
        }
    }
    for (unsigned char i_13 = 0; i_13 < 12; i_13 += 3) /* same iter space */
    {
        var_32 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) ((255056469U) + (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [(short)9] [(short)9] [i_13] [i_13])))))) ? ((-(((/* implicit */int) (_Bool)1)))) : (((((/* implicit */int) var_4)) % (((/* implicit */int) var_6))))))));
        arr_38 [i_13] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) min(((unsigned char)195), (var_9)))) >> (((((/* implicit */int) (unsigned char)36)) - (29))))))));
    }
    var_33 = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)54)) % (((/* implicit */int) ((((((/* implicit */_Bool) (signed char)108)) ? (((/* implicit */int) var_7)) : (var_0))) >= (((((/* implicit */int) var_1)) | (((/* implicit */int) (signed char)15)))))))));
    var_34 *= ((/* implicit */unsigned int) var_3);
}
