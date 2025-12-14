/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146833
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146833 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146833
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        /* LoopSeq 3 */
        for (int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            /* LoopSeq 3 */
            for (unsigned int i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                var_15 = (-(((((/* implicit */_Bool) arr_8 [i_1] [i_1] [i_1])) ? (((/* implicit */int) arr_5 [i_0] [i_1] [i_0])) : (((/* implicit */int) arr_2 [i_0])))));
                arr_10 [i_0] [i_0] [i_2] = ((/* implicit */short) arr_1 [i_0]);
                arr_11 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0]))));
            }
            for (signed char i_3 = 0; i_3 < 11; i_3 += 1) 
            {
                arr_14 [i_0] = ((/* implicit */int) var_9);
                /* LoopSeq 3 */
                for (long long int i_4 = 2; i_4 < 8; i_4 += 1) 
                {
                    var_16 = ((/* implicit */unsigned int) ((((arr_15 [i_0]) != (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_1]))))) || (((/* implicit */_Bool) -1145337383))));
                    arr_17 [i_1] [i_0] [i_4] = ((/* implicit */unsigned long long int) 1145337382);
                }
                for (unsigned char i_5 = 0; i_5 < 11; i_5 += 1) 
                {
                    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) 1145337380)) ? (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_5] [i_5] [i_3] [i_1] [i_0] [i_0]))) : (arr_13 [i_1] [i_3] [i_0])));
                    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_3] [i_0])) ? (((/* implicit */int) arr_3 [i_0])) : (((((/* implicit */_Bool) 158478871U)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_1 [i_0]))))));
                }
                for (signed char i_6 = 2; i_6 < 10; i_6 += 3) 
                {
                    /* LoopSeq 2 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        var_19 |= ((/* implicit */unsigned short) ((arr_18 [i_3] [i_6] [i_6 + 1] [i_7]) / (((/* implicit */long long int) (+(-1145337398))))));
                        var_20 -= arr_6 [i_1] [4];
                        var_21 *= arr_2 [i_0];
                        var_22 ^= ((/* implicit */unsigned int) ((((/* implicit */long long int) 1145337382)) >= (arr_9 [i_1] [0ULL] [i_6])));
                        var_23 = ((/* implicit */unsigned long long int) 1145337380);
                    }
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        arr_27 [i_0] [i_1] [i_3] [i_3] [i_6] [i_6] [i_8] = ((/* implicit */unsigned int) arr_12 [i_0] [i_1] [i_3] [i_0]);
                        var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) ((arr_18 [i_0] [i_1] [i_3] [i_6]) == (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned short)22883)) : (((/* implicit */int) var_10))))))))));
                        arr_28 [i_0] [i_3] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (arr_7 [i_6 + 1] [i_0] [i_6 - 1]) : (arr_12 [i_6 + 1] [i_6] [i_6 + 1] [i_0])));
                    }
                    arr_29 [i_0] [i_1] [i_3] [i_0] = ((((/* implicit */int) (signed char)2)) - (-779979299));
                }
                var_25 = var_3;
            }
            for (int i_9 = 0; i_9 < 11; i_9 += 1) 
            {
                arr_32 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) arr_8 [i_0] [i_1] [i_9])) * (4136488425U)));
                var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_0] [i_0] [i_1] [i_1] [i_9])) ? (((/* implicit */int) arr_21 [i_0] [i_0] [i_0] [i_1] [i_9])) : (((/* implicit */int) arr_21 [i_0] [i_1] [i_1] [i_9] [i_9]))));
            }
            var_27 ^= ((/* implicit */_Bool) arr_21 [i_0] [i_0] [i_0] [i_1] [i_1]);
        }
        for (unsigned char i_10 = 0; i_10 < 11; i_10 += 4) 
        {
            var_28 = ((/* implicit */int) max((var_28), (((/* implicit */int) ((short) ((int) arr_0 [i_0] [i_10]))))));
            var_29 ^= ((/* implicit */int) ((((/* implicit */int) (unsigned char)88)) != (((/* implicit */int) (signed char)12))));
        }
        for (unsigned short i_11 = 0; i_11 < 11; i_11 += 2) 
        {
            var_30 = ((/* implicit */int) ((short) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) * (158478866U))));
            var_31 = ((/* implicit */unsigned int) ((short) ((((/* implicit */int) arr_1 [i_0])) & (((/* implicit */int) arr_25 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_11])))));
            var_32 = ((((/* implicit */_Bool) ((469229720704777264ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)88)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (536870911ULL));
        }
        var_33 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))) | (4136488424U)));
        var_34 = ((/* implicit */_Bool) (-(((/* implicit */int) var_0))));
        var_35 = ((/* implicit */unsigned long long int) arr_34 [i_0] [i_0] [i_0]);
        var_36 = ((/* implicit */int) (!(arr_6 [i_0] [i_0])));
    }
    for (signed char i_12 = 0; i_12 < 25; i_12 += 2) 
    {
        arr_41 [i_12] = ((/* implicit */signed char) ((-1145337399) != (-1145337382)));
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_13 = 1; i_13 < 23; i_13 += 3) 
        {
            /* LoopNest 2 */
            for (short i_14 = 0; i_14 < 25; i_14 += 1) 
            {
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                {
                    {
                        var_37 = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) arr_40 [i_12])) * (arr_49 [i_13] [i_13] [i_14] [i_15]))) << (((((-1851418576) / (1145337382))) + (7)))));
                        var_38 = arr_45 [i_12] [i_14] [i_14];
                    }
                } 
            } 
            var_39 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_51 [i_12] [i_13 + 1] [i_13] [i_12]))));
            var_40 -= ((/* implicit */int) ((((((/* implicit */_Bool) (signed char)3)) ? (6390715050866775983LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)31))))) < (((/* implicit */long long int) arr_48 [i_13] [i_13] [i_13] [i_13] [i_13]))));
        }
        var_41 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) min((arr_48 [i_12] [i_12] [i_12] [i_12] [i_12]), (((/* implicit */unsigned int) arr_39 [i_12]))))) * (((((unsigned long long int) arr_45 [i_12] [i_12] [i_12])) - (((unsigned long long int) (signed char)12))))));
    }
    /* vectorizable */
    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
    {
        arr_55 [i_16] [i_16] = ((/* implicit */int) var_0);
        arr_56 [i_16] = ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_49 [i_16] [i_16] [i_16] [i_16])) && (((/* implicit */_Bool) var_9)))))));
        var_42 = ((/* implicit */unsigned long long int) min((var_42), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_52 [0])) * (((/* implicit */int) arr_52 [(signed char)4])))))));
        arr_57 [i_16] [i_16] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_39 [i_16]))));
        /* LoopSeq 2 */
        for (_Bool i_17 = 1; i_17 < 1; i_17 += 1) 
        {
            arr_60 [i_16] [i_16] = ((/* implicit */short) arr_58 [i_16] [i_17 - 1]);
            var_43 += ((/* implicit */short) (((_Bool)0) ? (arr_54 [i_17 - 1]) : (((((/* implicit */_Bool) var_13)) ? (arr_45 [i_16] [i_16] [(_Bool)1]) : (arr_45 [i_16] [i_17] [20])))));
            var_44 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((1145337381) | (((/* implicit */int) arr_44 [i_16] [i_17]))))) ? (((/* implicit */int) arr_52 [i_16])) : (((/* implicit */int) ((short) arr_53 [i_16])))));
        }
        for (unsigned short i_18 = 0; i_18 < 20; i_18 += 3) 
        {
            arr_63 [i_16] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(arr_46 [i_16] [i_16])))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_3)))) : (arr_53 [i_16])));
            /* LoopSeq 1 */
            for (short i_19 = 0; i_19 < 20; i_19 += 2) 
            {
                var_45 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_39 [i_18])) ? (((/* implicit */int) (signed char)-12)) : (((/* implicit */int) arr_52 [i_19]))));
                var_46 = ((/* implicit */unsigned short) min((var_46), (((/* implicit */unsigned short) (signed char)63))));
            }
            var_47 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) (signed char)-12))))) % ((-(((/* implicit */int) arr_61 [i_16] [i_18]))))));
        }
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_20 = 0; i_20 < 0; i_20 += 1) 
    {
        var_48 = ((/* implicit */unsigned int) var_1);
        /* LoopSeq 1 */
        for (int i_21 = 0; i_21 < 19; i_21 += 1) 
        {
            var_49 = ((/* implicit */long long int) arr_50 [i_20] [i_20] [i_20] [i_21] [i_21]);
            arr_71 [i_20] [i_20] [i_21] = ((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_68 [i_21]))) != (arr_40 [i_21]))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_70 [i_20])) ? (((/* implicit */unsigned int) 2147483647)) : (158478867U)))) : (((((/* implicit */_Bool) 1145337383)) ? (((/* implicit */unsigned long long int) arr_53 [i_20])) : (var_9)))));
        }
        var_50 = ((arr_49 [i_20] [i_20] [i_20] [i_20]) != (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) var_5))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_22 = 2; i_22 < 17; i_22 += 1) 
        {
            arr_74 [i_20] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_50 [i_20] [i_20] [i_20 + 1] [i_22 - 1] [i_22]))));
            arr_75 [i_20] [i_20] [i_22] = ((/* implicit */signed char) arr_52 [2LL]);
        }
    }
    for (unsigned int i_23 = 0; i_23 < 14; i_23 += 3) 
    {
        var_51 = ((/* implicit */short) ((((((/* implicit */int) (unsigned short)12288)) & (((((/* implicit */_Bool) 1145337382)) ? (-1284299141) : (arr_54 [i_23]))))) == (((/* implicit */int) ((short) var_0)))));
        var_52 = ((/* implicit */unsigned short) ((((/* implicit */int) var_7)) & (((/* implicit */int) ((signed char) arr_77 [i_23] [i_23])))));
    }
}
