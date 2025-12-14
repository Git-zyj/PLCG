/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153174
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153174 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153174
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
    var_19 = ((/* implicit */int) var_17);
    var_20 = ((/* implicit */unsigned long long int) var_1);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        arr_2 [i_0] |= ((/* implicit */unsigned char) var_14);
        /* LoopNest 2 */
        for (long long int i_1 = 4; i_1 < 16; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                {
                    arr_7 [i_0] [i_1 - 2] [i_2] = ((/* implicit */long long int) var_2);
                    var_21 = ((/* implicit */unsigned char) (signed char)-92);
                    var_22 = ((/* implicit */unsigned short) ((((/* implicit */int) var_12)) == (((/* implicit */int) (((-(var_6))) != ((~(((/* implicit */int) var_14)))))))));
                    arr_8 [i_0] [i_1] [i_2] = ((/* implicit */short) (+(((/* implicit */int) (signed char)-97))));
                }
            } 
        } 
        var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) ((((((arr_6 [17] [i_0] [(signed char)4] [(unsigned char)4]) <= (((/* implicit */int) arr_0 [15ULL])))) || (((/* implicit */_Bool) ((var_0) - (((/* implicit */int) var_11))))))) ? ((-(((((/* implicit */int) arr_5 [i_0] [i_0])) - (((/* implicit */int) var_14)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)124)) ? (((/* implicit */int) (short)-17926)) : (220317908)))) ? ((+(((/* implicit */int) arr_5 [i_0] [i_0])))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_18))))))))))));
    }
    var_24 |= min((var_17), (((/* implicit */unsigned long long int) (_Bool)1)));
    /* LoopSeq 4 */
    for (short i_3 = 1; i_3 < 10; i_3 += 4) 
    {
        /* LoopNest 3 */
        for (int i_4 = 2; i_4 < 10; i_4 += 2) 
        {
            for (signed char i_5 = 0; i_5 < 11; i_5 += 4) 
            {
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    {
                        arr_20 [i_3 - 1] [i_3] [i_5] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_9 [i_4 - 1])) ? (((/* implicit */int) arr_9 [i_4 - 1])) : (var_6)))));
                        arr_21 [i_6] [i_6] [i_3] [i_4 - 1] [i_3 + 1] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_19 [i_4 + 1] [i_3])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_17 [i_3 - 1] [i_4 - 2] [i_3])))), (((/* implicit */int) var_16))));
                        var_25 *= ((/* implicit */unsigned long long int) (~((~(((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)174)), (var_1))))))));
                        arr_22 [i_3] [(short)8] [i_3] [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) arr_17 [i_3 + 1] [i_3 + 1] [i_3])), (var_5)))) || (((/* implicit */_Bool) min(((+(var_13))), (((/* implicit */long long int) ((((/* implicit */int) var_10)) >= (((/* implicit */int) arr_17 [i_3 - 1] [i_3] [i_3]))))))))));
                        var_26 = ((/* implicit */unsigned char) var_15);
                    }
                } 
            } 
        } 
        var_27 = ((/* implicit */unsigned long long int) arr_11 [5LL] [i_3]);
        /* LoopSeq 4 */
        for (short i_7 = 0; i_7 < 11; i_7 += 2) 
        {
            var_28 = ((/* implicit */unsigned int) var_17);
            /* LoopNest 2 */
            for (int i_8 = 1; i_8 < 9; i_8 += 4) 
            {
                for (unsigned int i_9 = 0; i_9 < 11; i_9 += 3) 
                {
                    {
                        arr_29 [i_8] [i_3] [i_8] [i_8 - 1] [i_8 - 1] [i_8 - 1] = ((/* implicit */int) min((((/* implicit */long long int) ((arr_23 [i_7] [(unsigned short)3]) <= (arr_26 [i_3 - 1] [i_8 - 1] [i_8] [i_9])))), (min((var_13), (((/* implicit */long long int) arr_14 [i_3 - 1] [i_7] [i_8 - 1] [i_7]))))));
                        var_29 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) (signed char)57)) ? (((/* implicit */int) (short)31941)) : (((/* implicit */int) (_Bool)1))))));
                        arr_30 [i_3] [i_3] [i_8 + 2] [9U] = ((/* implicit */unsigned int) ((var_6) & ((-(((/* implicit */int) arr_12 [i_9]))))));
                        arr_31 [i_3] [i_3] [i_3 - 1] [2] [i_3] [i_3 - 1] = ((/* implicit */short) min((min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) -1587267940))))), (((((/* implicit */_Bool) 13157719802622442956ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)64514))) : (17460818570042284991ULL))))), (((/* implicit */unsigned long long int) arr_26 [i_3] [(unsigned short)2] [i_8 + 1] [i_9]))));
                        var_30 = ((/* implicit */unsigned short) arr_9 [i_3]);
                    }
                } 
            } 
        }
        for (unsigned short i_10 = 0; i_10 < 11; i_10 += 1) 
        {
            var_31 += ((/* implicit */unsigned long long int) arr_28 [i_3] [i_3] [i_10] [i_10]);
            var_32 *= ((/* implicit */long long int) min(((signed char)95), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_3 [i_3 + 1] [6LL] [i_3 + 1])))))));
        }
        for (long long int i_11 = 0; i_11 < 11; i_11 += 3) 
        {
            var_33 = ((/* implicit */unsigned char) arr_12 [i_3]);
            arr_37 [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)19)) ? (((/* implicit */int) (signed char)46)) : (-321438200)))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_32 [i_3] [i_3])) ^ (((/* implicit */int) var_8))))) : ((~(var_15)))));
        }
        /* vectorizable */
        for (unsigned long long int i_12 = 0; i_12 < 11; i_12 += 4) 
        {
            var_34 += ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_16)))))));
            arr_41 [i_3] [i_12] = ((/* implicit */unsigned long long int) ((int) (~(((/* implicit */int) var_5)))));
            var_35 -= ((/* implicit */long long int) ((unsigned short) arr_32 [i_3 - 1] [i_12]));
        }
        /* LoopNest 3 */
        for (unsigned char i_13 = 1; i_13 < 8; i_13 += 4) 
        {
            for (unsigned char i_14 = 2; i_14 < 10; i_14 += 4) 
            {
                for (unsigned short i_15 = 0; i_15 < 11; i_15 += 4) 
                {
                    {
                        var_36 = ((/* implicit */unsigned int) min((((/* implicit */int) ((((/* implicit */unsigned int) arr_23 [(short)6] [i_14 - 1])) >= (arr_1 [i_3 - 1])))), (min((((/* implicit */int) min(((signed char)-18), (((/* implicit */signed char) (_Bool)1))))), (356804302)))));
                        var_37 = ((/* implicit */long long int) max((var_37), (((/* implicit */long long int) arr_25 [i_3 - 1] [i_13] [i_14] [i_15]))));
                        var_38 *= ((/* implicit */unsigned char) min(((~(min((((/* implicit */unsigned int) arr_35 [i_13] [i_14] [i_13])), (arr_14 [i_3] [(short)7] [(unsigned short)5] [i_15]))))), (((/* implicit */unsigned int) var_2))));
                        arr_51 [i_3] [(unsigned short)10] [2LL] [i_3] [i_15] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 14655811736562795032ULL)) ? (((/* implicit */unsigned long long int) 1015134332U)) : (15890765849445424103ULL)))) ? ((-(((/* implicit */int) var_2)))) : (((/* implicit */int) arr_12 [(signed char)9]))));
                    }
                } 
            } 
        } 
    }
    for (unsigned long long int i_16 = 0; i_16 < 14; i_16 += 4) 
    {
        arr_56 [i_16] = ((/* implicit */unsigned int) ((min((((var_3) ^ (((/* implicit */int) (_Bool)0)))), (((/* implicit */int) var_2)))) + (arr_6 [i_16] [i_16] [i_16] [i_16])));
        var_39 = ((/* implicit */_Bool) var_15);
        arr_57 [i_16] = ((/* implicit */unsigned short) ((short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)73))) < (2604485183931939650LL))));
    }
    /* vectorizable */
    for (unsigned char i_17 = 0; i_17 < 24; i_17 += 2) 
    {
        arr_61 [i_17] |= ((/* implicit */unsigned short) ((signed char) arr_58 [i_17]));
        arr_62 [i_17] [i_17] = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) != ((-(3071086110U)))));
    }
    for (unsigned short i_18 = 1; i_18 < 10; i_18 += 4) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned long long int i_19 = 3; i_19 < 10; i_19 += 3) 
        {
            var_40 = ((/* implicit */int) ((signed char) var_13));
            var_41 -= ((/* implicit */unsigned long long int) (-(var_6)));
        }
        /* vectorizable */
        for (long long int i_20 = 0; i_20 < 13; i_20 += 4) 
        {
            var_42 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)11428))));
            var_43 = ((/* implicit */long long int) var_10);
        }
        var_44 = ((/* implicit */_Bool) max((var_44), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) ((short) ((((/* implicit */unsigned int) var_3)) < (2989699144U))))) : (((/* implicit */int) arr_65 [i_18] [i_18 + 3])))))));
        var_45 = ((/* implicit */short) ((((/* implicit */_Bool) ((min((var_17), (((/* implicit */unsigned long long int) 218239443U)))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (short)-20093)) || (((/* implicit */_Bool) arr_55 [i_18 + 2]))))))))) ? (min((((((/* implicit */unsigned int) ((/* implicit */int) var_2))) | (arr_53 [i_18 - 1]))), (((/* implicit */unsigned int) min((var_7), (1634814802)))))) : (((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1)))))));
        /* LoopSeq 1 */
        for (unsigned char i_21 = 2; i_21 < 11; i_21 += 4) 
        {
            var_46 |= ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_12)))))));
            var_47 = var_18;
            arr_71 [i_21] [i_18] [i_21] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 14736468337107793717ULL)) ? (((/* implicit */int) (unsigned char)87)) : ((-(((/* implicit */int) (short)14806)))))))));
            var_48 = ((/* implicit */unsigned int) ((((/* implicit */int) var_14)) + (((/* implicit */int) arr_70 [i_18]))));
            var_49 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) var_9))) ? (((((/* implicit */int) (unsigned char)136)) - (((/* implicit */int) var_8)))) : (((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), (arr_69 [i_21] [i_21 - 1] [i_21 - 1]))))))) ? (((((/* implicit */int) arr_3 [i_21 + 1] [i_21 + 1] [i_18 + 3])) | (((var_10) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_2)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-76)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)9426))) : (18232935555736799520ULL))))))));
        }
    }
}
