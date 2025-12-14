/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173478
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173478 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173478
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
    for (signed char i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */unsigned short) var_15);
                /* LoopSeq 4 */
                for (unsigned int i_2 = 0; i_2 < 18; i_2 += 4) 
                {
                    var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) max((arr_0 [i_1]), (min((((var_1) >> (((/* implicit */int) arr_3 [i_2] [(_Bool)1] [i_2])))), (((/* implicit */unsigned int) min((var_10), (((/* implicit */short) var_5))))))))))));
                    var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) 13LL))));
                    var_20 = ((/* implicit */short) min((var_2), (((/* implicit */unsigned int) ((short) max((((/* implicit */unsigned char) arr_3 [i_0] [(unsigned char)16] [i_0])), (arr_2 [15] [i_1])))))));
                }
                for (long long int i_3 = 2; i_3 < 17; i_3 += 3) 
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_4 = 0; i_4 < 18; i_4 += 2) 
                    {
                        var_21 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_4 [i_1] [i_1] [i_3] [i_4])))) == ((~(((/* implicit */int) (short)10979)))))))) >= ((+(((arr_0 [i_0]) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)136)))))))));
                        arr_14 [i_3] [(_Bool)1] [(signed char)10] [i_0] [(_Bool)1] [i_3 + 1] = ((/* implicit */short) var_5);
                        arr_15 [(unsigned short)14] [i_1] [i_3 - 2] [i_0] = ((/* implicit */unsigned int) arr_9 [i_0] [i_1] [i_0] [i_3]);
                        arr_16 [i_0] [i_4] = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) (short)18102)), (((((/* implicit */_Bool) min((((/* implicit */unsigned int) (signed char)-49)), (2795280335U)))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-49))))) : (arr_11 [i_1] [i_1] [i_1] [i_3])))));
                    }
                    for (signed char i_5 = 0; i_5 < 18; i_5 += 3) 
                    {
                        arr_20 [i_0] [i_5] [i_5] [17] [i_0] [i_3] = ((/* implicit */_Bool) (short)18102);
                        var_22 = ((/* implicit */signed char) arr_10 [i_0] [i_5]);
                        var_23 = ((/* implicit */int) ((min((((/* implicit */unsigned int) (short)18114)), (max((((/* implicit */unsigned int) (signed char)-49)), (3331329396U))))) >> (((max((((/* implicit */unsigned int) (unsigned short)18)), (3331329396U))) - (3331329371U)))));
                    }
                    /* LoopSeq 2 */
                    for (signed char i_6 = 3; i_6 < 17; i_6 += 2) 
                    {
                        var_24 = ((/* implicit */signed char) (((_Bool)0) ? (((/* implicit */int) (short)-18104)) : (((/* implicit */int) (((+(((/* implicit */int) (signed char)-7)))) <= (((/* implicit */int) (signed char)15)))))));
                        arr_23 [i_0] [i_0] [(unsigned short)15] [i_6 - 1] = ((/* implicit */short) ((unsigned short) (signed char)6));
                        var_25 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) min((((/* implicit */short) (signed char)112)), ((short)7)))) : (((/* implicit */int) (signed char)-112))));
                        arr_24 [(short)2] [i_1] [i_3] [i_3 + 1] [i_0] = ((/* implicit */short) min((((((/* implicit */long long int) ((/* implicit */int) ((signed char) (signed char)-111)))) <= (((((/* implicit */long long int) ((/* implicit */int) arr_17 [i_0]))) + (0LL))))), (((((/* implicit */long long int) ((((/* implicit */_Bool) (short)-18103)) ? (((/* implicit */int) arr_2 [i_1] [i_3])) : (((/* implicit */int) arr_18 [i_0] [i_0] [(signed char)8] [i_1]))))) > ((-(4294963200LL)))))));
                    }
                    for (unsigned int i_7 = 2; i_7 < 17; i_7 += 4) 
                    {
                        var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) min(((unsigned char)77), (arr_2 [i_3] [i_3]))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 3842804159U)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (short)-7))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_25 [i_1] [i_0] [i_7] [i_0])) ? (((/* implicit */int) arr_9 [i_0] [i_1] [i_0] [i_7])) : (((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0]))))) : (((((/* implicit */long long int) ((/* implicit */int) arr_21 [i_0] [i_7]))) + (-1853901519206459614LL))))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-7)))));
                        arr_27 [i_1] [i_0] [i_1] [i_1] = ((/* implicit */signed char) (~(((/* implicit */int) arr_22 [i_3 - 1] [i_3 - 1] [i_0]))));
                        var_27 |= ((/* implicit */unsigned char) arr_17 [i_7]);
                    }
                    arr_28 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((((/* implicit */int) min((min((((/* implicit */short) (signed char)-1)), ((short)-23721))), (((/* implicit */short) arr_25 [i_3 - 1] [i_3] [i_3 + 1] [i_0]))))) + (2147483647))) >> (((((/* implicit */int) arr_18 [i_0] [i_0] [i_3 + 1] [i_0])) - (50)))));
                }
                /* vectorizable */
                for (short i_8 = 1; i_8 < 16; i_8 += 4) 
                {
                    var_28 = ((/* implicit */short) (((+(((/* implicit */int) (signed char)-62)))) % ((~(((/* implicit */int) arr_22 [i_0] [i_1] [i_0]))))));
                    arr_32 [i_0] = ((/* implicit */signed char) ((((((/* implicit */int) (short)(-32767 - 1))) | (((/* implicit */int) (short)-1)))) % (((((/* implicit */int) (unsigned char)119)) / (((/* implicit */int) var_7))))));
                }
                for (short i_9 = 0; i_9 < 18; i_9 += 4) 
                {
                    /* LoopSeq 2 */
                    for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) /* same iter space */
                    {
                        var_29 = min((((max((-1853901519206459606LL), (((/* implicit */long long int) var_9)))) / (((/* implicit */long long int) ((/* implicit */int) var_4))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_30 [i_1] [i_1] [i_0])) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) >= (var_1)))) : (((((/* implicit */int) arr_10 [i_9] [i_10])) / (((/* implicit */int) arr_18 [(unsigned char)0] [i_10] [i_1] [i_9]))))))));
                        var_30 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) (short)1)) : (((/* implicit */int) (signed char)55))))) ^ (((((((/* implicit */_Bool) arr_26 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)32758))) : (2079773905U))) + (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) arr_12 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_19 [i_0] [(short)8] [i_0] [i_0])))))))));
                        /* LoopSeq 1 */
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            var_31 &= ((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-11))));
                            var_32 = ((/* implicit */_Bool) min(((~(min((3331329396U), (((/* implicit */unsigned int) var_16)))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-115)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (short)-23)))))));
                            var_33 &= ((/* implicit */unsigned short) (signed char)-48);
                        }
                        var_34 = ((/* implicit */_Bool) (short)-32747);
                    }
                    for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) /* same iter space */
                    {
                        var_35 = ((/* implicit */signed char) max((var_35), (((/* implicit */signed char) ((((/* implicit */_Bool) (-(var_2)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (arr_44 [i_12 - 1] [i_12 - 1] [i_12 - 1] [i_12 - 1] [i_12 - 1]))))));
                        var_36 += ((max((((/* implicit */int) (unsigned char)245)), (((((/* implicit */int) arr_46 [i_0] [i_1] [i_9] [i_12] [i_1])) % (((/* implicit */int) var_8)))))) <= (((/* implicit */int) ((((/* implicit */int) min((arr_47 [1LL] [1LL] [i_9] [i_12]), (((/* implicit */signed char) arr_36 [i_0] [i_1]))))) >= (((/* implicit */int) arr_6 [(unsigned char)0] [i_12] [i_9] [i_12]))))));
                        /* LoopSeq 4 */
                        for (unsigned int i_13 = 0; i_13 < 18; i_13 += 4) 
                        {
                            arr_50 [i_1] [i_0] [i_1] = ((/* implicit */unsigned short) max((((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_12] [i_13] [i_0] [i_12])) || (((/* implicit */_Bool) (short)10740))))), (min(((+(((/* implicit */int) arr_4 [i_0] [12U] [12U] [(_Bool)1])))), (((/* implicit */int) (signed char)-1))))));
                            var_37 = ((((/* implicit */_Bool) (-(((/* implicit */int) var_16))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_12 - 1] [i_12 - 1] [i_12 - 1] [i_12 - 1] [i_12 - 1]))) : (((((/* implicit */_Bool) arr_18 [i_13] [i_12] [i_9] [i_0])) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_17 [i_0])) & (((/* implicit */int) arr_46 [i_0] [i_1] [i_9] [i_12] [i_13]))))) : (max((((/* implicit */unsigned int) arr_48 [i_13] [i_0] [(signed char)4] [i_0] [i_0])), (arr_43 [i_0] [i_1] [i_0] [i_0] [i_13]))))));
                        }
                        for (signed char i_14 = 0; i_14 < 18; i_14 += 3) /* same iter space */
                        {
                            var_38 ^= ((/* implicit */short) ((((/* implicit */int) var_13)) >= ((~(((/* implicit */int) max(((unsigned char)245), ((unsigned char)174))))))));
                            var_39 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)8190)) ? ((+(((/* implicit */int) (signed char)19)))) : (((/* implicit */int) (short)16794))));
                            var_40 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */int) arr_47 [i_12] [i_12] [i_12] [i_12 - 1])), (((((/* implicit */int) var_11)) - (((/* implicit */int) (signed char)19))))))) ? (((/* implicit */int) arr_10 [i_1] [i_9])) : (((/* implicit */int) arr_8 [i_12 - 1] [i_12 - 1] [i_12 - 1] [i_12 - 1]))));
                            var_41 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned short)57346)), (((((/* implicit */_Bool) arr_17 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-36))) : (min((((/* implicit */unsigned int) (short)7)), (var_1)))))));
                        }
                        /* vectorizable */
                        for (signed char i_15 = 0; i_15 < 18; i_15 += 3) /* same iter space */
                        {
                            var_42 = ((/* implicit */short) max((var_42), (((/* implicit */short) (-(((/* implicit */int) (signed char)4)))))));
                            var_43 |= ((/* implicit */signed char) arr_0 [i_12 - 1]);
                            var_44 = ((/* implicit */_Bool) var_6);
                        }
                        for (signed char i_16 = 0; i_16 < 18; i_16 += 3) /* same iter space */
                        {
                            var_45 ^= ((/* implicit */signed char) max((((/* implicit */unsigned int) arr_45 [i_16] [(signed char)1] [i_1] [(signed char)1])), (((((/* implicit */_Bool) min((((/* implicit */short) arr_49 [i_0] [i_1] [(unsigned char)13] [i_9] [i_12] [i_16])), (arr_8 [i_0] [i_1] [i_9] [i_12 - 1])))) ? (min((((/* implicit */unsigned int) arr_19 [i_9] [i_0] [i_1] [i_9])), (var_3))) : (arr_0 [i_0])))));
                            var_46 ^= (short)-1;
                        }
                        var_47 = ((/* implicit */signed char) (~(((((/* implicit */int) (signed char)2)) * (((/* implicit */int) ((((/* implicit */int) (short)-23721)) >= (((/* implicit */int) (signed char)-127)))))))));
                        var_48 += ((/* implicit */signed char) min((((((/* implicit */_Bool) (unsigned short)4088)) ? (((/* implicit */int) min((arr_45 [i_12] [i_9] [15] [15]), (((/* implicit */short) (signed char)-48))))) : (((/* implicit */int) (signed char)2)))), (min((((/* implicit */int) (unsigned char)123)), (((((/* implicit */int) (short)14)) * (((/* implicit */int) arr_29 [(short)12] [(signed char)12] [i_9] [i_12]))))))));
                    }
                    var_49 = ((/* implicit */signed char) (-(((/* implicit */int) min((arr_25 [i_0] [i_0] [i_1] [i_0]), (((/* implicit */signed char) ((963637904U) == (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1))))))))))));
                }
                var_50 &= ((/* implicit */long long int) (short)3840);
            }
        } 
    } 
    var_51 = ((/* implicit */int) max((4294967295U), (((/* implicit */unsigned int) (signed char)-127))));
}
