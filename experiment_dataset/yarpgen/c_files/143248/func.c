/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143248
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
    var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((signed char) var_4)))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        /* LoopSeq 3 */
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            /* LoopNest 2 */
            for (signed char i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                for (unsigned long long int i_3 = 2; i_3 < 12; i_3 += 1) 
                {
                    {
                        var_21 = ((/* implicit */unsigned short) ((((((/* implicit */long long int) ((/* implicit */int) (signed char)-18))) > (arr_3 [i_1] [i_1] [i_1]))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-18)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) (signed char)17))))) : (((((/* implicit */long long int) ((/* implicit */int) (signed char)-18))) | (arr_8 [i_3] [i_3])))));
                        /* LoopSeq 3 */
                        for (long long int i_4 = 0; i_4 < 16; i_4 += 1) 
                        {
                            var_22 ^= ((/* implicit */short) ((long long int) (unsigned short)4095));
                            arr_13 [i_2] [i_3] [i_4] = ((/* implicit */long long int) ((signed char) arr_3 [i_0] [i_1] [i_3 + 1]));
                        }
                        for (signed char i_5 = 1; i_5 < 13; i_5 += 2) 
                        {
                            arr_18 [i_0] [i_1] [i_3] [i_3] [i_5] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)17)) | (((1380001617) % (((/* implicit */int) (unsigned short)4088))))));
                            var_23 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)61455)) ^ (((/* implicit */int) (unsigned short)61469))));
                            arr_19 [i_3] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_3 + 2] [i_3 + 2])) ? (((/* implicit */int) arr_12 [i_1] [i_3 + 4] [i_0] [i_0] [i_2] [i_5 + 2])) : (((/* implicit */int) var_6))));
                            var_24 *= ((/* implicit */unsigned int) ((arr_10 [i_3 + 2] [i_5 + 2] [(signed char)3]) ? (((/* implicit */int) arr_10 [i_3 - 1] [i_5 + 2] [i_5])) : (((/* implicit */int) arr_10 [i_3 + 1] [i_5 + 3] [i_5]))));
                        }
                        for (unsigned char i_6 = 4; i_6 < 14; i_6 += 2) 
                        {
                            arr_24 [i_0] [i_3] [i_1] [(unsigned char)1] = ((/* implicit */unsigned char) var_3);
                            arr_25 [i_3] [i_1] [i_0] [i_3 + 2] [i_6] [i_6] = (unsigned char)64;
                        }
                        var_25 = ((/* implicit */short) ((unsigned char) ((((/* implicit */int) (unsigned short)61464)) >= (((/* implicit */int) (signed char)-18)))));
                        /* LoopSeq 4 */
                        for (long long int i_7 = 1; i_7 < 14; i_7 += 2) 
                        {
                            var_26 = ((/* implicit */short) (-(((/* implicit */int) arr_23 [i_0] [i_3 - 1] [i_2] [i_3] [i_3 - 1] [i_7 - 1]))));
                            var_27 = ((/* implicit */short) (((-(((/* implicit */int) (signed char)-18)))) << (((((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) (unsigned short)4095)) : (((/* implicit */int) (unsigned short)4077)))) - (4074)))));
                            var_28 = ((/* implicit */unsigned long long int) (signed char)29);
                        }
                        for (unsigned short i_8 = 1; i_8 < 15; i_8 += 1) 
                        {
                            arr_30 [i_3] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */signed char) (unsigned short)4102);
                            arr_31 [i_0] [i_3] [i_1] [i_2] [i_3] [i_8 + 1] [i_8] = ((/* implicit */unsigned char) 2147483647);
                            var_29 = ((/* implicit */unsigned char) max((var_29), (((/* implicit */unsigned char) ((var_11) ^ (((/* implicit */int) arr_6 [i_1] [i_2] [(_Bool)1] [i_8 + 1])))))));
                            arr_32 [i_8] [i_3] [i_2] [i_3] [i_0] = ((/* implicit */signed char) ((unsigned short) arr_16 [i_8 - 1] [i_8] [i_8] [i_8 - 1] [i_8]));
                            arr_33 [i_3] [i_8 + 1] [i_3] [i_1] [i_8] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 8473559214584904702ULL)) && (((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)184)))))));
                        }
                        for (unsigned short i_9 = 0; i_9 < 16; i_9 += 4) 
                        {
                            var_30 = ((/* implicit */int) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned short)61415)))) >= (((/* implicit */int) arr_9 [i_3 + 3] [i_1] [i_1] [i_3]))));
                            var_31 = ((/* implicit */unsigned char) (signed char)-29);
                            arr_37 [i_3] [i_1] [i_1] [i_1] [i_1] [11] = ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned char) (signed char)-13))) + (((((/* implicit */_Bool) 14496108582583781290ULL)) ? (((/* implicit */int) (signed char)29)) : (((/* implicit */int) (signed char)3))))));
                            var_32 = ((/* implicit */long long int) max((var_32), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_17 [i_0] [i_1] [i_3 + 4] [i_0] [i_0])) ? ((-(var_16))) : (((/* implicit */int) (short)4095)))))));
                        }
                        for (signed char i_10 = 0; i_10 < 16; i_10 += 3) 
                        {
                            arr_41 [i_2] [i_3 - 1] [2U] [i_3] [i_3] = (unsigned short)4088;
                            arr_42 [i_10] [i_3] [i_2] [i_3] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned short)61462)) : (((/* implicit */int) arr_0 [i_1]))))) ? (((/* implicit */int) (signed char)24)) : (((arr_35 [i_0] [i_0] [i_3] [11LL] [i_3] [i_3] [i_10]) / (((/* implicit */int) (unsigned short)61459))))));
                            arr_43 [i_0] [i_1] [i_2] [i_3] [i_10] [i_10] [i_10] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_22 [i_0] [i_3] [i_2] [i_2] [i_3] [i_10])) ? (((/* implicit */long long int) 2147483647)) : (arr_3 [13ULL] [(unsigned short)13] [i_10])))));
                        }
                        arr_44 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)4085))) : (3474741751U)))) ? (var_11) : (((/* implicit */int) var_19))));
                    }
                } 
            } 
            var_33 = ((/* implicit */short) ((arr_27 [i_0] [i_0] [i_0] [i_1] [i_0] [(signed char)6] [i_1]) >= (arr_27 [i_0] [12] [i_0] [i_0] [i_1] [i_0] [i_1])));
            arr_45 [i_0] [i_0] [i_1] = (unsigned short)61447;
        }
        for (unsigned char i_11 = 0; i_11 < 16; i_11 += 4) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_12 = 0; i_12 < 16; i_12 += 4) 
            {
                for (unsigned char i_13 = 3; i_13 < 14; i_13 += 3) 
                {
                    {
                        var_34 = ((/* implicit */unsigned short) min((var_34), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_40 [i_13 + 1] [i_11] [i_12] [i_0] [i_0] [i_11])) : (var_11))))));
                        arr_54 [i_13] [i_13] [i_12] [i_11] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_36 [i_0] [i_13 - 1] [i_12])) % (((32767) / (((/* implicit */int) arr_39 [(unsigned short)1] [i_11] [i_12] [i_13] [i_12]))))));
                        /* LoopSeq 1 */
                        for (signed char i_14 = 0; i_14 < 16; i_14 += 1) 
                        {
                            var_35 = ((/* implicit */signed char) max((var_35), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_34 [i_13 - 3])) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_53 [i_0] [i_0] [i_12] [i_13]))) >= (8228046434162769379LL)))) : (((/* implicit */int) (unsigned short)4077)))))));
                            var_36 = ((/* implicit */unsigned short) max((var_36), (((/* implicit */unsigned short) (+(((/* implicit */int) arr_11 [i_12] [i_13 + 2] [i_13 + 2] [i_13] [i_13] [i_13 - 1] [i_13 - 1])))))));
                            var_37 = ((/* implicit */short) max((var_37), (((/* implicit */short) var_12))));
                            var_38 = ((/* implicit */unsigned char) max((var_38), (((/* implicit */unsigned char) ((signed char) (+(((/* implicit */int) var_19))))))));
                        }
                    }
                } 
            } 
            var_39 = ((/* implicit */signed char) (+(110717258U)));
            arr_57 [i_0] [i_11] = ((/* implicit */short) ((((/* implicit */int) var_5)) + (((/* implicit */int) var_18))));
        }
        for (unsigned char i_15 = 0; i_15 < 16; i_15 += 4) /* same iter space */
        {
            arr_60 [i_15] [i_15] [i_0] = ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */int) (unsigned short)4088)) > (((/* implicit */int) var_7)))))));
            var_40 = ((/* implicit */unsigned short) arr_29 [i_0] [i_0] [i_15] [i_15]);
            var_41 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2191908077003371352ULL)) ? (arr_5 [i_0] [i_0] [i_0] [i_15]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */int) (unsigned short)61468)) : ((-(((/* implicit */int) (signed char)-93))))));
            var_42 -= ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned short)4096))));
        }
        arr_61 [i_0] = ((/* implicit */unsigned char) ((arr_29 [i_0] [i_0] [i_0] [i_0]) & (((/* implicit */long long int) (+(((/* implicit */int) var_18)))))));
        arr_62 [i_0] [i_0] = ((/* implicit */unsigned char) (!(((((/* implicit */_Bool) (unsigned short)4115)) && (((/* implicit */_Bool) 1U))))));
        arr_63 [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) var_3))));
    }
    for (unsigned short i_16 = 0; i_16 < 11; i_16 += 3) 
    {
        var_43 ^= ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_7))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)136))) / (4184250040U))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)33043)))))) ? (((/* implicit */int) ((((((/* implicit */int) (signed char)-14)) | (((/* implicit */int) arr_56 [(unsigned char)14] [i_16] [i_16] [(unsigned char)12] [i_16])))) <= (((/* implicit */int) ((((/* implicit */_Bool) 777807740U)) || (((/* implicit */_Bool) (signed char)15)))))))) : (((((/* implicit */_Bool) var_8)) ? (((var_11) % (2147483647))) : (((2147483647) & (((/* implicit */int) arr_17 [(short)10] [i_16] [i_16] [i_16] [i_16])))))));
        /* LoopNest 3 */
        for (short i_17 = 3; i_17 < 7; i_17 += 1) 
        {
            for (signed char i_18 = 0; i_18 < 11; i_18 += 2) 
            {
                for (unsigned int i_19 = 1; i_19 < 7; i_19 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        for (signed char i_20 = 0; i_20 < 11; i_20 += 2) 
                        {
                            arr_77 [i_16] [i_16] [i_16] [i_16] [i_19] = ((/* implicit */unsigned int) (+(((int) (signed char)13))));
                            arr_78 [i_19] [i_20] [i_19] [i_18] [i_17] [i_17] [i_19] = (~(var_9));
                        }
                        /* LoopSeq 4 */
                        for (signed char i_21 = 0; i_21 < 11; i_21 += 4) 
                        {
                            arr_81 [i_19] = ((/* implicit */signed char) (unsigned char)136);
                            var_44 = ((/* implicit */int) max((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_5)) * (((/* implicit */int) (signed char)-118))))) && ((!(((/* implicit */_Bool) arr_73 [i_16] [i_17]))))))), (((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)137))))) ? (((/* implicit */long long int) ((((/* implicit */int) (signed char)-111)) ^ (-2147483644)))) : (((long long int) 2147483647))))));
                            arr_82 [i_21] [i_19] [i_19 + 3] [i_19] [i_17] [i_17] [i_16] = ((/* implicit */long long int) 4294500130U);
                            var_45 -= (((-(arr_5 [i_19 + 4] [i_17] [i_18] [i_19]))) ^ (((((/* implicit */_Bool) var_15)) ? (110717255U) : (arr_5 [i_19 + 4] [i_19] [(unsigned short)8] [i_19]))));
                            arr_83 [i_19] [i_16] [i_18] [i_19] [8] [i_19] = var_2;
                        }
                        for (long long int i_22 = 1; i_22 < 10; i_22 += 4) 
                        {
                            arr_87 [i_16] [i_17 + 3] [i_19] [i_19] [(signed char)3] [i_22] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) min((var_16), (((/* implicit */int) arr_9 [4ULL] [i_19 - 1] [i_17] [(short)10]))))) ? ((~(((/* implicit */int) (signed char)22)))) : ((~(((/* implicit */int) (signed char)-117))))))));
                            var_46 = ((/* implicit */int) max((var_46), (((/* implicit */int) var_3))));
                        }
                        for (unsigned short i_23 = 0; i_23 < 11; i_23 += 1) /* same iter space */
                        {
                            var_47 = ((/* implicit */int) arr_29 [i_17] [i_18] [(short)0] [i_23]);
                            arr_90 [i_16] [i_16] [i_18] |= ((/* implicit */unsigned short) (~(min((((/* implicit */int) ((((/* implicit */int) arr_53 [i_16] [i_17] [(signed char)1] [i_23])) > (2147483647)))), (var_1)))));
                            var_48 = ((/* implicit */signed char) max((((/* implicit */int) ((short) arr_23 [i_17] [i_16] [i_18] [i_19 + 3] [i_23] [i_23]))), (((((/* implicit */int) var_17)) / (((/* implicit */int) (signed char)-111))))));
                            arr_91 [i_16] [i_16] [i_16] [i_19] [i_16] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_7 [i_19 + 2] [i_17] [i_17 + 2]))))) ? (((((/* implicit */_Bool) -460916944)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) var_7)))) : (((2147483643) >> (((((/* implicit */int) arr_7 [i_19 + 3] [i_17] [i_17 + 4])) + (123)))))));
                        }
                        for (unsigned short i_24 = 0; i_24 < 11; i_24 += 1) /* same iter space */
                        {
                            arr_96 [i_19] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_5))) & (-5834607067804401560LL)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)4077))) : (4184250055U)))) : (((((/* implicit */_Bool) var_19)) ? (arr_8 [i_19] [i_19 - 1]) : (arr_8 [i_19] [i_19 + 4])))));
                            arr_97 [(signed char)9] [i_17] [i_18] [i_19] [i_19] = ((((/* implicit */_Bool) arr_35 [i_16] [i_17] [i_19] [(signed char)7] [i_18] [i_19] [i_24])) ? (-5834607067804401563LL) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) (signed char)5)) : (var_10)))) >= (min((var_12), (((/* implicit */unsigned long long int) arr_74 [i_16] [i_16] [i_16] [i_16] [i_16])))))))));
                        }
                        var_49 = ((/* implicit */unsigned long long int) arr_48 [i_16] [i_17]);
                        var_50 += ((/* implicit */unsigned char) (signed char)-23);
                        arr_98 [i_16] [i_16] [i_19] [i_19] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min(((signed char)89), ((signed char)22)))) ? (((/* implicit */int) ((unsigned char) var_5))) : ((-(((/* implicit */int) arr_26 [i_19 - 1] [i_19 - 1] [i_19] [i_19 + 4] [i_19]))))));
                    }
                } 
            } 
        } 
        arr_99 [i_16] = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((((/* implicit */int) (unsigned char)18)), (arr_73 [i_16] [i_16]))))));
        var_51 = ((/* implicit */unsigned int) ((min((((/* implicit */int) max(((unsigned short)65523), (var_17)))), (((((/* implicit */_Bool) (signed char)106)) ? (((/* implicit */int) (signed char)106)) : (((/* implicit */int) var_7)))))) >= (((/* implicit */int) ((unsigned char) (!(((/* implicit */_Bool) arr_74 [i_16] [7] [i_16] [i_16] [i_16]))))))));
        var_52 = var_2;
    }
    var_53 += ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_2)), (4184250041U)));
}
