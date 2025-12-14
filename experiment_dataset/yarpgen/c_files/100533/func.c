/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100533
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100533 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100533
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 3; i_1 < 10; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (int i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        var_11 *= ((/* implicit */unsigned int) min((((/* implicit */long long int) ((_Bool) ((((/* implicit */int) (_Bool)0)) & (((/* implicit */int) (unsigned char)206)))))), (-712859446237087663LL)));
                        /* LoopSeq 2 */
                        for (signed char i_4 = 0; i_4 < 13; i_4 += 3) 
                        {
                            var_12 = ((/* implicit */long long int) (_Bool)1);
                            var_13 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) ((unsigned short) (~(((/* implicit */int) (unsigned char)71)))))) : (((/* implicit */int) arr_10 [i_4] [i_4] [i_4] [i_3] [i_4] [i_4] [i_4]))));
                            arr_12 [i_0] [i_1] [i_2] [i_0] [i_0] [i_0] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (unsigned char)216)) ? (((/* implicit */int) (signed char)69)) : (((/* implicit */int) arr_2 [i_1] [i_4])))), (((/* implicit */int) (signed char)70))))) ? (((((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) | (((/* implicit */int) var_4)))) : ((~(((/* implicit */int) arr_4 [i_1] [i_1] [i_1 - 1]))))));
                            arr_13 [i_0] [i_4] [i_4] [i_4] [i_4] [i_2] [i_0] = ((/* implicit */int) min((min(((signed char)109), (((/* implicit */signed char) ((((/* implicit */_Bool) 36028795945222144ULL)) && (((/* implicit */_Bool) (signed char)20))))))), (((/* implicit */signed char) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_6 [i_4] [i_2] [(_Bool)1] [i_3]))))))))));
                        }
                        /* vectorizable */
                        for (signed char i_5 = 0; i_5 < 13; i_5 += 2) 
                        {
                            var_14 = ((/* implicit */short) (unsigned short)31928);
                            var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) var_2))));
                            var_16 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_2))) / (var_3)))) || (((/* implicit */_Bool) ((int) -1423620596243809132LL)))));
                            arr_17 [i_2] [i_1] [i_5] [i_3] [i_0] [i_5] = ((/* implicit */int) (signed char)59);
                        }
                        /* LoopSeq 3 */
                        for (signed char i_6 = 0; i_6 < 13; i_6 += 4) 
                        {
                            arr_20 [i_2] [i_6] = ((/* implicit */long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_6] [i_0] [i_2] [i_1] [i_0])) ? (-1423620596243809131LL) : (((/* implicit */long long int) ((/* implicit */int) var_9))))))))), ((((_Bool)1) ? (((/* implicit */int) (unsigned char)157)) : (((/* implicit */int) (unsigned short)4327))))));
                            arr_21 [i_0] [i_1] [i_2] [i_1] [i_6] = (unsigned char)39;
                            var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) ^ (arr_11 [i_1 + 2] [i_1 + 1])))) ? (((/* implicit */long long int) ((/* implicit */int) max((var_0), ((signed char)20))))) : (((((/* implicit */_Bool) max((-9223372036854775799LL), (((/* implicit */long long int) var_9))))) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (((1423620596243809146LL) | (((/* implicit */long long int) arr_18 [i_6] [i_6] [i_3] [i_2] [11LL] [i_0] [i_0]))))))));
                        }
                        /* vectorizable */
                        for (signed char i_7 = 3; i_7 < 12; i_7 += 3) 
                        {
                            var_18 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)50))) * (0ULL)));
                            arr_26 [i_0] [i_1] [i_7] [i_3] [i_1] [i_7] = ((/* implicit */int) (unsigned char)71);
                        }
                        for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                        {
                            arr_31 [i_0] = ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_0] [i_2] [i_0] [i_1 - 2] [i_8])) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_1)))) : (max((arr_30 [i_0] [i_1 + 1] [i_2] [i_3] [i_8]), (((/* implicit */long long int) arr_9 [i_0] [i_1 + 3] [i_2] [i_3] [i_8 - 1])))))));
                            var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)20)) ? (((/* implicit */int) (signed char)-20)) : (((/* implicit */int) (unsigned char)203))));
                            var_20 += ((/* implicit */signed char) max((((int) 482196323)), (((/* implicit */int) (!(((/* implicit */_Bool) arr_24 [i_0] [i_2] [i_2] [i_8] [i_2])))))));
                            arr_32 [i_2] [i_1 + 1] [i_8 - 1] [i_0] [i_8 - 1] [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) var_7))));
                        }
                    }
                    /* vectorizable */
                    for (signed char i_9 = 4; i_9 < 11; i_9 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_10 = 0; i_10 < 13; i_10 += 2) 
                        {
                            var_21 = ((/* implicit */int) (!(((/* implicit */_Bool) var_1))));
                            arr_37 [i_0] [(_Bool)1] [i_0] [i_0] [i_0] = ((/* implicit */short) (~(((/* implicit */int) arr_2 [i_1 - 2] [i_1]))));
                            var_22 = ((/* implicit */_Bool) (~(((/* implicit */int) var_4))));
                        }
                        arr_38 [2LL] [2LL] [i_2] [1LL] |= ((/* implicit */unsigned int) arr_16 [i_0] [i_1] [i_1 + 2] [i_9 - 1] [i_2] [i_1]);
                        arr_39 [(_Bool)1] [i_1] [i_1] [i_9 + 1] = ((/* implicit */unsigned short) var_5);
                    }
                    for (long long int i_11 = 2; i_11 < 11; i_11 += 3) 
                    {
                        arr_43 [i_11 + 1] [i_11] [i_11] [i_11] [i_11 - 1] = ((/* implicit */int) (+(max(((~(4294967295U))), (((/* implicit */unsigned int) ((_Bool) (signed char)50)))))));
                        var_23 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) var_3))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-125)) ? (((/* implicit */int) (short)-31691)) : (((/* implicit */int) (unsigned char)9))))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_0] [i_0] [i_0] [i_0] [(unsigned short)0]))) : (11ULL))) : (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_4)), (arr_18 [i_0] [i_0] [i_0] [i_1 - 2] [i_1] [i_0] [i_0])))))) : (((/* implicit */unsigned long long int) 1872596542U))));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (long long int i_12 = 0; i_12 < 13; i_12 += 3) 
                        {
                            arr_47 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((var_7) ? (((/* implicit */int) arr_14 [i_12] [i_11 + 1] [i_1 - 2] [i_11 + 2] [i_2] [i_11])) : (((/* implicit */int) arr_14 [i_0] [i_11 - 1] [i_1 + 3] [i_11 + 1] [i_11 + 1] [i_1 + 3]))));
                            arr_48 [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)114))));
                            arr_49 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((signed char) (~(((/* implicit */int) var_10))));
                        }
                        /* vectorizable */
                        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                        {
                            var_24 = ((/* implicit */unsigned short) ((int) arr_23 [i_0] [i_1 - 1] [i_0] [i_1 - 1] [i_13] [i_0]));
                            var_25 = ((/* implicit */short) ((((((/* implicit */int) (unsigned char)238)) ^ (((/* implicit */int) (short)28653)))) != (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned char)72)) : (((/* implicit */int) var_4))))));
                            arr_53 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((((/* implicit */int) (signed char)-20)) + (2147483647))) << (((((long long int) (unsigned char)61)) - (61LL)))));
                            arr_54 [i_0] [i_1 - 2] [i_2] [(_Bool)1] [i_11] [i_13] &= ((/* implicit */long long int) (~((+(((/* implicit */int) (unsigned short)45772))))));
                        }
                        for (unsigned int i_14 = 0; i_14 < 13; i_14 += 4) 
                        {
                            arr_58 [i_0] [i_1] [i_2] [i_0] [i_14] = (+(((/* implicit */int) var_4)));
                            arr_59 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) (!(((_Bool) (unsigned char)47))))) == (((/* implicit */int) (!(((/* implicit */_Bool) arr_36 [i_1] [i_1 + 3] [i_1 - 3] [i_1 + 2] [i_14])))))));
                            arr_60 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] &= (signed char)69;
                        }
                        var_26 = ((/* implicit */_Bool) var_10);
                    }
                    /* LoopNest 2 */
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        for (unsigned long long int i_16 = 0; i_16 < 13; i_16 += 1) 
                        {
                            {
                                var_27 -= (!(((/* implicit */_Bool) 4294967295U)));
                                arr_68 [i_0] [i_16] [i_2] [i_16] [i_16] = (~(((((/* implicit */_Bool) (unsigned char)94)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_65 [i_0] [(unsigned char)5] [i_2] [i_15] [i_16] [i_2])))));
                            }
                        } 
                    } 
                    /* LoopSeq 4 */
                    for (int i_17 = 0; i_17 < 13; i_17 += 1) 
                    {
                        var_28 = ((/* implicit */int) ((((/* implicit */int) ((arr_45 [i_1 - 3] [i_1] [(_Bool)0] [i_1] [i_0] [4U]) != (arr_45 [i_1 + 3] [(unsigned char)6] [i_1 - 3] [i_1] [i_1 + 1] [i_1 + 1])))) != (((/* implicit */int) (!(((/* implicit */_Bool) arr_45 [i_1 + 2] [i_1 - 1] [i_1 + 1] [i_1 - 1] [i_1 - 1] [i_1])))))));
                        arr_72 [(_Bool)1] [i_0] [(signed char)8] [i_2] [i_2] [i_17] |= ((/* implicit */int) (+(arr_18 [i_1 + 2] [(_Bool)1] [i_2] [i_1] [(_Bool)1] [i_0] [i_1])));
                    }
                    for (long long int i_18 = 0; i_18 < 13; i_18 += 3) 
                    {
                        var_29 = ((/* implicit */int) (((+(max((((/* implicit */unsigned int) arr_57 [i_1] [i_2] [i_1])), (arr_36 [i_0] [i_1] [i_2] [i_18] [i_0]))))) >> (((max((-688460493), (((((/* implicit */int) arr_57 [i_1] [i_2] [i_1])) & (((/* implicit */int) var_4)))))) - (64)))));
                        var_30 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_7 [i_18] [i_1] [i_0])) : (((int) ((_Bool) arr_70 [i_18] [i_1] [i_0])))));
                        var_31 = ((/* implicit */int) ((unsigned int) ((((/* implicit */int) ((_Bool) arr_55 [i_18] [i_2] [i_1 - 3] [i_0] [i_0]))) != (((((/* implicit */_Bool) arr_46 [i_0] [i_2] [i_0] [i_0])) ? (((/* implicit */int) (signed char)-37)) : (((/* implicit */int) var_1)))))));
                    }
                    for (unsigned char i_19 = 2; i_19 < 12; i_19 += 3) /* same iter space */
                    {
                        arr_77 [i_19] [i_19 - 2] [i_2] [i_1 + 1] [i_19] = ((/* implicit */unsigned short) max((((/* implicit */int) ((signed char) (signed char)20))), ((~(((/* implicit */int) var_7))))));
                        arr_78 [0LL] [i_19] [(_Bool)1] [i_2] [i_19] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) arr_33 [i_0] [i_0] [i_2] [i_19])) <= (((((/* implicit */_Bool) max((-1725327773), (((/* implicit */int) (unsigned short)20994))))) ? ((+(((/* implicit */int) var_0)))) : (((/* implicit */int) var_2))))));
                    }
                    for (unsigned char i_20 = 2; i_20 < 12; i_20 += 3) /* same iter space */
                    {
                        var_32 = ((/* implicit */long long int) (!(((/* implicit */_Bool) max(((-(((/* implicit */int) (short)28677)))), (max((((/* implicit */int) var_1)), (-1180855688))))))));
                        arr_81 [i_0] [i_1] [i_1 + 2] [i_0] [i_20] = ((/* implicit */unsigned long long int) arr_57 [i_0] [i_1 + 2] [i_20 - 2]);
                        arr_82 [i_20 + 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_9) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)72))) : (arr_69 [i_20] [i_20 - 1] [i_20 - 1])))) ? ((+(((/* implicit */int) arr_55 [i_1 - 3] [i_1] [i_1 - 3] [i_20 + 1] [i_1 - 3])))) : (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_29 [i_0] [i_2] [i_20])) ? (((/* implicit */int) arr_24 [1ULL] [1ULL] [1ULL] [i_20] [i_20 + 1])) : (((/* implicit */int) arr_51 [i_0] [i_1] [i_0] [i_1]))))))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned int i_21 = 1; i_21 < 12; i_21 += 1) 
                    {
                        var_33 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)61))) : (arr_18 [i_21 - 1] [1ULL] [i_21 + 1] [i_1] [i_1 - 1] [i_0] [i_0])))) ? (max((((/* implicit */unsigned int) var_2)), (arr_18 [i_21 - 1] [(unsigned char)12] [(unsigned char)12] [i_0] [i_1 - 1] [i_0] [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))));
                        arr_86 [i_2] [i_21] [i_2] [(short)4] = ((/* implicit */signed char) ((unsigned char) var_2));
                    }
                    var_34 += ((/* implicit */signed char) ((max((((/* implicit */long long int) ((unsigned char) arr_67 [i_0] [i_0] [i_0] [(_Bool)1] [i_1] [i_2] [i_2]))), (((((/* implicit */_Bool) (unsigned short)44516)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-121))))))) | (((/* implicit */long long int) ((/* implicit */int) var_8)))));
                }
            } 
        } 
    } 
    var_35 = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)8161)) ? (((/* implicit */int) (unsigned char)197)) : (((/* implicit */int) var_8))))) ? (((/* implicit */long long int) (+(var_6)))) : (((((/* implicit */_Bool) var_5)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_7))))))));
    var_36 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) ((var_6) == (((/* implicit */int) var_9)))))) ? (max((((((/* implicit */_Bool) 8460127412862646215LL)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_7)))), (((/* implicit */int) ((unsigned short) var_4))))) : (((/* implicit */int) ((((/* implicit */int) max(((short)28680), (((/* implicit */short) var_9))))) >= (((/* implicit */int) ((unsigned char) var_9))))))));
    var_37 *= ((/* implicit */unsigned char) ((12962705148343886698ULL) != (((/* implicit */unsigned long long int) -1725327773))));
}
