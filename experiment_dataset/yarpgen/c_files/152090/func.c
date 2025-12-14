/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152090
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152090 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152090
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
    var_17 = ((/* implicit */unsigned int) var_11);
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        var_18 += ((/* implicit */unsigned int) ((((/* implicit */int) var_6)) == (min((((/* implicit */int) arr_1 [i_0])), ((+(((/* implicit */int) arr_0 [i_0]))))))));
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (signed char i_2 = 2; i_2 < 22; i_2 += 3) 
            {
                for (long long int i_3 = 0; i_3 < 23; i_3 += 1) 
                {
                    {
                        var_19 ^= ((/* implicit */unsigned short) arr_0 [i_2]);
                        var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) max((max((4292870144U), (((/* implicit */unsigned int) arr_2 [i_0] [i_2 + 1])))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((-2904167329947952527LL) / (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_0])))))) ? (((/* implicit */int) max((var_10), (arr_4 [i_0] [i_0])))) : ((+(((/* implicit */int) var_1))))))))))));
                        var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)21593))))) ? (max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_2] [i_2] [i_0] [i_1])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_8 [i_0] [i_2]))))), (max((((/* implicit */long long int) (unsigned short)65535)), (2904167329947952527LL))))) : (((/* implicit */long long int) ((((/* implicit */int) arr_2 [i_1] [i_1])) % (((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_0] [i_3] [i_0] [i_1] [i_0] [i_0])) && (((/* implicit */_Bool) var_13))))))))));
                        var_22 += ((/* implicit */unsigned char) -2904167329947952511LL);
                        var_23 = ((/* implicit */unsigned short) max((((/* implicit */long long int) arr_4 [i_0] [i_1])), (max((((/* implicit */long long int) max((arr_4 [i_0] [i_2 - 1]), (((/* implicit */signed char) var_3))))), (min((((/* implicit */long long int) (signed char)-16)), (var_2)))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (signed char i_4 = 1; i_4 < 21; i_4 += 1) 
        {
            arr_16 [i_0] [i_0] [i_4] = ((/* implicit */unsigned short) min((((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)32760))) / (arr_6 [i_0] [i_0] [i_0] [i_0]))) * (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_0]))))), (((/* implicit */long long int) ((unsigned int) 3670016317U)))));
            var_24 = ((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_10))))) && (((/* implicit */_Bool) (unsigned short)3919)))))));
            arr_17 [i_0] [i_0] = min((((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (signed char)69))) - (-6268488990649724611LL)))) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_15 [i_0] [i_4 + 2]))))) : (((((/* implicit */_Bool) (unsigned short)53329)) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_4] [i_4 + 1] [i_4]))) : (arr_6 [i_0] [i_0] [i_0] [i_0]))))), (((/* implicit */long long int) (~(((/* implicit */int) arr_14 [i_4]))))));
        }
    }
    var_25 = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */int) (signed char)-63)) * (((/* implicit */int) (signed char)-83)))));
    var_26 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)30810))))))) && (((/* implicit */_Bool) max((max((var_16), (0LL))), (((/* implicit */long long int) var_1)))))));
    /* LoopSeq 1 */
    for (signed char i_5 = 1; i_5 < 17; i_5 += 1) 
    {
        var_27 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((signed char) (_Bool)1)))));
        var_28 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((arr_18 [i_5 - 1]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_5 + 3]))) : (arr_12 [i_5] [i_5 + 3] [i_5 + 3]))))));
        var_29 = ((/* implicit */unsigned int) max((var_29), (var_9)));
        arr_20 [i_5] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)255)), ((unsigned short)61617))))) > (((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (arr_6 [i_5] [i_5 + 1] [i_5] [i_5])))))) < ((+(((/* implicit */int) ((((/* implicit */int) var_1)) < (((/* implicit */int) arr_4 [i_5] [i_5 - 1])))))))));
        /* LoopSeq 3 */
        for (signed char i_6 = 0; i_6 < 20; i_6 += 2) 
        {
            arr_23 [i_5] = ((/* implicit */unsigned int) (-(arr_6 [i_5 - 1] [i_5 + 2] [i_6] [i_6])));
            arr_24 [i_6] [i_5] [i_5] = ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_1 [i_5 + 1])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (unsigned short)4591))))))) % (max((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-104)) ? (arr_12 [i_5] [i_5] [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))), ((+(5751063299366544639LL))))));
        }
        /* vectorizable */
        for (unsigned short i_7 = 0; i_7 < 20; i_7 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned int i_8 = 1; i_8 < 19; i_8 += 4) 
            {
                for (unsigned short i_9 = 0; i_9 < 20; i_9 += 2) 
                {
                    {
                        /* LoopSeq 2 */
                        for (long long int i_10 = 2; i_10 < 18; i_10 += 4) 
                        {
                            arr_36 [i_5] [i_7] [i_8] [i_8] [i_10 - 1] [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)6830))))) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_7] [i_7]))) * (arr_12 [i_5] [i_7] [i_10])))) : ((+(var_16)))));
                            var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(var_9)))) ? (((/* implicit */int) arr_33 [i_5] [i_7] [i_7] [i_9])) : ((~(((/* implicit */int) var_0))))));
                        }
                        for (long long int i_11 = 0; i_11 < 20; i_11 += 4) 
                        {
                            var_31 = ((/* implicit */unsigned short) ((arr_28 [i_5] [i_8 - 1] [i_8 - 1] [i_5 + 3]) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned short)6357))));
                            var_32 = ((/* implicit */unsigned char) max((var_32), (((/* implicit */unsigned char) (~(((/* implicit */int) ((unsigned short) arr_33 [i_7] [i_7] [i_7] [i_7]))))))));
                            arr_41 [i_8] [i_9] [i_8] &= ((/* implicit */long long int) ((((((/* implicit */int) arr_19 [i_9])) / (((/* implicit */int) (_Bool)1)))) / (((/* implicit */int) ((signed char) arr_5 [i_7] [i_9] [i_7])))));
                        }
                        var_33 = (!(((/* implicit */_Bool) (signed char)126)));
                        arr_42 [i_9] [i_8] [i_8 - 1] [i_8] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [i_8] [i_5 + 3])) ? (0LL) : (((((/* implicit */_Bool) (unsigned short)34048)) ? (8LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)61613)))))));
                        var_34 = ((/* implicit */long long int) var_9);
                        var_35 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned short) arr_38 [i_5] [i_8] [i_8] [i_8] [i_7])))));
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (unsigned short i_12 = 0; i_12 < 20; i_12 += 1) 
            {
                var_36 = ((/* implicit */unsigned short) ((var_7) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_7])))));
                /* LoopSeq 1 */
                for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
                {
                    /* LoopSeq 3 */
                    for (signed char i_14 = 0; i_14 < 20; i_14 += 1) 
                    {
                        var_37 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) -1LL)) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_14 [i_12])))) : (((/* implicit */int) ((((/* implicit */_Bool) (signed char)31)) || (arr_28 [i_13] [i_13] [i_12] [i_7]))))));
                        arr_50 [i_5 - 1] [i_7] [i_12] [i_7] [i_12] [(signed char)8] [i_7] |= (((!(((/* implicit */_Bool) var_13)))) ? (arr_6 [i_5] [i_5] [i_5] [i_14]) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) -7LL)))));
                        var_38 = ((/* implicit */unsigned short) min((var_38), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_15 [i_7] [i_12])) ? (((/* implicit */int) (signed char)71)) : (((/* implicit */int) arr_33 [i_5 + 2] [i_13 - 1] [i_5 + 2] [i_5 + 2])))) + (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_13 [i_14])) : (((/* implicit */int) (unsigned short)12)))))))));
                    }
                    for (signed char i_15 = 2; i_15 < 19; i_15 += 1) /* same iter space */
                    {
                        var_39 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-19))))) ? (((((/* implicit */_Bool) arr_21 [i_7])) ? (5958298362382820648LL) : (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_12] [i_12]))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_37 [i_15] [i_13 - 1] [i_12] [i_5 + 2] [i_5 + 2])) : (((/* implicit */int) arr_2 [i_15 + 1] [i_12])))))));
                        var_40 = ((/* implicit */signed char) var_9);
                        arr_53 [i_12] [i_12] [i_12] [i_13] [i_13] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_37 [i_5] [i_5] [i_5 + 2] [i_5 - 1] [i_5 + 3])) ? (((((/* implicit */_Bool) arr_22 [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_51 [i_12] [i_13 - 1] [i_12] [i_7] [i_5] [i_12]))) : (4294967295U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_7])))));
                        arr_54 [i_12] [i_12] [i_5] [i_13 - 1] [i_15 - 1] = ((/* implicit */signed char) ((((/* implicit */int) arr_52 [i_5] [i_15 + 1] [i_12] [i_13] [i_5 + 1] [i_12])) + (((/* implicit */int) arr_52 [i_5] [i_15 - 1] [i_12] [i_13] [i_5 + 1] [i_12]))));
                    }
                    for (signed char i_16 = 2; i_16 < 19; i_16 += 1) /* same iter space */
                    {
                        arr_58 [i_5 - 1] [i_5 - 1] [i_12] [i_13 - 1] [i_16] = ((/* implicit */unsigned int) (-(8772614942310561338LL)));
                        arr_59 [i_5] [i_12] [i_5] [i_12] [i_16 - 2] [i_16] [i_12] = ((/* implicit */unsigned short) (-(((((/* implicit */int) arr_47 [i_5] [i_5] [i_5 + 3])) * (((/* implicit */int) arr_40 [i_5] [i_7] [i_12] [i_13 - 1] [i_16]))))));
                    }
                    arr_60 [i_12] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_5 + 2]))) * (2731924372U))) : (arr_11 [i_5] [i_5] [i_13 - 1] [i_13] [i_13 - 1] [i_13 - 1])));
                }
                var_41 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_27 [i_5 - 1] [i_7] [i_12])) ? (((arr_12 [i_12] [i_7] [i_5 + 1]) + (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_5 + 1] [i_7]))))) : (((/* implicit */unsigned int) (-(((/* implicit */int) arr_4 [i_5 + 3] [i_5 + 3])))))));
            }
        }
        for (signed char i_17 = 0; i_17 < 20; i_17 += 1) 
        {
            var_42 -= ((/* implicit */signed char) (+(((arr_39 [i_5 + 2] [i_5] [i_17] [i_5 + 1] [i_17]) | (((/* implicit */long long int) ((/* implicit */int) (signed char)118)))))));
            var_43 = ((/* implicit */unsigned int) max((((/* implicit */int) (unsigned short)65524)), ((-(((/* implicit */int) (signed char)(-127 - 1)))))));
            var_44 = ((/* implicit */long long int) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)103))))), (((unsigned int) min((((/* implicit */unsigned short) arr_26 [i_17] [i_5])), ((unsigned short)40443))))));
        }
    }
}
