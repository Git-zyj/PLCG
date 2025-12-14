/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171927
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171927 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171927
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
    var_18 = ((/* implicit */unsigned int) (~(((var_12) % (((((/* implicit */_Bool) 130023424)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_6)))))));
    var_19 = ((/* implicit */unsigned int) ((unsigned long long int) -130023402));
    var_20 = ((unsigned int) min((((/* implicit */unsigned int) ((signed char) (-2147483647 - 1)))), (2426434868U)));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            /* LoopSeq 3 */
            for (long long int i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                /* LoopSeq 2 */
                for (long long int i_3 = 0; i_3 < 10; i_3 += 4) /* same iter space */
                {
                    arr_11 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */unsigned long long int) 130023424);
                    arr_12 [i_3] [i_2] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_2] [i_0])) ? (((/* implicit */int) (unsigned char)101)) : (((/* implicit */int) arr_9 [i_0] [i_0]))));
                }
                for (long long int i_4 = 0; i_4 < 10; i_4 += 4) /* same iter space */
                {
                    var_21 *= ((10956023324720749974ULL) % (arr_0 [i_4] [i_0]));
                    var_22 = ((/* implicit */unsigned short) (+(-342574522)));
                }
                arr_16 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((_Bool) (~(((/* implicit */int) var_11)))));
            }
            for (unsigned int i_5 = 0; i_5 < 10; i_5 += 3) 
            {
                var_23 = ((/* implicit */unsigned int) arr_18 [i_0] [i_5]);
                var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(arr_3 [i_5])))))))));
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 10; i_6 += 1) 
                {
                    for (long long int i_7 = 0; i_7 < 10; i_7 += 2) 
                    {
                        {
                            arr_25 [i_0] [i_1] [i_1] [i_5] [i_6] [i_7] = ((/* implicit */unsigned int) 67108863LL);
                            arr_26 [i_0] [i_0] [i_0] [i_0] [i_5] [i_0] [i_0] = ((/* implicit */long long int) ((unsigned long long int) (unsigned char)168));
                            arr_27 [i_7] [i_6] [i_1] [i_5] [i_1] [i_0] = ((/* implicit */unsigned long long int) (signed char)-44);
                        }
                    } 
                } 
                var_25 = ((/* implicit */int) var_10);
            }
            for (long long int i_8 = 0; i_8 < 10; i_8 += 4) 
            {
                var_26 = ((long long int) 1868532436U);
                var_27 = ((/* implicit */unsigned long long int) min((var_27), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_19 [i_8] [i_1])) | (((/* implicit */int) arr_7 [i_8] [i_0])))))));
                arr_30 [i_8] [i_1] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) 1868532410U)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) (unsigned short)19624)))) : (2266437210U)));
                var_28 = ((/* implicit */long long int) max((var_28), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (unsigned char)247))))) ? (arr_14 [i_8] [i_8] [i_1] [i_1] [i_0] [i_0]) : ((-(arr_14 [i_8] [i_8] [i_0] [i_8] [i_1] [i_0]))))))));
            }
            arr_31 [2LL] [(signed char)0] = ((/* implicit */unsigned long long int) ((int) ((int) 8963917672395324144LL)));
            var_29 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-19))))) < (((unsigned int) 1868532428U))));
        }
        for (signed char i_9 = 0; i_9 < 10; i_9 += 3) 
        {
            var_30 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)14)) * (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)11)))))));
            arr_36 [i_0] [i_0] [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)15)) || (((/* implicit */_Bool) 1868532433U))));
            var_31 = ((/* implicit */unsigned int) ((5165154169023099281ULL) % (((/* implicit */unsigned long long int) (-(2426434868U))))));
        }
        arr_37 [8ULL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_15)) ? (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : (arr_13 [(unsigned char)6] [i_0] [i_0] [i_0] [i_0] [i_0])));
    }
    for (unsigned int i_10 = 0; i_10 < 12; i_10 += 1) 
    {
        /* LoopNest 2 */
        for (short i_11 = 0; i_11 < 12; i_11 += 4) 
        {
            for (unsigned char i_12 = 0; i_12 < 12; i_12 += 3) 
            {
                {
                    arr_47 [i_10] [i_11] [i_12] = ((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL));
                    var_32 = ((/* implicit */long long int) ((unsigned int) ((arr_45 [i_10] [i_11] [i_12]) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_42 [i_10] [i_10]))))));
                    arr_48 [i_10] = ((/* implicit */unsigned char) arr_44 [i_12] [i_12] [i_12] [i_12]);
                }
            } 
        } 
        var_33 = ((/* implicit */signed char) max((var_33), ((signed char)80)));
        /* LoopSeq 2 */
        for (unsigned long long int i_13 = 0; i_13 < 12; i_13 += 2) 
        {
            arr_53 [i_10] [i_10] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 8057539282439322550LL)) ? (arr_39 [i_13]) : (min((((/* implicit */long long int) arr_42 [i_10] [i_13])), (arr_43 [i_10] [i_10]))))))));
            var_34 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (unsigned char)247)))) : (((/* implicit */int) ((signed char) arr_43 [i_10] [i_10])))));
        }
        for (unsigned int i_14 = 0; i_14 < 12; i_14 += 1) 
        {
            var_35 *= ((/* implicit */signed char) arr_44 [i_10] [i_10] [i_14] [i_14]);
            var_36 = ((/* implicit */unsigned int) min((var_36), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 1868532405U)) ? ((-(((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))) : (((/* implicit */int) max(((unsigned char)9), (((/* implicit */unsigned char) arr_38 [i_10]))))))))));
        }
        arr_56 [i_10] = ((/* implicit */unsigned long long int) min((((arr_43 [i_10] [i_10]) | (((/* implicit */long long int) ((/* implicit */int) (signed char)102))))), (max((arr_43 [i_10] [7ULL]), (arr_43 [i_10] [i_10])))));
    }
    var_37 = ((/* implicit */signed char) min((var_37), (((/* implicit */signed char) ((unsigned long long int) (+(min((2258828954142468318LL), (((/* implicit */long long int) var_10))))))))));
}
