/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148278
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148278 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148278
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
    for (int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                {
                    var_17 = ((/* implicit */short) (signed char)-127);
                    arr_9 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((arr_7 [i_0] [i_2] [i_2] [i_2]) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_2] [i_2] [i_1] [i_0]))))) == (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_2] [i_0])))));
                    /* LoopSeq 4 */
                    for (unsigned long long int i_3 = 4; i_3 < 12; i_3 += 4) 
                    {
                        arr_14 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((((/* implicit */int) arr_11 [i_0] [i_3] [i_3 - 2] [i_0])) == (var_14))) ? (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (short)27061)))))) : (((/* implicit */int) (unsigned short)14271))));
                        var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_13 [i_3 - 4])), (arr_11 [i_0] [i_3 - 4] [i_2] [i_1])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1036296434U)) ? (((/* implicit */int) arr_7 [i_3 - 3] [i_3 - 2] [12U] [7U])) : (((/* implicit */int) arr_7 [i_3 - 1] [i_3 - 1] [i_3] [i_3]))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) + (var_13)))));
                        /* LoopSeq 3 */
                        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                        {
                            var_19 ^= (((((+((-(((/* implicit */int) arr_12 [i_3])))))) + (2147483647))) >> (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [(_Bool)1] [i_1] [i_1]))))) >= (((/* implicit */int) arr_12 [i_3]))))));
                            var_20 += ((/* implicit */unsigned int) (-(((arr_0 [i_3 - 3]) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) : (var_9)))));
                        }
                        for (int i_5 = 3; i_5 < 11; i_5 += 2) 
                        {
                            var_21 = ((/* implicit */signed char) var_12);
                            arr_21 [i_0] [i_3 - 3] [i_2] [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_20 [i_0] [i_0] [i_2] [i_2] [i_3 - 1] [i_0] [i_3]), (arr_20 [i_0] [i_1] [i_2] [i_3 - 1] [i_3 - 3] [i_0] [(short)10])))) ? ((-(var_9))) : (((/* implicit */long long int) ((/* implicit */int) (short)-7135)))));
                            var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) min(((~(((/* implicit */int) min(((signed char)-53), (arr_10 [i_1])))))), (((/* implicit */int) (short)7120)))))));
                            var_23 = ((/* implicit */_Bool) min((var_23), ((!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1]))) & (arr_5 [i_1] [i_2] [i_5]))))))));
                        }
                        for (signed char i_6 = 0; i_6 < 13; i_6 += 1) 
                        {
                            arr_24 [i_0] [i_1] [i_0] [i_0] [i_6] = ((/* implicit */long long int) (+(arr_8 [i_0] [i_0] [i_0] [i_0])));
                            var_24 -= ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((min((arr_3 [i_1] [i_1]), (2376609594U))) == (min((((/* implicit */unsigned int) var_3)), (3464023344U)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (arr_4 [i_2] [i_1] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_1])))))) ? (16190005137052711798ULL) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) var_2)) : (arr_23 [i_0] [i_0] [(short)9] [i_0] [i_0])))))));
                            var_25 ^= ((/* implicit */long long int) (~(((/* implicit */int) min(((signed char)-1), (((/* implicit */signed char) arr_0 [i_3 - 4])))))));
                            var_26 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 12134536840709857254ULL)) ? (((/* implicit */int) (unsigned char)220)) : (((/* implicit */int) arr_12 [i_0]))))) ? ((~(1918357685U))) : (arr_8 [i_0] [i_0] [i_0] [i_0]))))));
                        }
                        var_27 &= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (short)7134)) == (((((/* implicit */int) var_1)) << (((32767LL) - (32762LL))))))))) & ((+(((((/* implicit */_Bool) -9223372036854775796LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : (12134536840709857263ULL)))))));
                        var_28 = ((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) (~(arr_23 [i_0] [5U] [i_0] [i_0] [i_0])))) || ((!(((/* implicit */_Bool) arr_10 [i_0])))))));
                    }
                    for (int i_7 = 0; i_7 < 13; i_7 += 3) 
                    {
                        var_29 *= ((/* implicit */signed char) min((arr_4 [i_0] [i_1] [i_0]), (((/* implicit */unsigned int) arr_22 [i_0] [i_0] [i_2] [i_0] [i_0] [8U] [i_0]))));
                        var_30 &= ((/* implicit */unsigned int) (((+(2542373203585718927LL))) << (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_2] [i_2])))))));
                    }
                    /* vectorizable */
                    for (unsigned char i_8 = 0; i_8 < 13; i_8 += 2) /* same iter space */
                    {
                        arr_30 [i_0] [i_1] [11] [i_1] = ((((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_0]))))) ? (arr_4 [i_0] [i_0] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_2]))));
                        var_31 = ((/* implicit */long long int) min((var_31), (((/* implicit */long long int) ((1516168176U) >> (((((/* implicit */int) arr_27 [i_8] [i_2] [i_2] [i_1] [i_1] [i_0])) - (22580))))))));
                    }
                    for (unsigned char i_9 = 0; i_9 < 13; i_9 += 2) /* same iter space */
                    {
                        var_32 = ((/* implicit */unsigned short) (+(((2376609572U) * (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_0] [i_0] [i_0] [i_0])))))));
                        var_33 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)63)) ? (((/* implicit */int) arr_10 [i_0])) : (arr_17 [i_1] [i_2] [i_1] [i_0] [i_0])))) ? (((((/* implicit */_Bool) arr_12 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0]))) : (2778799136U))) : (((/* implicit */unsigned int) ((/* implicit */int) (((+(-5025955270577212851LL))) > (((/* implicit */long long int) (-(((/* implicit */int) var_10)))))))))));
                        arr_33 [i_0] [i_9] [i_2] [i_1] [i_0] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_28 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9]), (arr_28 [(short)2] [i_9] [i_2] [i_1] [(short)2] [(short)2])))) ? (((/* implicit */long long int) min((((/* implicit */unsigned int) arr_22 [i_0] [i_0] [i_0] [i_0] [i_0] [7LL] [i_0])), (arr_4 [i_9] [i_0] [i_1])))) : (arr_20 [i_1] [i_1] [i_1] [i_1] [i_1] [i_0] [i_1]))))));
                    }
                }
            } 
        } 
    } 
    var_34 = ((/* implicit */unsigned long long int) min((var_34), (((((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) 5025955270577212829LL)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_1)))) : (((((/* implicit */_Bool) (+(var_2)))) ? (min((((/* implicit */unsigned long long int) (unsigned short)17992)), (36011204832919552ULL))) : (min((((/* implicit */unsigned long long int) var_6)), (36011204832919552ULL)))))))));
    var_35 = ((/* implicit */_Bool) min((133955584U), (((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) 3258670861U)) || (((/* implicit */_Bool) var_5))))) != (var_6))))));
    /* LoopSeq 1 */
    for (short i_10 = 0; i_10 < 18; i_10 += 4) 
    {
        var_36 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_35 [i_10])) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_34 [i_10]))))) : (var_9))) | (((/* implicit */long long int) ((/* implicit */int) arr_34 [i_10])))));
        /* LoopNest 2 */
        for (long long int i_11 = 0; i_11 < 18; i_11 += 3) 
        {
            for (unsigned char i_12 = 0; i_12 < 18; i_12 += 2) 
            {
                {
                    var_37 = ((/* implicit */signed char) ((long long int) (+(arr_37 [i_10] [i_11] [i_12]))));
                    arr_43 [i_11] [(short)8] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) var_14))))) & (((/* implicit */int) ((((/* implicit */_Bool) arr_41 [i_10] [i_10] [i_10])) || (((/* implicit */_Bool) (unsigned short)18010))))))))));
                }
            } 
        } 
        /* LoopSeq 2 */
        /* vectorizable */
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
        {
            /* LoopNest 2 */
            for (short i_14 = 0; i_14 < 18; i_14 += 1) 
            {
                for (long long int i_15 = 0; i_15 < 18; i_15 += 1) 
                {
                    {
                        arr_50 [0LL] [i_13] [i_10] &= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_34 [i_14])) ? (((/* implicit */int) arr_38 [i_10] [5U] [i_14])) : (var_8))) < (((/* implicit */int) (!(((/* implicit */_Bool) 3258670887U)))))));
                        /* LoopSeq 3 */
                        for (long long int i_16 = 0; i_16 < 18; i_16 += 4) 
                        {
                            var_38 = ((/* implicit */short) min((var_38), (((/* implicit */short) arr_44 [i_16] [i_13] [i_15]))));
                            arr_54 [i_10] [i_10] [(short)16] [i_10] [(short)16] [i_10] [i_13] = ((/* implicit */unsigned int) (signed char)29);
                            arr_55 [i_10] [i_13] [i_13] = ((/* implicit */int) arr_49 [i_13]);
                            var_39 = ((/* implicit */short) min((var_39), (((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_38 [(short)11] [i_13] [i_16]))) == ((+(var_0))))))));
                            arr_56 [i_10] [i_10] [i_13] [i_13] [i_14] [i_15] [i_13] = ((/* implicit */unsigned short) ((arr_41 [i_10] [i_10] [i_10]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_49 [i_13]))))))));
                        }
                        for (signed char i_17 = 0; i_17 < 18; i_17 += 4) 
                        {
                            var_40 = ((/* implicit */long long int) ((arr_36 [i_14]) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_35 [i_17])))));
                            var_41 = ((/* implicit */long long int) min((var_41), (((/* implicit */long long int) ((unsigned int) var_12)))));
                            var_42 *= ((/* implicit */unsigned char) arr_41 [i_17] [i_14] [i_14]);
                        }
                        for (unsigned int i_18 = 0; i_18 < 18; i_18 += 1) 
                        {
                            var_43 = ((/* implicit */long long int) var_10);
                            arr_62 [i_13] [i_15] [i_14] [i_13] [i_13] = ((/* implicit */long long int) ((unsigned char) (_Bool)1));
                            arr_63 [i_10] [i_10] [(unsigned short)2] [i_10] [i_10] [i_10] [i_13] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)0)) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127))) : (arr_36 [(short)9]))) : (((/* implicit */unsigned long long int) var_8))));
                            var_44 |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_53 [i_10] [i_10] [i_10] [10] [(unsigned short)16] [i_10] [i_15])) : (((/* implicit */int) arr_60 [i_10] [i_10]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (((((/* implicit */_Bool) arr_40 [i_10] [i_10] [i_15] [i_18])) ? (var_0) : (((/* implicit */unsigned int) 134217727))))));
                        }
                        var_45 = ((/* implicit */short) (((~(((/* implicit */int) arr_34 [3U])))) > (((/* implicit */int) arr_38 [i_13] [i_13] [i_15]))));
                        var_46 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_51 [i_10] [(unsigned short)5] [i_10] [i_10]))));
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (short i_19 = 0; i_19 < 18; i_19 += 3) 
            {
                arr_67 [i_10] [i_10] [i_13] = ((/* implicit */unsigned int) arr_34 [i_19]);
                var_47 += ((/* implicit */short) ((((/* implicit */_Bool) arr_65 [i_19] [i_10] [i_10] [i_10])) ? (((/* implicit */long long int) ((/* implicit */int) arr_65 [i_13] [i_10] [i_10] [i_10]))) : (-3493024874770701671LL)));
                arr_68 [i_19] [i_10] [i_10] &= ((/* implicit */int) var_1);
                var_48 = ((/* implicit */short) max((var_48), (((/* implicit */short) (((+(4294967265U))) + (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)255))))))))));
            }
        }
        /* vectorizable */
        for (short i_20 = 2; i_20 < 15; i_20 += 4) 
        {
            var_49 = ((/* implicit */unsigned int) min((var_49), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_64 [i_20 + 2] [i_20 - 1] [i_20 - 1])) ? (((/* implicit */int) arr_34 [i_20 + 1])) : (((/* implicit */int) arr_34 [i_20 - 1])))))));
            var_50 ^= ((/* implicit */int) (short)-3341);
            /* LoopNest 2 */
            for (unsigned int i_21 = 0; i_21 < 18; i_21 += 3) 
            {
                for (unsigned int i_22 = 1; i_22 < 16; i_22 += 4) 
                {
                    {
                        var_51 *= ((/* implicit */short) arr_49 [i_10]);
                        arr_75 [i_22 - 1] [i_22] [i_22] [11LL] [i_10] = ((/* implicit */_Bool) arr_64 [i_21] [i_21] [i_20 - 1]);
                    }
                } 
            } 
            arr_76 [i_10] [i_10] [i_10] = ((/* implicit */unsigned int) ((((((/* implicit */int) (unsigned short)65530)) == (((/* implicit */int) arr_35 [i_10])))) ? ((~(1745194628))) : (((/* implicit */int) arr_53 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10] [i_10]))));
            var_52 = ((/* implicit */int) min((var_52), (((/* implicit */int) 3176193361U))));
        }
    }
}
