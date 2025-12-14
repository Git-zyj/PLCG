/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161238
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161238 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161238
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
    for (signed char i_0 = 2; i_0 < 21; i_0 += 2) 
    {
        arr_2 [(unsigned short)18] [(unsigned short)18] = ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_0 [i_0 - 1])) : (var_1))))) ? (((((/* implicit */int) arr_1 [i_0 - 2])) >> (((((/* implicit */int) var_4)) - (43999))))) : (((/* implicit */int) max((arr_1 [i_0 - 1]), (arr_0 [i_0 - 1])))));
        arr_3 [i_0] = ((/* implicit */short) min((var_1), (((/* implicit */int) ((unsigned char) arr_0 [i_0 - 1])))));
    }
    for (unsigned long long int i_1 = 2; i_1 < 10; i_1 += 1) 
    {
        arr_7 [i_1] = ((/* implicit */signed char) (-(((((((/* implicit */long long int) 4294967295U)) >= (-6428362854712742557LL))) ? (((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) (short)8419)) : (((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) (!(((/* implicit */_Bool) 6428362854712742556LL)))))))));
        arr_8 [i_1] [i_1 - 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1]))) : (12885487112265030005ULL)))) ? (((/* implicit */int) (signed char)-51)) : (((/* implicit */int) ((_Bool) ((var_1) / (((/* implicit */int) arr_5 [i_1]))))))));
    }
    for (unsigned char i_2 = 0; i_2 < 22; i_2 += 2) 
    {
        arr_13 [i_2] = (+(((var_1) ^ (((/* implicit */int) var_7)))));
        arr_14 [i_2] = ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_2])) ? (((arr_12 [i_2]) ^ (arr_12 [i_2]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_2])))))) ^ (((arr_9 [i_2] [i_2]) & (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_5)))))));
        /* LoopSeq 4 */
        for (int i_3 = 1; i_3 < 21; i_3 += 2) 
        {
            arr_17 [i_2] [i_2] &= ((/* implicit */_Bool) ((max((((/* implicit */unsigned long long int) arr_9 [i_3 + 1] [i_3 + 1])), (((((/* implicit */_Bool) arr_9 [i_3] [i_2])) ? (arr_11 [i_3 + 1]) : (((/* implicit */unsigned long long int) arr_9 [i_2] [14U])))))) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_3 - 1])) ? (((/* implicit */int) ((((/* implicit */int) arr_10 [i_3])) > (((/* implicit */int) var_6))))) : ((-(((/* implicit */int) var_6)))))))));
            arr_18 [i_2] [i_3] = ((/* implicit */unsigned short) ((unsigned int) var_9));
            arr_19 [(short)18] [i_3 + 1] = ((/* implicit */unsigned long long int) var_3);
            /* LoopSeq 3 */
            for (int i_4 = 0; i_4 < 22; i_4 += 4) 
            {
                arr_23 [i_2] [(_Bool)1] = ((/* implicit */unsigned long long int) ((((arr_15 [(unsigned short)0] [(unsigned short)0] [i_3 + 1]) - (arr_15 [(unsigned char)8] [(unsigned char)8] [i_3 - 1]))) - ((-(((/* implicit */int) var_5))))));
                arr_24 [i_2] [i_3] = (signed char)0;
                arr_25 [i_2] [11ULL] = ((/* implicit */unsigned short) var_7);
                arr_26 [i_2] [i_2] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (arr_12 [i_4])))) ? (((/* implicit */unsigned int) max((((/* implicit */int) max((((/* implicit */short) var_0)), (var_2)))), (arr_15 [i_2] [i_3 + 1] [i_4])))) : (max((arr_21 [i_3 - 1] [i_3 - 1] [(_Bool)1]), (((/* implicit */unsigned int) ((((/* implicit */int) var_9)) <= (((/* implicit */int) var_7))))))));
                arr_27 [i_2] [i_2] = ((/* implicit */short) max((13884643154950830477ULL), (((/* implicit */unsigned long long int) ((unsigned int) var_0)))));
            }
            for (unsigned int i_5 = 0; i_5 < 22; i_5 += 2) 
            {
                arr_30 [i_2] [i_2] = ((/* implicit */_Bool) 0LL);
                arr_31 [i_2] [i_3] [i_3] [i_5] = ((((/* implicit */_Bool) ((((/* implicit */int) ((unsigned short) -5651305369909670427LL))) * (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_9))))))) ? (((/* implicit */int) ((short) var_0))) : (var_1));
                arr_32 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -6428362854712742539LL)) ? (((/* implicit */int) ((((/* implicit */int) arr_1 [i_3 + 1])) > (var_1)))) : (((((/* implicit */_Bool) (unsigned short)13)) ? (((/* implicit */int) arr_22 [i_2] [i_2] [i_3 - 1])) : (((/* implicit */int) var_4))))));
            }
            /* vectorizable */
            for (unsigned char i_6 = 3; i_6 < 21; i_6 += 3) 
            {
                arr_35 [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) arr_15 [i_3] [i_3 - 1] [i_6 - 3]);
                arr_36 [(unsigned short)16] [i_3] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_33 [i_3 - 1])) || (((/* implicit */_Bool) arr_34 [i_6 - 3] [i_6 - 2] [i_6 - 3]))));
                arr_37 [i_2] = ((/* implicit */short) var_3);
            }
        }
        /* vectorizable */
        for (short i_7 = 0; i_7 < 22; i_7 += 1) 
        {
            arr_40 [i_7] = ((/* implicit */unsigned int) ((((/* implicit */int) var_0)) * (((/* implicit */int) arr_16 [i_2]))));
            /* LoopNest 2 */
            for (unsigned int i_8 = 1; i_8 < 20; i_8 += 3) 
            {
                for (signed char i_9 = 0; i_9 < 22; i_9 += 4) 
                {
                    {
                        arr_45 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */int) var_7)) << ((((((-(((/* implicit */int) arr_1 [17LL])))) + (56304))) - (14)))));
                        arr_46 [i_2] [13] [13] [13] [i_2] = ((/* implicit */int) ((signed char) arr_39 [i_8 + 2]));
                        arr_47 [i_2] [i_7] [i_8 - 1] [i_9] [i_9] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_28 [i_2] [i_7] [i_8] [i_2]))));
                        arr_48 [i_2] [i_2] [i_2] [i_2] [i_9] = ((/* implicit */long long int) (-(arr_21 [i_8 + 1] [(signed char)12] [i_8 - 1])));
                    }
                } 
            } 
        }
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            arr_52 [i_2] [i_2] = ((/* implicit */_Bool) (((~(((/* implicit */int) arr_10 [i_2])))) | (((/* implicit */int) var_6))));
            arr_53 [10U] [i_10] [i_10] = ((/* implicit */signed char) arr_29 [i_2] [i_10] [i_10] [i_10]);
            arr_54 [i_2] = ((/* implicit */int) arr_20 [i_2] [i_2] [(_Bool)1] [i_2]);
            arr_55 [i_2] [i_10] = ((/* implicit */signed char) max((((/* implicit */int) var_0)), (((((/* implicit */_Bool) (+(((/* implicit */int) var_8))))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)65535)) <= (((/* implicit */int) var_7))))) : (((/* implicit */int) var_2))))));
            arr_56 [16] [i_10] [i_2] = ((/* implicit */long long int) ((((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_7)), (arr_1 [i_10])))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_43 [i_2] [i_2] [i_10] [i_10]))))) : (min((arr_11 [(unsigned short)14]), (((/* implicit */unsigned long long int) (signed char)0)))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))));
        }
        for (short i_11 = 2; i_11 < 21; i_11 += 1) 
        {
            arr_60 [i_2] [i_11 + 1] [i_2] = ((/* implicit */_Bool) (-((-(((((/* implicit */int) arr_51 [i_2] [i_11] [i_11])) | (((/* implicit */int) var_9))))))));
            arr_61 [i_2] [i_11 - 1] = ((/* implicit */unsigned int) var_9);
        }
    }
    var_10 = ((/* implicit */unsigned int) var_7);
}
