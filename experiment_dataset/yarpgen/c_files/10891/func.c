/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10891
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10891 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10891
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
    var_18 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) var_7)), (var_6)));
    var_19 = ((/* implicit */unsigned short) min((var_19), ((unsigned short)31744)));
    /* LoopSeq 4 */
    for (int i_0 = 0; i_0 < 22; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = max((arr_1 [i_0]), (arr_0 [i_0]));
        var_20 = ((/* implicit */unsigned int) ((unsigned short) (unsigned short)31744));
    }
    for (int i_1 = 0; i_1 < 22; i_1 += 1) /* same iter space */
    {
        var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) max((var_16), (var_2))))));
        var_22 *= ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (-(((/* implicit */int) arr_6 [i_1]))))))) ? ((~(((/* implicit */int) (short)11)))) : (((((/* implicit */int) min((((/* implicit */unsigned char) var_5)), ((unsigned char)7)))) >> (((((/* implicit */int) arr_4 [i_1])) - (30289)))))));
    }
    for (signed char i_2 = 0; i_2 < 12; i_2 += 1) 
    {
        arr_10 [i_2] = ((/* implicit */int) min((((arr_8 [i_2]) >> (((arr_8 [i_2]) - (4050235015832406492LL))))), (arr_8 [i_2])));
        arr_11 [i_2] = ((/* implicit */long long int) (~((((!((_Bool)1))) ? ((((_Bool)1) ? (((/* implicit */int) arr_0 [i_2])) : (((/* implicit */int) var_3)))) : (((((/* implicit */int) arr_3 [i_2])) - (((/* implicit */int) (signed char)-8))))))));
        arr_12 [i_2] = max((((/* implicit */long long int) arr_7 [i_2] [i_2])), ((+(((((/* implicit */long long int) ((/* implicit */int) arr_6 [(unsigned short)16]))) / (arr_8 [i_2]))))));
    }
    for (short i_3 = 0; i_3 < 15; i_3 += 1) 
    {
        /* LoopSeq 3 */
        for (unsigned short i_4 = 0; i_4 < 15; i_4 += 4) 
        {
            var_23 = ((/* implicit */int) ((unsigned int) ((unsigned int) (~(((/* implicit */int) (unsigned char)255))))));
            var_24 = ((/* implicit */signed char) (~(((/* implicit */int) arr_15 [(short)2] [i_4] [i_3]))));
            /* LoopSeq 2 */
            for (int i_5 = 0; i_5 < 15; i_5 += 1) 
            {
                var_25 = ((/* implicit */unsigned long long int) arr_4 [i_4]);
                var_26 -= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((var_7) > (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)33791))))))))) + ((~((+(4503599627370496LL)))))));
            }
            for (signed char i_6 = 3; i_6 < 14; i_6 += 3) 
            {
                var_27 = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1)))))))) == (((/* implicit */int) (!(((/* implicit */_Bool) (-(6221003835062708756LL)))))))));
                var_28 = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)6))));
                var_29 |= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_20 [i_6 - 3] [i_4] [i_6 - 1] [i_6]))));
            }
            var_30 = (((-(((((/* implicit */_Bool) arr_1 [i_3])) ? (arr_20 [i_3] [i_4] [i_3] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) var_1))))))) / ((+(arr_20 [(short)14] [i_4] [i_3] [i_3]))));
        }
        for (short i_7 = 0; i_7 < 15; i_7 += 4) 
        {
            /* LoopSeq 4 */
            /* vectorizable */
            for (unsigned int i_8 = 0; i_8 < 15; i_8 += 1) 
            {
                var_31 = ((/* implicit */short) arr_24 [i_3] [i_7] [i_8]);
                var_32 = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned short)11))));
                var_33 -= ((/* implicit */unsigned char) arr_6 [i_8]);
                var_34 = ((/* implicit */short) var_11);
                var_35 = ((/* implicit */signed char) var_14);
            }
            for (short i_9 = 2; i_9 < 14; i_9 += 1) 
            {
                var_36 = ((/* implicit */signed char) max((var_36), (((/* implicit */signed char) (((+(((/* implicit */int) arr_21 [i_3] [i_3] [i_7] [i_9 - 2])))) / (((/* implicit */int) max((arr_21 [i_3] [i_7] [i_9 + 1] [i_9]), (arr_21 [i_3] [i_7] [i_7] [i_9])))))))));
                var_37 = min((((/* implicit */long long int) min(((+(((/* implicit */int) (_Bool)1)))), ((~(((/* implicit */int) var_11))))))), ((-((~(-2905601939828932784LL))))));
                var_38 = ((/* implicit */signed char) min(((((!(((/* implicit */_Bool) var_10)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_3] [i_7] [i_9]))) : (((((/* implicit */long long int) ((/* implicit */int) (short)32767))) - (22LL))))), (((/* implicit */long long int) (unsigned short)32))));
                var_39 = ((/* implicit */signed char) (~(((/* implicit */int) min((arr_6 [i_3]), (arr_6 [i_3]))))));
            }
            for (short i_10 = 1; i_10 < 13; i_10 += 3) /* same iter space */
            {
                var_40 = ((/* implicit */unsigned short) ((long long int) ((((15879100486904776703ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)61555))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [2LL] [i_10 + 1] [i_10 + 1]))))));
                var_41 = ((/* implicit */_Bool) max((var_41), (((/* implicit */_Bool) arr_23 [i_3] [(short)9]))));
            }
            for (short i_11 = 1; i_11 < 13; i_11 += 3) /* same iter space */
            {
                var_42 = ((/* implicit */long long int) max((var_42), (((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_18 [i_11] [i_11 + 1] [i_11 - 1] [i_11 - 1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_21 [i_11 + 1] [i_7] [i_3] [i_3])))) : (((((/* implicit */_Bool) (-(((/* implicit */int) arr_13 [i_3]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)4094))) : (((72057594037927936ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_11 + 2] [i_7] [i_7] [i_3]))))))))))));
                var_43 = (unsigned short)0;
                var_44 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((1447372604U) & (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))), (arr_20 [i_11 - 1] [i_7] [i_11 - 1] [i_11 - 1])))) ? (((((/* implicit */_Bool) arr_5 [i_7] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_3] [i_7] [i_11 + 2] [i_11]))) : (max((((/* implicit */long long int) var_15)), (var_14))))) : (((/* implicit */long long int) ((/* implicit */int) ((2014638045284529117LL) <= (((/* implicit */long long int) (-(((/* implicit */int) arr_17 [i_11 - 1] [2LL] [2LL] [(short)13])))))))))));
                var_45 = ((/* implicit */long long int) min((var_45), (((/* implicit */long long int) (short)(-32767 - 1)))));
            }
            /* LoopNest 2 */
            for (unsigned short i_12 = 3; i_12 < 13; i_12 += 1) 
            {
                for (unsigned int i_13 = 2; i_13 < 14; i_13 += 2) 
                {
                    {
                        arr_38 [i_12] [i_12] [i_7] [i_12] = arr_36 [i_3] [i_3] [i_12] [i_3];
                        var_46 = arr_31 [i_7] [i_12 + 1];
                        arr_39 [i_12] [i_7] [i_12 - 1] [i_13] = ((/* implicit */short) arr_24 [i_13] [(unsigned short)7] [i_3]);
                    }
                } 
            } 
        }
        for (short i_14 = 2; i_14 < 12; i_14 += 4) 
        {
            /* LoopSeq 4 */
            for (short i_15 = 0; i_15 < 15; i_15 += 4) 
            {
                arr_46 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned short) (+((~(((/* implicit */int) var_15))))));
                var_47 = ((/* implicit */unsigned long long int) (short)2047);
                var_48 &= ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_41 [i_14 + 2] [1])) ? (arr_41 [i_14 + 2] [i_3]) : (arr_41 [i_14 + 1] [i_14])))));
                var_49 = ((/* implicit */unsigned short) min((var_49), (((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */int) (unsigned short)33792)) != (((/* implicit */int) arr_43 [i_14 - 2]))))))))));
                var_50 = ((/* implicit */unsigned short) (short)32759);
            }
            for (long long int i_16 = 0; i_16 < 15; i_16 += 4) /* same iter space */
            {
                var_51 *= ((/* implicit */short) (+(min((((/* implicit */long long int) arr_36 [i_16] [i_14 + 1] [i_3] [i_3])), (var_14)))));
                var_52 *= ((/* implicit */unsigned short) var_0);
                var_53 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_29 [i_3] [i_3] [i_14] [i_3])) ? (((/* implicit */int) ((((/* implicit */_Bool) max((var_6), (((/* implicit */unsigned long long int) arr_31 [i_3] [(_Bool)1]))))) || ((!(((/* implicit */_Bool) (unsigned char)247))))))) : ((+(((((((/* implicit */int) var_8)) + (2147483647))) >> (((arr_34 [i_3] [i_14] [i_14] [i_3]) - (1551942265449306168LL)))))))));
                var_54 = ((/* implicit */short) max((((/* implicit */long long int) (~(((/* implicit */int) arr_21 [i_14 + 3] [i_14] [i_14] [i_3]))))), (((long long int) max((((/* implicit */unsigned short) (unsigned char)247)), ((unsigned short)2040))))));
            }
            for (long long int i_17 = 0; i_17 < 15; i_17 += 4) /* same iter space */
            {
                var_55 = ((/* implicit */unsigned short) (short)-1);
                var_56 = ((/* implicit */unsigned short) max((var_56), (((/* implicit */unsigned short) max((((/* implicit */unsigned int) (signed char)-56)), (3636463251U))))));
                var_57 = ((/* implicit */unsigned short) ((((long long int) arr_24 [i_14 - 2] [i_14 - 2] [i_14 - 2])) - (((/* implicit */long long int) ((/* implicit */int) ((short) arr_24 [i_14 - 2] [i_14] [i_14 + 1]))))));
                var_58 = ((/* implicit */short) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_3] [i_14 + 1]))))), (min((((/* implicit */int) var_8)), ((-(((/* implicit */int) var_10))))))));
            }
            /* vectorizable */
            for (long long int i_18 = 0; i_18 < 15; i_18 += 1) 
            {
                var_59 = arr_1 [i_3];
                arr_55 [i_3] [i_18] = ((/* implicit */short) ((((/* implicit */_Bool) arr_37 [i_3] [i_14 - 1] [i_14] [i_14 - 1])) ? (arr_34 [i_3] [i_14 - 1] [i_14] [i_14 - 1]) : (arr_34 [i_14] [i_14 - 1] [i_14] [i_14 - 1])));
            }
            var_60 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_18 [i_3] [i_3] [i_14] [i_14 + 3])) || (((/* implicit */_Bool) (signed char)-93)))) || (((/* implicit */_Bool) (signed char)-9))));
            var_61 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) + (((unsigned long long int) 4294967295U)))))));
        }
        var_62 = ((/* implicit */unsigned int) max((1688849860263936LL), (((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */int) var_15)) >= (((/* implicit */int) var_9))))))))));
    }
}
