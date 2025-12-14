/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161535
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161535 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161535
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
    var_20 = ((/* implicit */signed char) (+(((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (short)-5306)) : (((/* implicit */int) (_Bool)1))))) - (((((/* implicit */_Bool) 2170444965U)) ? (var_14) : (var_4)))))));
    var_21 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) -5307721778890749901LL)) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (short)5314)))) : ((+(((/* implicit */int) (unsigned char)193))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)128))))) ? (var_3) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) 0LL)) ? (var_1) : (((/* implicit */long long int) var_2)))) >= (var_0))))));
    var_22 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -5307721778890749873LL)) ? (-4327113606506774490LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-32)))))) ? (((/* implicit */int) (signed char)24)) : (((/* implicit */int) (unsigned char)0))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */short) (_Bool)1);
        arr_4 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) : (var_19)))))) ? ((~(((/* implicit */int) arr_2 [i_0] [i_0])))) : ((~(((/* implicit */int) arr_0 [i_0]))))));
        /* LoopSeq 4 */
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            arr_9 [i_0] [i_0] = ((/* implicit */short) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (short)-4325))))) ? ((~(((/* implicit */int) var_12)))) : (((/* implicit */int) arr_5 [i_1]))))), ((-(var_14)))));
            arr_10 [i_0] [i_1] = ((/* implicit */unsigned char) arr_0 [i_0]);
        }
        for (short i_2 = 3; i_2 < 17; i_2 += 1) 
        {
            /* LoopNest 3 */
            for (signed char i_3 = 4; i_3 < 17; i_3 += 1) 
            {
                for (unsigned int i_4 = 2; i_4 < 19; i_4 += 1) 
                {
                    for (unsigned char i_5 = 2; i_5 < 17; i_5 += 1) 
                    {
                        {
                            arr_21 [i_0] [i_5 - 1] = ((/* implicit */signed char) -9LL);
                            arr_22 [i_0] [i_0] [i_3 - 4] [(short)16] [i_5 + 1] |= ((/* implicit */_Bool) var_1);
                            arr_23 [i_0] [i_5] [(unsigned char)2] [i_4 + 1] [i_5 + 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_13))))) ? (((/* implicit */int) (unsigned char)65)) : ((-(((/* implicit */int) arr_15 [0U]))))))) ? (((/* implicit */long long int) (+((-(var_14)))))) : (((((/* implicit */_Bool) (-(((/* implicit */int) (short)26551))))) ? (((((/* implicit */_Bool) arr_0 [i_4 - 1])) ? (((/* implicit */long long int) var_2)) : (-4959791903593038409LL))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)2)))))));
                            arr_24 [i_0] [i_0] [i_3] [i_3] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_4))));
                        }
                    } 
                } 
            } 
            arr_25 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)24)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_0] [i_2] [i_2 + 3] [i_2])))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_18 [i_0] [i_0] [i_0] [i_2])) ? (((/* implicit */int) arr_16 [i_0] [i_2 + 3] [i_0] [i_2])) : (((/* implicit */int) arr_11 [i_2] [i_2 - 3]))))) : (var_2)))) : (((((/* implicit */_Bool) max(((short)26551), (((/* implicit */short) (unsigned char)0))))) ? (-6441573333860492621LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)193)))))));
            /* LoopSeq 2 */
            for (short i_6 = 1; i_6 < 18; i_6 += 1) 
            {
                arr_29 [i_0] [i_0] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-17)) ? (((((/* implicit */_Bool) (short)-27933)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (short)-27933)))) : ((+(((/* implicit */int) var_9))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned char)220)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)7597))) : ((~(var_2))))) : (((arr_5 [i_2 - 1]) ? (var_19) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_2 - 1])))))));
                arr_30 [i_0] [i_2] [i_6 + 1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 764897224U)) ? (((/* implicit */int) max(((unsigned char)88), ((unsigned char)0)))) : (((/* implicit */int) arr_5 [i_2 + 3]))))) ? (max((536870911LL), (((/* implicit */long long int) (unsigned char)31)))) : (((/* implicit */long long int) (+(((/* implicit */int) arr_14 [i_0] [i_0] [i_6 + 2] [i_0])))))));
                arr_31 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (-((-(((((/* implicit */long long int) ((/* implicit */int) (unsigned char)87))) / (5307721778890749891LL)))))));
            }
            for (short i_7 = 0; i_7 < 20; i_7 += 1) 
            {
                /* LoopNest 2 */
                for (signed char i_8 = 3; i_8 < 17; i_8 += 1) 
                {
                    for (signed char i_9 = 0; i_9 < 20; i_9 += 1) 
                    {
                        {
                            arr_40 [i_0] [8U] [8U] [i_0] [i_0] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) (unsigned char)225)) ? (5307721778890749881LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-12594)))))));
                            arr_41 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) -900674325152153091LL);
                            arr_42 [i_0] [i_0] [i_0] [10LL] [i_9] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 8688970992332734368LL)) ? (arr_39 [i_0] [(short)8] [(short)8] [i_7] [i_2 + 3] [i_0] [(_Bool)1]) : (arr_39 [i_0] [(unsigned char)14] [i_0] [(unsigned char)14] [i_2 - 3] [i_9] [(unsigned char)14]))) ^ (((/* implicit */long long int) ((/* implicit */int) (short)27925)))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_10 = 0; i_10 < 20; i_10 += 1) 
                {
                    for (unsigned int i_11 = 0; i_11 < 20; i_11 += 1) 
                    {
                        {
                            arr_47 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) (signed char)12);
                            arr_48 [i_0] [i_2 - 3] [i_2] [i_10] [i_0] = ((/* implicit */signed char) (unsigned char)15);
                            arr_49 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) min((min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) arr_37 [i_10] [i_10]))))), (((((/* implicit */unsigned int) ((/* implicit */int) var_11))) ^ (1023U))))), (((/* implicit */unsigned int) arr_17 [i_0] [i_0] [i_2] [i_2] [i_0] [i_2]))));
                            arr_50 [i_0] [i_0] [i_2] [i_2] [i_11] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((var_1) << (((((/* implicit */int) var_17)) - (10)))))))) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */long long int) ((/* implicit */int) arr_33 [i_0]))) : (5307721778890749866LL)))))))));
                            arr_51 [(short)6] [(short)6] [(short)6] [i_10] [(short)6] = ((/* implicit */long long int) 2011178535U);
                        }
                    } 
                } 
                arr_52 [i_0] [i_0] [i_2] [i_7] = var_16;
            }
            arr_53 [i_0] [i_2] [i_0] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) var_16)))) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_7 [i_0] [i_0]))))) : (((((/* implicit */_Bool) arr_44 [i_2] [i_0] [i_0] [i_2])) ? (((((/* implicit */_Bool) arr_39 [i_2] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (5307721778890749873LL) : (((/* implicit */long long int) ((/* implicit */int) arr_32 [i_0] [i_2 - 1]))))) : (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_2] [i_2] [i_2 + 2] [i_2] [i_2] [i_2 + 1] [i_2 + 1])))))));
        }
        /* vectorizable */
        for (unsigned char i_12 = 0; i_12 < 20; i_12 += 1) 
        {
            arr_56 [i_0] = ((/* implicit */short) ((arr_8 [i_12] [i_12] [i_0]) / (((/* implicit */long long int) 4192256U))));
            arr_57 [(_Bool)1] = ((/* implicit */short) ((((/* implicit */_Bool) var_19)) ? (((((/* implicit */_Bool) 5307721778890749900LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_12]))) : (7872708044682801424LL))) : (((/* implicit */long long int) ((/* implicit */int) (short)-10231)))));
            arr_58 [i_0] [(signed char)6] = ((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_16 [(signed char)14] [(signed char)14] [i_0] [(signed char)14])) : (((/* implicit */int) (unsigned char)237))));
            arr_59 [i_0] = ((/* implicit */_Bool) var_14);
        }
        /* vectorizable */
        for (short i_13 = 0; i_13 < 20; i_13 += 1) 
        {
            arr_62 [(unsigned char)16] [i_13] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775802LL)) ? (((/* implicit */int) arr_18 [i_0] [i_13] [i_13] [i_13])) : (((/* implicit */int) (signed char)-30))));
            arr_63 [i_0] [i_13] = ((/* implicit */short) ((((((/* implicit */_Bool) 4294967295U)) || (((/* implicit */_Bool) (short)-10205)))) ? (((/* implicit */int) arr_20 [12LL] [i_13] [i_13] [i_13] [i_13] [i_0] [i_0])) : (((/* implicit */int) (short)6715))));
        }
        arr_64 [i_0] = ((/* implicit */short) (-((~(((/* implicit */int) arr_16 [i_0] [12U] [i_0] [i_0]))))));
    }
}
