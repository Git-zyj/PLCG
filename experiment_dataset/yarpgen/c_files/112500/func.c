/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112500
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112500 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112500
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
    for (signed char i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) arr_1 [i_0] [i_0]))));
        var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) ((arr_0 [0LL]) - (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)70))) : (arr_1 [i_0] [i_0]))))))));
    }
    for (int i_1 = 4; i_1 < 22; i_1 += 3) 
    {
        arr_4 [i_1] = ((/* implicit */short) var_8);
        var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) max((var_5), (((/* implicit */unsigned int) max((((((/* implicit */int) arr_2 [i_1])) + (var_7))), (((/* implicit */int) arr_2 [i_1 + 3]))))))))));
    }
    /* vectorizable */
    for (signed char i_2 = 0; i_2 < 23; i_2 += 4) 
    {
        arr_8 [i_2] = ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_2 [i_2])) : (arr_6 [i_2]));
        var_15 += ((/* implicit */unsigned short) (-(((/* implicit */int) arr_2 [i_2]))));
        var_16 *= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [(signed char)16]))) * (((((/* implicit */_Bool) (short)842)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-122))) : (18446744073709551604ULL)))));
    }
    /* LoopSeq 1 */
    for (short i_3 = 0; i_3 < 16; i_3 += 3) 
    {
        arr_11 [i_3] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_3]))) * (var_5)));
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_4 = 0; i_4 < 16; i_4 += 4) 
        {
            arr_14 [i_3] [i_4] [i_4] &= ((/* implicit */signed char) var_6);
            /* LoopNest 3 */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                for (signed char i_6 = 0; i_6 < 16; i_6 += 4) 
                {
                    for (unsigned char i_7 = 0; i_7 < 16; i_7 += 3) 
                    {
                        {
                            var_17 &= ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) 3819777364U))))) >= (((((/* implicit */_Bool) 1000126433)) ? (((/* implicit */int) arr_2 [i_3])) : (((/* implicit */int) (unsigned char)33))))));
                            var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) 6322212968577420312ULL))));
                            var_19 += ((/* implicit */long long int) ((((/* implicit */int) arr_15 [i_6] [i_6] [i_6])) * (((/* implicit */int) arr_15 [i_4] [i_5] [i_4]))));
                            var_20 = ((/* implicit */short) ((((/* implicit */unsigned long long int) (~(4U)))) < (12086358783401023242ULL)));
                            var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)10)) ? (((/* implicit */int) (unsigned short)65526)) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65526))) > (17520502351463075462ULL))))));
                        }
                    } 
                } 
            } 
            var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) (-(((((/* implicit */int) arr_15 [i_3] [i_4] [i_4])) & (((/* implicit */int) arr_20 [i_3] [i_3] [12ULL] [i_3] [12ULL])))))))));
            var_23 = ((/* implicit */short) ((((/* implicit */_Bool) arr_16 [i_4])) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_3])))));
        }
        for (int i_8 = 1; i_8 < 13; i_8 += 2) 
        {
            arr_25 [i_3] [i_3] [15U] = ((/* implicit */long long int) (short)11966);
            arr_26 [i_3] = ((/* implicit */short) max((max((((/* implicit */unsigned long long int) 3845987259389967922LL)), (arr_17 [i_8] [i_3] [i_3] [i_8 + 1]))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) arr_6 [i_3])) > ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (short)1405))) : (arr_5 [i_3] [i_3]))))))));
        }
        arr_27 [i_3] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) 4294967284U)) && (((/* implicit */_Bool) (short)-11948))));
        var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) max((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) -2366995962694221395LL)), (arr_10 [14U])))) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_16 [i_3]))))) : (((2773184865558590772LL) - (((/* implicit */long long int) ((/* implicit */int) (short)-13972))))))), (((/* implicit */long long int) ((((/* implicit */int) max((var_11), (var_6)))) ^ ((~(((/* implicit */int) arr_7 [i_3]))))))))))));
    }
    var_25 = ((/* implicit */int) var_11);
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_9 = 0; i_9 < 18; i_9 += 3) 
    {
        var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_29 [i_9])) ? ((~(((/* implicit */int) (unsigned short)14970)))) : (((/* implicit */int) (signed char)-122)))))));
        arr_32 [i_9] = ((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_28 [i_9])) : (((/* implicit */int) arr_28 [i_9]))));
        /* LoopSeq 4 */
        for (int i_10 = 0; i_10 < 18; i_10 += 4) 
        {
            var_27 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_28 [i_9]))))) ? (458186168) : ((~(((/* implicit */int) var_11))))));
            var_28 ^= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_36 [i_9] [i_9] [i_9])) | (((/* implicit */int) ((((/* implicit */_Bool) arr_34 [i_9])) && (((/* implicit */_Bool) arr_29 [15])))))));
            arr_37 [i_9] = ((/* implicit */long long int) (~(((/* implicit */int) var_8))));
        }
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned short i_12 = 0; i_12 < 18; i_12 += 2) 
            {
                for (short i_13 = 0; i_13 < 18; i_13 += 2) 
                {
                    for (unsigned char i_14 = 2; i_14 < 16; i_14 += 2) 
                    {
                        {
                            var_29 = ((((/* implicit */unsigned long long int) arr_38 [i_9] [i_9])) <= (12092022706811753941ULL));
                            arr_51 [i_9] [i_11] [i_9] [i_9] [(_Bool)1] [i_11] = ((/* implicit */_Bool) arr_41 [i_11] [i_11] [i_12]);
                            var_30 &= ((/* implicit */unsigned int) (((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (7204734819190175484LL))) / (((/* implicit */long long int) ((((/* implicit */unsigned int) var_4)) / (var_5))))));
                            arr_52 [i_11] [i_11] [(signed char)7] [(signed char)7] [i_11] [i_9] = ((/* implicit */_Bool) ((2366995962694221392LL) ^ (arr_50 [i_11] [i_14 + 2] [i_14 + 2] [i_14 + 2] [i_14 + 2] [i_11])));
                        }
                    } 
                } 
            } 
            var_31 = ((/* implicit */unsigned long long int) (-(arr_33 [i_9])));
            var_32 = ((/* implicit */unsigned char) max((var_32), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) ^ (arr_33 [(unsigned char)15])))) ? (((((/* implicit */int) arr_49 [i_9] [11LL] [i_9] [(signed char)9] [i_9] [i_9] [i_9])) ^ (((/* implicit */int) var_9)))) : (((/* implicit */int) arr_40 [i_9])))))));
            var_33 = ((arr_38 [i_9] [i_9]) + (arr_38 [i_11] [i_9]));
        }
        for (int i_15 = 3; i_15 < 15; i_15 += 1) 
        {
            var_34 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 3099821895U)) ? (((/* implicit */long long int) ((/* implicit */int) (short)11953))) : (2366995962694221395LL)));
            arr_55 [i_15] [i_9] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_30 [i_9] [i_15 - 2])) ? (((/* implicit */unsigned int) (+(((/* implicit */int) arr_44 [(unsigned char)5] [(unsigned char)5] [(unsigned char)5] [i_15 + 2]))))) : (arr_46 [4ULL] [i_15 + 2] [i_15 + 2] [i_15 + 2])));
            var_35 -= ((/* implicit */unsigned int) ((((/* implicit */int) arr_54 [(short)14] [i_15] [i_15 + 2])) * (((((/* implicit */int) (unsigned char)0)) * (((/* implicit */int) (unsigned char)0))))));
        }
        for (unsigned char i_16 = 0; i_16 < 18; i_16 += 4) 
        {
            arr_59 [i_9] [i_16] = ((/* implicit */_Bool) ((((/* implicit */int) arr_44 [i_16] [i_16] [i_16] [i_9])) / (((/* implicit */int) arr_44 [i_9] [i_9] [i_9] [i_9]))));
            arr_60 [(short)6] = ((/* implicit */unsigned int) (_Bool)0);
            arr_61 [i_16] = ((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_9])) - (((/* implicit */int) (unsigned char)193))))) ? (arr_46 [i_9] [i_9] [i_16] [i_16]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_45 [i_16] [i_9])) ? (((/* implicit */int) (unsigned char)51)) : (((/* implicit */int) var_11))))));
        }
    }
    /* vectorizable */
    for (long long int i_17 = 0; i_17 < 20; i_17 += 2) 
    {
        var_36 = ((/* implicit */signed char) min((var_36), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_63 [i_17])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_62 [i_17])))))));
        arr_64 [19] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_7 [i_17])) > (((/* implicit */int) arr_3 [i_17]))));
        /* LoopNest 3 */
        for (unsigned char i_18 = 0; i_18 < 20; i_18 += 4) 
        {
            for (short i_19 = 0; i_19 < 20; i_19 += 4) 
            {
                for (unsigned char i_20 = 0; i_20 < 20; i_20 += 4) 
                {
                    {
                        var_37 = ((/* implicit */unsigned int) arr_73 [i_17] [i_18] [i_18] [i_20] [i_20]);
                        var_38 = ((/* implicit */_Bool) min((var_38), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_70 [i_20] [(unsigned char)1] [i_17] [i_17])) ? (arr_5 [i_17] [i_17]) : (((/* implicit */long long int) 12U))))) && (((/* implicit */_Bool) arr_6 [i_20]))))));
                        var_39 ^= ((/* implicit */short) (~(((/* implicit */int) arr_62 [i_18]))));
                    }
                } 
            } 
        } 
    }
    var_40 = ((/* implicit */int) max((((var_3) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_9)))))), (min((var_1), (18079255209601152644ULL)))));
}
