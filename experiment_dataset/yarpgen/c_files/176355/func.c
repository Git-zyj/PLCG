/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176355
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176355 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176355
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
    for (signed char i_0 = 3; i_0 < 22; i_0 += 3) 
    {
        arr_4 [8U] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) min(((unsigned char)213), ((unsigned char)202)))) - (((/* implicit */int) min((((/* implicit */unsigned char) arr_0 [i_0] [22ULL])), ((unsigned char)212))))))) ? (((/* implicit */unsigned int) (-((-(((/* implicit */int) (unsigned char)29))))))) : (arr_1 [1U] [1U])));
        arr_5 [i_0] [i_0] = ((/* implicit */long long int) (+(((/* implicit */int) ((_Bool) min((((/* implicit */unsigned int) var_10)), (248391173U)))))));
        var_12 = ((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)20)) - (((/* implicit */int) arr_2 [i_0] [2LL]))))) ? (((/* implicit */int) ((unsigned char) arr_2 [i_0] [i_0]))) : (((/* implicit */int) var_9)))))))));
        arr_6 [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) var_9))));
    }
    for (unsigned int i_1 = 0; i_1 < 12; i_1 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned char i_2 = 0; i_2 < 12; i_2 += 1) 
        {
            for (unsigned char i_3 = 3; i_3 < 10; i_3 += 2) 
            {
                {
                    arr_14 [i_3] [i_3] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(min((1752640529U), (((/* implicit */unsigned int) arr_3 [i_3]))))))) ? (((/* implicit */int) ((((/* implicit */int) (signed char)-79)) == (((/* implicit */int) ((((/* implicit */_Bool) -915143681)) && (var_9))))))) : (((/* implicit */int) (((+(arr_8 [i_1]))) != (((/* implicit */unsigned int) ((/* implicit */int) var_10))))))));
                    arr_15 [(short)1] [i_3] [i_3] = ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((((/* implicit */_Bool) (short)15979)) || (((/* implicit */_Bool) var_2)))))))));
                    /* LoopSeq 2 */
                    for (unsigned char i_4 = 0; i_4 < 12; i_4 += 3) 
                    {
                        var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) (!(((/* implicit */_Bool) (~(((((/* implicit */_Bool) (short)32163)) ? (601351357U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)24434)))))))))))));
                        arr_18 [i_3] [7LL] [i_3] [i_4] = ((/* implicit */long long int) (+(((/* implicit */int) ((((int) arr_11 [i_1] [i_1] [3U])) >= (((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) var_3))))))))));
                    }
                    for (unsigned short i_5 = 0; i_5 < 12; i_5 += 2) 
                    {
                        var_14 = (!(((/* implicit */_Bool) arr_9 [11U] [(unsigned short)7])));
                        arr_21 [i_3] [i_3] [i_5] = ((/* implicit */unsigned char) arr_13 [i_5]);
                    }
                    /* LoopSeq 1 */
                    for (unsigned int i_6 = 0; i_6 < 12; i_6 += 2) 
                    {
                        var_15 = ((/* implicit */long long int) ((((((/* implicit */_Bool) (~(arr_10 [i_1])))) ? ((~(((/* implicit */int) arr_16 [(_Bool)1] [(_Bool)1] [i_3] [8])))) : (((((/* implicit */int) arr_12 [10U] [i_2])) << (((((/* implicit */int) (signed char)-123)) + (133))))))) != (((/* implicit */int) ((unsigned char) arr_16 [i_3 + 2] [(signed char)6] [(short)9] [i_3])))));
                        var_16 = ((/* implicit */_Bool) min((((unsigned long long int) (-(((/* implicit */int) arr_19 [i_6] [(_Bool)1] [i_3] [i_3] [(unsigned short)7] [i_1]))))), (((/* implicit */unsigned long long int) arr_22 [9ULL] [9ULL] [i_3] [i_3]))));
                    }
                }
            } 
        } 
        arr_25 [(unsigned short)7] = ((/* implicit */unsigned short) (((((~((+(((/* implicit */int) (_Bool)0)))))) + (2147483647))) << (((((((((/* implicit */int) arr_11 [i_1] [i_1] [i_1])) - (((/* implicit */int) arr_9 [i_1] [i_1])))) + (1096))) - (5)))));
    }
    for (signed char i_7 = 1; i_7 < 15; i_7 += 1) 
    {
        arr_28 [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_27 [i_7]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) -983255127))))) : (((((/* implicit */_Bool) min((arr_3 [i_7]), (((/* implicit */signed char) arr_27 [i_7]))))) ? (((/* implicit */int) arr_0 [i_7 - 1] [i_7])) : (((/* implicit */int) min((arr_2 [i_7] [i_7]), (arr_26 [2U]))))))));
        var_17 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((arr_26 [i_7]) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_2 [i_7] [i_7]))))))))));
        arr_29 [i_7] [i_7] = ((/* implicit */signed char) (-(17340329049247132846ULL)));
        /* LoopNest 2 */
        for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
        {
            for (long long int i_9 = 0; i_9 < 17; i_9 += 1) 
            {
                {
                    var_18 = arr_0 [i_8] [i_9];
                    var_19 = ((/* implicit */unsigned short) min((min((arr_1 [i_9] [(unsigned char)19]), ((-(arr_30 [i_7] [i_8]))))), (((/* implicit */unsigned int) ((_Bool) min((arr_31 [i_7]), (((/* implicit */unsigned long long int) arr_33 [i_7] [i_7] [(unsigned short)0]))))))));
                    var_20 = ((/* implicit */short) ((((/* implicit */int) (((-(((/* implicit */int) arr_0 [i_7] [i_7])))) != ((~(((/* implicit */int) var_11))))))) << (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_3 [i_7])) > (((/* implicit */int) (unsigned short)33827)))))) > (arr_30 [i_8] [i_8 + 1]))))));
                }
            } 
        } 
    }
    for (signed char i_10 = 3; i_10 < 13; i_10 += 1) 
    {
        arr_37 [i_10] = ((unsigned short) arr_34 [i_10]);
        var_21 = ((/* implicit */signed char) arr_33 [2LL] [2LL] [i_10]);
        var_22 = ((/* implicit */unsigned char) (-(((/* implicit */int) (signed char)56))));
        var_23 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_34 [i_10 + 2])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_6))))));
    }
    /* LoopSeq 3 */
    for (long long int i_11 = 0; i_11 < 19; i_11 += 2) 
    {
        arr_40 [i_11] = ((/* implicit */_Bool) (-((-(((15412487192116805308ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)37)))))))));
        /* LoopSeq 1 */
        for (unsigned short i_12 = 0; i_12 < 19; i_12 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_13 = 0; i_13 < 19; i_13 += 3) 
            {
                arr_47 [i_11] [i_11] [i_12] = ((((/* implicit */int) ((((12193887666696578297ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (short)24688))))) && (((/* implicit */_Bool) arr_0 [i_12] [i_13]))))) > (((/* implicit */int) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_41 [i_12]))) : (arr_43 [10U] [i_12] [i_13]))) > (((/* implicit */unsigned int) ((/* implicit */int) ((arr_44 [i_11] [(_Bool)1]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [17ULL] [i_13])))))))))));
                var_24 ^= ((/* implicit */int) (((+(((/* implicit */int) (short)-24688)))) != (min((((((/* implicit */_Bool) 2051985508)) ? (((/* implicit */int) arr_0 [i_11] [i_11])) : (arr_38 [17ULL] [i_12]))), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)44))) >= (var_4))))))));
                arr_48 [i_11] [(signed char)13] [i_12] = ((/* implicit */unsigned char) arr_43 [i_11] [i_12] [(unsigned char)8]);
            }
            var_25 = ((/* implicit */unsigned long long int) (-(arr_39 [16U])));
        }
        var_26 = ((/* implicit */short) (-(((unsigned int) 8404726539528459642ULL))));
    }
    for (unsigned short i_14 = 0; i_14 < 17; i_14 += 2) 
    {
        var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((+(arr_1 [i_14] [i_14]))) - (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4))))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((arr_1 [12ULL] [12ULL]) - (((/* implicit */unsigned int) ((/* implicit */int) arr_41 [i_14]))))) != (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [(unsigned short)5] [(unsigned short)12]))))))) : ((+(((((/* implicit */_Bool) arr_50 [2ULL])) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_14])))))))));
        var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) arr_44 [i_14] [i_14])) && (((/* implicit */_Bool) var_10))))) - (((/* implicit */int) ((-1026784892814660364LL) <= (((/* implicit */long long int) ((/* implicit */int) var_1))))))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_7)), (arr_39 [i_14])))) : (((((((/* implicit */unsigned long long int) arr_39 [i_14])) - (arr_45 [12ULL]))) / ((-(arr_44 [i_14] [3LL])))))));
    }
    for (unsigned long long int i_15 = 0; i_15 < 15; i_15 += 2) 
    {
        arr_55 [i_15] [i_15] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_38 [i_15] [i_15])) ? ((+(arr_30 [i_15] [2]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_51 [i_15])) ? (((/* implicit */int) arr_36 [i_15] [i_15])) : (((/* implicit */int) arr_0 [(unsigned char)5] [i_15])))))))) ? (((/* implicit */unsigned int) (+((-(arr_38 [5U] [i_15])))))) : (219359000U)));
        var_29 ^= ((/* implicit */long long int) ((((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_44 [i_15] [i_15])) || (arr_26 [i_15]))))) <= ((((_Bool)1) ? (-5612546226862456980LL) : (((/* implicit */long long int) 4075608296U)))))) ? (((/* implicit */int) (((+(((/* implicit */int) arr_51 [i_15])))) == (((/* implicit */int) arr_49 [(short)12] [(unsigned short)2]))))) : (((/* implicit */int) ((((/* implicit */int) (!(var_7)))) <= ((-(((/* implicit */int) (_Bool)1)))))))));
    }
}
