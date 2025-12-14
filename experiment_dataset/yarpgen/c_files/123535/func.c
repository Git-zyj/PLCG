/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123535
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123535 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123535
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
    var_11 = ((/* implicit */_Bool) ((short) max((((/* implicit */unsigned long long int) (_Bool)1)), (18446744073709551615ULL))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        var_12 = ((/* implicit */unsigned char) arr_0 [i_0] [0ULL]);
        var_13 = ((/* implicit */long long int) (~(((/* implicit */int) arr_2 [i_0]))));
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_14 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_5 [i_1])) || (((/* implicit */_Bool) arr_4 [i_0]))));
            /* LoopSeq 3 */
            for (signed char i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                arr_8 [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-47)) || (((/* implicit */_Bool) (signed char)111))));
                var_15 |= ((/* implicit */signed char) ((short) arr_1 [i_0] [i_0]));
            }
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_1] [i_0])))))));
                var_17 = ((/* implicit */_Bool) (unsigned short)22024);
            }
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                var_18 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_4]))));
                var_19 |= arr_0 [i_0] [i_0];
            }
            /* LoopSeq 3 */
            for (signed char i_5 = 0; i_5 < 21; i_5 += 3) /* same iter space */
            {
                arr_18 [i_1] [i_1] = ((/* implicit */signed char) ((int) (_Bool)1));
                arr_19 [i_0] |= ((/* implicit */signed char) ((arr_6 [i_0] [i_1] [i_5]) << (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (_Bool)1)))))));
                var_20 ^= ((/* implicit */short) ((arr_14 [i_0] [i_0]) || (arr_14 [i_0] [i_0])));
            }
            for (signed char i_6 = 0; i_6 < 21; i_6 += 3) /* same iter space */
            {
                var_21 ^= ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_2 [i_6]))));
                /* LoopSeq 1 */
                for (unsigned long long int i_7 = 0; i_7 < 21; i_7 += 2) 
                {
                    var_22 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0))) < (4611686018427387904ULL)));
                    var_23 ^= ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)190)) >= (((/* implicit */int) (unsigned short)22006))));
                    /* LoopSeq 4 */
                    for (long long int i_8 = 3; i_8 < 19; i_8 += 4) 
                    {
                        var_24 = ((/* implicit */unsigned char) (~(29ULL)));
                        arr_27 [i_1] [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_3)))))));
                        arr_28 [i_0] [i_1] = ((/* implicit */unsigned int) ((arr_11 [i_1] [i_7] [i_7]) >= (((/* implicit */long long int) ((/* implicit */int) (signed char)77)))));
                    }
                    for (long long int i_9 = 0; i_9 < 21; i_9 += 2) 
                    {
                        arr_31 [i_9] [i_1] [i_6] [17U] [i_1] [i_0] = ((/* implicit */unsigned long long int) (unsigned short)22024);
                        arr_32 [i_0] [i_1] [i_6] [i_1] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_17 [i_0] [i_0])) * (((/* implicit */int) arr_17 [10ULL] [i_6]))));
                        var_25 |= ((/* implicit */unsigned int) ((unsigned long long int) (unsigned short)43511));
                        arr_33 [(unsigned char)14] [(unsigned char)14] [i_1] [i_6] [i_7] [i_1] [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0]))));
                        var_26 = ((/* implicit */unsigned char) (-((~(8560686846994764622ULL)))));
                    }
                    for (short i_10 = 0; i_10 < 21; i_10 += 3) 
                    {
                        var_27 = ((/* implicit */signed char) var_3);
                        arr_36 [i_10] [i_1] [i_6] [i_7] [i_10] = ((/* implicit */unsigned char) arr_34 [i_1]);
                    }
                    for (unsigned char i_11 = 0; i_11 < 21; i_11 += 3) 
                    {
                        arr_39 [i_1] = ((/* implicit */unsigned char) var_0);
                        arr_40 [15LL] [9ULL] [i_6] [i_1] [i_11] [6U] = ((/* implicit */unsigned char) (signed char)-34);
                        var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (unsigned char)245)) : (((/* implicit */int) (unsigned char)13))));
                        arr_41 [i_1] [i_1] [i_1] [i_6] [i_7] [i_11] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [i_0])) % ((+(((/* implicit */int) arr_24 [i_0] [i_6] [(unsigned char)19] [i_7]))))));
                    }
                }
                var_29 = ((/* implicit */unsigned short) arr_16 [i_0] [i_0] [i_1]);
            }
            for (signed char i_12 = 0; i_12 < 21; i_12 += 3) /* same iter space */
            {
                arr_44 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_29 [i_0] [1LL] [i_1] [i_1] [(signed char)15] [i_12] [i_12])) << (((/* implicit */int) arr_14 [i_1] [i_1]))));
                arr_45 [i_0] [(_Bool)1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) || (((/* implicit */_Bool) arr_0 [i_0] [(signed char)17]))));
                arr_46 [(_Bool)1] [i_1] [i_1] [i_12] = ((/* implicit */long long int) var_0);
            }
            arr_47 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_14 [i_0] [i_1]))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)240)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_23 [(short)7] [i_1] [i_0]))))) : ((~(1536595192U)))));
            var_30 = ((/* implicit */short) max((var_30), (((/* implicit */short) (unsigned short)18908))));
        }
        arr_48 [i_0] [i_0] = ((/* implicit */unsigned short) arr_4 [(unsigned char)0]);
        arr_49 [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) 4209435067U))));
    }
    for (unsigned long long int i_13 = 0; i_13 < 15; i_13 += 3) 
    {
        /* LoopSeq 2 */
        for (long long int i_14 = 1; i_14 < 13; i_14 += 3) /* same iter space */
        {
            arr_54 [0U] = ((/* implicit */short) var_2);
            var_31 = ((/* implicit */long long int) max((var_31), (((/* implicit */long long int) var_8))));
        }
        for (long long int i_15 = 1; i_15 < 13; i_15 += 3) /* same iter space */
        {
            /* LoopSeq 4 */
            for (unsigned int i_16 = 2; i_16 < 12; i_16 += 4) 
            {
                var_32 = ((/* implicit */unsigned long long int) (((~(((/* implicit */int) (!(((/* implicit */_Bool) (short)24504))))))) > (((/* implicit */int) arr_58 [i_13]))));
                var_33 = ((/* implicit */unsigned long long int) max((var_33), (((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (unsigned short)34567)) : (((/* implicit */int) (unsigned short)46624)))))))) - (((/* implicit */int) (!(((/* implicit */_Bool) ((var_4) ? (arr_1 [i_13] [i_13]) : (2600982897U))))))))))));
                var_34 = ((/* implicit */unsigned long long int) min((((/* implicit */int) var_4)), (((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) arr_55 [i_13] [i_15] [i_13]))))));
            }
            for (unsigned int i_17 = 4; i_17 < 13; i_17 += 3) /* same iter space */
            {
                var_35 |= ((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((((/* implicit */int) (short)2785)) - (((/* implicit */int) var_4))))), (min((((/* implicit */unsigned int) ((((/* implicit */int) var_1)) % (((/* implicit */int) (_Bool)1))))), ((~(3339167432U)))))));
                var_36 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)65519))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (85532229U) : (85532251U)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_17 + 2] [i_13] [i_17 - 1] [i_13]))) : (arr_0 [i_13] [i_13]))))));
                arr_62 [i_17] [i_15 - 1] [i_13] = ((/* implicit */int) (!((_Bool)0)));
            }
            for (unsigned int i_18 = 4; i_18 < 13; i_18 += 3) /* same iter space */
            {
                var_37 |= var_8;
                arr_65 [i_13] [i_18 - 2] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)25))) < (((min((17544042606453397596ULL), (((/* implicit */unsigned long long int) var_2)))) % (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (signed char)-45)), ((unsigned short)62161)))))))));
                arr_66 [i_13] [i_13] [i_18] = ((/* implicit */unsigned int) max((((((/* implicit */int) arr_9 [i_18 - 1] [20U] [i_15 - 1])) ^ (((/* implicit */int) arr_9 [i_18 - 4] [(_Bool)1] [i_15 - 1])))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_18 - 1] [(signed char)10] [i_15 + 2])))))));
                var_38 = var_10;
            }
            for (unsigned int i_19 = 4; i_19 < 13; i_19 += 3) /* same iter space */
            {
                var_39 = ((/* implicit */unsigned short) 13022422655774663479ULL);
                /* LoopSeq 1 */
                for (short i_20 = 2; i_20 < 14; i_20 += 4) 
                {
                    arr_72 [i_13] [i_20] [i_19] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_70 [i_15] [i_15] [i_15] [i_15 + 1])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_16 [i_13] [i_15] [i_20])))), (((((/* implicit */int) (unsigned short)46598)) + (((/* implicit */int) arr_9 [8U] [i_20] [8U]))))))) || (((arr_6 [i_20] [i_15 + 2] [(unsigned short)16]) >= (((/* implicit */unsigned int) ((/* implicit */int) max((arr_55 [i_19] [i_15] [i_19 + 1]), (((/* implicit */unsigned short) arr_3 [i_20]))))))))));
                    var_40 = ((/* implicit */signed char) (((+(18446744073709551615ULL))) >> (((arr_21 [i_13] [i_15 + 1] [i_15]) - (2338791720424690009ULL)))));
                    /* LoopSeq 2 */
                    for (signed char i_21 = 2; i_21 < 14; i_21 += 3) 
                    {
                        arr_75 [i_13] [i_15] [i_15 + 2] [i_19] [i_20] [i_21] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)30008)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_67 [(_Bool)1] [i_20] [(_Bool)1] [i_20 + 1]))))) : (((/* implicit */int) ((signed char) (+(((/* implicit */int) arr_7 [i_15] [16U] [i_20] [i_21]))))))));
                        var_41 |= ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((arr_74 [i_21 - 2] [i_21 - 2] [i_21 - 1] [i_21] [i_21]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))) + (((long long int) 4294967295U))));
                        var_42 = ((/* implicit */unsigned long long int) (~(((((/* implicit */int) (signed char)1)) ^ (((/* implicit */int) arr_15 [i_20 - 1] [i_21 + 1]))))));
                        var_43 = ((/* implicit */long long int) max((var_43), (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_56 [i_15]))))) >= (((/* implicit */int) min((var_5), (((/* implicit */short) (_Bool)1)))))))) - (((/* implicit */int) ((signed char) ((((/* implicit */int) arr_58 [i_13])) + (((/* implicit */int) (_Bool)1)))))))))));
                    }
                    for (unsigned short i_22 = 2; i_22 < 13; i_22 += 2) 
                    {
                        var_44 = ((/* implicit */unsigned long long int) min((((((/* implicit */int) ((signed char) arr_23 [i_13] [i_13] [i_22]))) | ((~(((/* implicit */int) arr_42 [i_22] [i_22])))))), (((/* implicit */int) arr_29 [i_13] [i_15] [i_22] [4U] [(_Bool)1] [i_22] [i_22 + 1]))));
                        var_45 = ((/* implicit */signed char) arr_4 [i_15 - 1]);
                    }
                    var_46 = ((/* implicit */short) (~(((long long int) arr_7 [20U] [i_19 - 2] [i_19] [i_19]))));
                }
                var_47 = ((/* implicit */unsigned long long int) max((var_47), (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_13] [i_15] [11U])) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))))) && (((((/* implicit */_Bool) arr_12 [i_15] [i_15] [i_19 - 4] [i_19])) || (((/* implicit */_Bool) var_5)))))))));
                var_48 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((var_2) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) arr_60 [i_13] [i_15 + 2] [i_19] [i_19 + 1])) ? (arr_60 [i_13] [i_15 + 2] [i_13] [i_13]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)60)))))));
                arr_78 [i_15] [i_15] [i_15] [i_13] = var_9;
            }
            var_49 = ((/* implicit */signed char) var_10);
            arr_79 [(signed char)7] [i_15] = ((/* implicit */short) var_1);
        }
        var_50 = ((/* implicit */long long int) (_Bool)1);
        arr_80 [i_13] = min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_4 [i_13])))))))), (((((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_51 [i_13])), ((unsigned short)26))))) / (113441065U))));
        var_51 = ((/* implicit */int) ((unsigned int) arr_60 [i_13] [i_13] [i_13] [i_13]));
    }
}
