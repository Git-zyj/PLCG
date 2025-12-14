/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118321
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118321 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118321
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
    for (long long int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (long long int i_1 = 1; i_1 < 12; i_1 += 4) 
        {
            var_19 ^= ((/* implicit */_Bool) var_9);
            arr_4 [i_1] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) ((var_1) ? (-6051212725027721276LL) : (((/* implicit */long long int) 4063190266U))))) ? (((/* implicit */unsigned int) var_18)) : (231777018U)))));
            var_20 = ((/* implicit */_Bool) max((var_20), ((!(((/* implicit */_Bool) min(((-(arr_3 [i_0] [i_0] [6]))), (((((/* implicit */_Bool) (unsigned char)255)) ? (arr_3 [10] [10] [i_1 - 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))))))))))));
        }
        for (long long int i_2 = 0; i_2 < 13; i_2 += 1) 
        {
            arr_7 [i_2] = ((/* implicit */int) min((((/* implicit */unsigned short) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) arr_3 [i_2] [i_0] [i_0]))))), ((unsigned short)43868)));
            var_21 = (((+(((/* implicit */int) var_5)))) + (((var_12) - (((/* implicit */int) var_13)))));
        }
        arr_8 [(signed char)2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(arr_2 [i_0] [i_0] [i_0])))) ? ((-((((_Bool)0) ? (18446744073709551595ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)44942))))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_5)))))));
    }
    /* vectorizable */
    for (unsigned char i_3 = 2; i_3 < 18; i_3 += 4) 
    {
        var_22 = ((/* implicit */unsigned short) ((((/* implicit */int) var_10)) + (var_12)));
        var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) ((var_9) + ((-(arr_9 [i_3]))))))));
        var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) arr_9 [i_3]))));
        var_25 = ((/* implicit */_Bool) ((arr_9 [i_3 + 3]) + (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_3] [i_3])))));
    }
    /* vectorizable */
    for (short i_4 = 0; i_4 < 12; i_4 += 3) 
    {
        var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) ((8909803777502666515ULL) < (((/* implicit */unsigned long long int) var_18)))))));
        var_27 = ((((/* implicit */_Bool) ((-2147483630) ^ (((/* implicit */int) (unsigned short)27576))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551609ULL)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned short)45020))))));
        /* LoopSeq 1 */
        for (int i_5 = 0; i_5 < 12; i_5 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 1) 
            {
                for (int i_7 = 0; i_7 < 12; i_7 += 3) 
                {
                    {
                        var_28 = ((/* implicit */int) ((unsigned long long int) (unsigned char)109));
                        var_29 = ((/* implicit */unsigned short) ((var_2) < (((/* implicit */long long int) ((/* implicit */int) var_5)))));
                        var_30 = ((/* implicit */int) var_0);
                    }
                } 
            } 
            var_31 = ((/* implicit */long long int) max((var_31), (arr_3 [i_4] [i_4] [i_4])));
            var_32 = ((/* implicit */int) ((((/* implicit */_Bool) arr_17 [i_4] [i_4] [i_4] [i_5])) ? (((/* implicit */long long int) -2147483642)) : (arr_17 [i_4] [i_5] [i_4] [6])));
            var_33 = ((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)0))));
            arr_23 [i_4] [i_4] [i_4] = ((/* implicit */int) ((((((/* implicit */_Bool) arr_0 [(signed char)7])) ? (7ULL) : (((/* implicit */unsigned long long int) arr_17 [i_4] [i_4] [i_4] [4])))) - (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_5 [i_4])) + (((/* implicit */int) var_1)))))));
        }
        arr_24 [i_4] [i_4] = ((3377573752548427052LL) + (((/* implicit */long long int) 4294967295U)));
    }
    var_34 *= ((/* implicit */unsigned short) var_14);
    /* LoopSeq 4 */
    for (short i_8 = 1; i_8 < 22; i_8 += 3) 
    {
        var_35 = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_26 [i_8 + 1])) ? (((/* implicit */int) var_10)) : (-837615476))), (((int) max((((/* implicit */int) (unsigned char)109)), (var_18))))));
        var_36 += ((/* implicit */unsigned char) max((((/* implicit */int) var_13)), (2147483630)));
        var_37 = ((/* implicit */int) min((((long long int) min((var_3), (((/* implicit */int) (unsigned short)65511))))), (((/* implicit */long long int) ((unsigned short) arr_27 [i_8])))));
        arr_28 [i_8] = ((/* implicit */unsigned char) 28ULL);
    }
    for (long long int i_9 = 1; i_9 < 15; i_9 += 4) 
    {
        var_38 ^= ((/* implicit */int) ((((/* implicit */int) var_13)) < (((((/* implicit */int) var_10)) + (((/* implicit */int) arr_31 [i_9 + 2]))))));
        arr_32 [i_9] [i_9] = ((/* implicit */int) var_14);
    }
    for (int i_10 = 0; i_10 < 12; i_10 += 1) 
    {
        var_39 = ((/* implicit */long long int) arr_29 [16] [16]);
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_11 = 0; i_11 < 12; i_11 += 4) 
        {
            var_40 = ((/* implicit */int) max((var_40), (((/* implicit */int) var_5))));
            var_41 ^= ((/* implicit */int) ((unsigned short) (_Bool)1));
            var_42 = ((/* implicit */int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 8ULL)) ? (var_12) : (((/* implicit */int) (signed char)-20))))) : (var_2)));
            arr_37 [i_10] [11] = ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) arr_36 [i_10] [i_11])))))));
        }
        for (int i_12 = 0; i_12 < 12; i_12 += 2) 
        {
            var_43 = ((/* implicit */short) max((((/* implicit */unsigned short) (signed char)-20)), ((unsigned short)50261)));
            var_44 = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_5 [i_10])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_40 [i_10] [i_10])))), ((~(((/* implicit */int) arr_5 [i_10]))))));
            var_45 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) var_13)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)57985))))), (((/* implicit */long long int) ((((/* implicit */_Bool) 6LL)) || (((/* implicit */_Bool) -1256900987)))))));
            var_46 = ((/* implicit */int) min((var_46), (((/* implicit */int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) (((-(var_12))) + (((/* implicit */int) ((arr_38 [(unsigned short)4] [(unsigned short)0] [i_12]) >= (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))))) : (((long long int) -2147483642)))))));
            var_47 = ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (unsigned short)0))));
        }
    }
    for (unsigned long long int i_13 = 4; i_13 < 18; i_13 += 3) 
    {
        arr_44 [i_13] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_5)) : ((~(((/* implicit */int) var_17))))))) ? (((long long int) var_15)) : (((/* implicit */long long int) (+(arr_25 [i_13 - 3]))))));
        var_48 = ((/* implicit */signed char) ((_Bool) arr_26 [i_13]));
        arr_45 [i_13] = ((/* implicit */int) var_17);
        var_49 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_0))))) ? ((-(((/* implicit */int) var_15)))) : (((/* implicit */int) arr_10 [i_13] [i_13]))))));
    }
    /* LoopSeq 4 */
    for (long long int i_14 = 0; i_14 < 21; i_14 += 1) 
    {
        var_50 = ((/* implicit */long long int) max((var_6), (((/* implicit */unsigned short) arr_48 [i_14]))));
        /* LoopSeq 1 */
        for (int i_15 = 1; i_15 < 18; i_15 += 3) 
        {
            var_51 = ((/* implicit */long long int) ((_Bool) (unsigned short)21668));
            var_52 = ((/* implicit */unsigned int) max((var_52), (((/* implicit */unsigned int) var_14))));
            var_53 = ((/* implicit */_Bool) var_13);
        }
    }
    for (unsigned short i_16 = 0; i_16 < 15; i_16 += 1) /* same iter space */
    {
        var_54 -= ((/* implicit */unsigned long long int) min((var_11), (((/* implicit */long long int) (signed char)2))));
        var_55 = ((/* implicit */unsigned short) max((((((var_2) + (-3062878478603905112LL))) & (0LL))), (((/* implicit */long long int) arr_25 [i_16]))));
    }
    /* vectorizable */
    for (unsigned short i_17 = 0; i_17 < 15; i_17 += 1) /* same iter space */
    {
        var_56 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_53 [i_17])) ? (((arr_54 [i_17] [i_17]) & (((/* implicit */long long int) ((/* implicit */int) arr_30 [i_17]))))) : (-1256247140835395951LL)));
        var_57 = ((/* implicit */unsigned long long int) min((var_57), (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) (signed char)-106)) ? (var_18) : (-315105914))))))));
        arr_57 [i_17] [0U] &= ((/* implicit */signed char) ((((/* implicit */int) var_13)) ^ (((/* implicit */int) arr_55 [i_17]))));
        /* LoopSeq 1 */
        for (signed char i_18 = 0; i_18 < 15; i_18 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_19 = 0; i_19 < 15; i_19 += 4) 
            {
                var_58 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_5))));
                arr_63 [i_17] [(unsigned char)2] [i_18] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) var_13)))));
                /* LoopSeq 2 */
                for (signed char i_20 = 0; i_20 < 15; i_20 += 4) 
                {
                    arr_66 [i_17] = (!((!(((/* implicit */_Bool) var_5)))));
                    arr_67 [i_19] [i_17] [i_17] [i_17] = ((/* implicit */long long int) ((signed char) arr_52 [i_17]));
                    /* LoopSeq 1 */
                    for (long long int i_21 = 1; i_21 < 12; i_21 += 4) 
                    {
                        var_59 -= ((/* implicit */_Bool) var_4);
                        arr_71 [5U] [i_18] [i_17] [i_18] [i_17] = ((/* implicit */int) (((+(((/* implicit */int) var_0)))) <= (((/* implicit */int) var_6))));
                        var_60 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 0LL)) ? (((/* implicit */int) arr_68 [i_17] [i_18] [i_18] [i_19] [i_18] [i_20] [i_21 + 1])) : (((/* implicit */int) arr_68 [i_21] [i_18] [i_20] [i_20] [i_21] [i_18] [i_21 + 2]))));
                    }
                }
                for (long long int i_22 = 1; i_22 < 13; i_22 += 1) 
                {
                    var_61 = ((/* implicit */unsigned short) max((var_61), (((unsigned short) var_3))));
                    var_62 = ((/* implicit */int) min((var_62), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) - (-7062825297210804424LL))))));
                    var_63 = ((/* implicit */signed char) ((unsigned int) arr_72 [3LL]));
                    var_64 += ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_72 [i_22 - 1]))));
                }
                arr_75 [i_17] = ((/* implicit */short) (~(((/* implicit */int) (unsigned short)44387))));
                var_65 = ((/* implicit */unsigned int) arr_31 [12U]);
            }
            var_66 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_10))) <= (var_8))))));
            var_67 = ((/* implicit */long long int) min((var_67), (((((/* implicit */_Bool) ((((/* implicit */int) var_10)) * (((/* implicit */int) var_15))))) ? (arr_60 [i_17]) : (((/* implicit */long long int) ((((/* implicit */int) var_6)) - (var_3))))))));
        }
        var_68 = ((/* implicit */unsigned short) min((var_68), ((unsigned short)65511)));
    }
    for (unsigned short i_23 = 0; i_23 < 15; i_23 += 1) /* same iter space */
    {
        var_69 = ((/* implicit */short) ((((/* implicit */long long int) var_18)) & (var_9)));
        var_70 = ((/* implicit */unsigned short) max((var_70), (((/* implicit */unsigned short) ((((/* implicit */_Bool) 8220221716713279185ULL)) ? ((+(((/* implicit */int) arr_30 [(_Bool)1])))) : (((/* implicit */int) var_7)))))));
    }
}
