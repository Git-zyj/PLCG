/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152250
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152250 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152250
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
    /* LoopSeq 4 */
    for (int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        var_15 = ((/* implicit */signed char) (unsigned char)50);
        var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) arr_1 [7LL]))));
        arr_2 [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_1 [i_0]))));
    }
    for (unsigned int i_1 = 0; i_1 < 15; i_1 += 4) 
    {
        var_17 = ((/* implicit */long long int) (unsigned char)128);
        /* LoopSeq 2 */
        for (short i_2 = 1; i_2 < 13; i_2 += 4) 
        {
            arr_9 [i_1] [i_2] [i_2] = ((/* implicit */unsigned short) arr_3 [i_1]);
            /* LoopNest 2 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (long long int i_4 = 1; i_4 < 14; i_4 += 2) 
                {
                    {
                        arr_14 [i_1] [i_1] [i_3] [i_4 - 1] [i_4] [i_4 - 1] = arr_0 [i_1];
                        arr_15 [i_1] [i_1] [i_2] [i_1] [10U] [i_4] |= ((/* implicit */_Bool) (+((+(((/* implicit */int) (unsigned char)131))))));
                        var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) 963643912U))));
                    }
                } 
            } 
            arr_16 [i_1] [i_2] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)198)) ? (((/* implicit */int) (unsigned short)64259)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)53)))) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)234)) && (((/* implicit */_Bool) arr_3 [(unsigned char)14]))))))))));
        }
        for (unsigned short i_5 = 4; i_5 < 12; i_5 += 4) 
        {
            arr_21 [i_5] [i_1] [i_1] = ((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)148))));
            var_19 *= arr_13 [(short)8] [i_5 + 3] [i_1] [i_1] [i_1];
            var_20 = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned char)181))));
        }
    }
    for (unsigned char i_6 = 0; i_6 < 11; i_6 += 4) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_7 = 0; i_7 < 11; i_7 += 2) 
        {
            var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [i_6]))))) ? (((((/* implicit */int) (unsigned char)139)) & (((/* implicit */int) (unsigned short)28092)))) : (((((/* implicit */_Bool) -9223344973744566678LL)) ? (((/* implicit */int) (_Bool)1)) : (64548194)))));
            var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 16)) ? (((/* implicit */int) (signed char)117)) : (((/* implicit */int) (unsigned char)89))))) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_8 [i_7] [i_6] [i_6]))))) : (8672339243113330241LL)));
            var_23 = ((/* implicit */long long int) (-(arr_7 [i_6] [i_6] [i_7])));
            arr_27 [i_6] [i_6] = ((/* implicit */signed char) (+(((/* implicit */int) arr_11 [i_7]))));
            /* LoopSeq 2 */
            for (unsigned char i_8 = 0; i_8 < 11; i_8 += 1) 
            {
                var_24 = ((/* implicit */unsigned char) arr_12 [i_6] [i_8] [i_7] [i_6]);
                /* LoopSeq 4 */
                for (int i_9 = 0; i_9 < 11; i_9 += 3) /* same iter space */
                {
                    arr_32 [(unsigned char)6] [i_9] = ((/* implicit */_Bool) (unsigned short)37441);
                    arr_33 [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_7 [i_6] [i_7] [i_7])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned short)21107))));
                }
                for (int i_10 = 0; i_10 < 11; i_10 += 3) /* same iter space */
                {
                    var_25 = (~(((((/* implicit */_Bool) (unsigned short)37458)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)74)))));
                    arr_37 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_3 [i_6]))));
                }
                for (unsigned short i_11 = 1; i_11 < 10; i_11 += 4) 
                {
                    var_26 = ((/* implicit */short) (unsigned char)0);
                    arr_40 [i_6] [i_6] [i_6] [i_6] = ((((/* implicit */_Bool) ((((/* implicit */int) arr_35 [i_6] [(unsigned short)4] [i_8])) % (((/* implicit */int) (short)-7780))))) ? (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))))) : (-9223372036854775796LL));
                }
                for (unsigned char i_12 = 3; i_12 < 7; i_12 += 4) 
                {
                    var_27 = ((/* implicit */signed char) (_Bool)0);
                    arr_43 [i_8] [i_8] [i_8] [i_8] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_6] [i_12 - 1] [i_12] [i_12])) && (((/* implicit */_Bool) (short)21282))));
                }
                /* LoopSeq 3 */
                for (short i_13 = 3; i_13 < 9; i_13 += 1) 
                {
                    var_28 = ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)60044))));
                    var_29 = ((/* implicit */int) max((var_29), (((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_7] [i_7] [i_8] [i_8])) ? (((/* implicit */unsigned long long int) 9223372036854775791LL)) : (13ULL))))));
                    var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (-13LL) : (((/* implicit */long long int) ((/* implicit */int) arr_28 [i_13] [i_13 - 3] [i_13 + 1] [i_13]))))))));
                    arr_46 [i_6] [i_13] [i_13] [5] [i_7] [(signed char)2] = (+(((/* implicit */int) arr_44 [i_8] [(signed char)1] [i_13] [i_8] [i_8] [i_8])));
                }
                for (unsigned short i_14 = 0; i_14 < 11; i_14 += 2) 
                {
                    arr_50 [i_7] [(signed char)2] [i_14] = ((/* implicit */signed char) (+(((/* implicit */int) arr_35 [(unsigned char)6] [i_8] [i_14]))));
                    /* LoopSeq 2 */
                    for (unsigned int i_15 = 0; i_15 < 11; i_15 += 4) /* same iter space */
                    {
                        arr_53 [i_7] [0ULL] [i_8] [i_7] = ((/* implicit */int) ((((/* implicit */int) (signed char)-123)) <= (((/* implicit */int) (signed char)91))));
                        var_31 = ((/* implicit */unsigned short) max((var_31), (((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_45 [i_6] [i_14] [i_8] [i_6] [i_15])))) ? ((((_Bool)1) ? (((/* implicit */int) (signed char)-124)) : (690664622))) : (((/* implicit */int) (_Bool)1)))))));
                        var_32 = ((/* implicit */unsigned short) var_9);
                    }
                    for (unsigned int i_16 = 0; i_16 < 11; i_16 += 4) /* same iter space */
                    {
                        var_33 ^= ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)-31)) - (((/* implicit */int) arr_52 [i_14] [i_14] [i_14] [i_14] [i_14]))));
                        arr_58 [i_8] [i_8] [0] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)117)) && (((/* implicit */_Bool) arr_38 [i_6] [i_7] [i_8] [i_16]))));
                        var_34 = ((/* implicit */unsigned char) arr_12 [i_7] [i_7] [i_7] [i_7]);
                    }
                }
                for (unsigned char i_17 = 1; i_17 < 10; i_17 += 2) 
                {
                    arr_61 [i_6] [i_6] [(unsigned short)3] [i_6] [i_8] [i_17] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) arr_52 [i_6] [10] [i_6] [i_6] [i_6])) : (((/* implicit */int) arr_11 [i_7]))))) ? (((/* implicit */int) arr_26 [i_6] [i_6])) : (((((/* implicit */int) arr_45 [i_7] [i_7] [i_7] [i_7] [(short)2])) * (((/* implicit */int) (_Bool)1))))));
                    arr_62 [i_6] [i_6] [i_7] [i_6] [i_7] [i_8] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_6] [i_7] [i_8])) ? (148021549) : (((/* implicit */int) (signed char)-124)))))));
                    arr_63 [i_6] [(unsigned short)4] [i_8] [i_8] [(unsigned short)4] [(unsigned short)4] |= ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_47 [i_6] [(unsigned short)1] [(_Bool)0] [(_Bool)1])) ? (((/* implicit */int) arr_54 [i_6] [i_7] [i_6] [i_7] [i_6])) : (((/* implicit */int) arr_28 [(signed char)8] [(unsigned short)5] [i_7] [i_6]))))));
                }
                var_35 = ((/* implicit */unsigned short) (~(((/* implicit */int) (_Bool)1))));
            }
            for (_Bool i_18 = 1; i_18 < 1; i_18 += 1) 
            {
                var_36 = ((/* implicit */short) arr_22 [i_7]);
                arr_67 [9LL] [i_7] = ((/* implicit */short) arr_52 [i_6] [i_7] [i_6] [(_Bool)1] [i_7]);
                arr_68 [i_6] [i_6] [i_6] [i_6] = ((/* implicit */unsigned char) 9223372036854775807LL);
                var_37 *= ((/* implicit */unsigned int) arr_51 [(short)1]);
                var_38 ^= ((/* implicit */_Bool) arr_8 [i_7] [i_7] [i_6]);
            }
        }
        arr_69 [i_6] [i_6] = ((/* implicit */unsigned int) var_12);
    }
    for (unsigned short i_19 = 0; i_19 < 14; i_19 += 2) 
    {
        arr_72 [i_19] = ((/* implicit */long long int) (unsigned short)2746);
        var_39 = ((/* implicit */unsigned short) min((var_39), (((/* implicit */unsigned short) (+(((/* implicit */int) (_Bool)1)))))));
        arr_73 [i_19] = ((/* implicit */unsigned short) arr_1 [i_19]);
        arr_74 [i_19] [i_19] |= ((/* implicit */unsigned char) (short)7648);
    }
    /* LoopNest 2 */
    for (short i_20 = 0; i_20 < 11; i_20 += 4) 
    {
        for (long long int i_21 = 4; i_21 < 9; i_21 += 4) 
        {
            {
                var_40 = ((/* implicit */short) (+((~(((/* implicit */int) ((signed char) (_Bool)1)))))));
                arr_80 [i_20] [i_20] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) (-(((/* implicit */int) (short)3414))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)198))) : (1550978885U)))));
            }
        } 
    } 
    var_41 = ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) -1121262472461907671LL)))))))) : (max((((/* implicit */unsigned int) (short)-6629)), ((+(759526912U))))));
}
