/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164040
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164040 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164040
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
    var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) var_3))));
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (unsigned int i_2 = 1; i_2 < 17; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 3; i_4 < 18; i_4 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */_Bool) (-((-(4181480306U)))));
                                arr_16 [i_2] [i_2] [i_1] [(signed char)18] [i_2 - 1] = var_16;
                                arr_17 [17] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) (short)-1);
                            }
                        } 
                    } 
                    arr_18 [i_2] [i_1] [i_1] [i_0] = ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) var_9))))))));
                    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((var_12), (arr_10 [i_0] [i_2 + 1])))) ? (((/* implicit */int) max((arr_12 [i_2 - 1] [i_1] [i_1] [i_0]), (((/* implicit */signed char) var_8))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (signed char i_5 = 0; i_5 < 20; i_5 += 3) 
        {
            for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
            {
                for (short i_7 = 0; i_7 < 20; i_7 += 2) 
                {
                    {
                        arr_25 [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) var_6))));
                        arr_26 [i_0] [15ULL] [15ULL] [i_7] = ((/* implicit */long long int) ((unsigned short) var_11));
                        var_22 += ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_20 [i_0] [i_6 - 1] [i_6 - 1])) : (((/* implicit */int) var_11))))) ? (min((arr_21 [i_6 - 1] [i_0]), (((/* implicit */long long int) var_4)))) : (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_0] [i_0] [i_0]))));
                    }
                } 
            } 
        } 
        var_23 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_15 [i_0]) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_24 [i_0] [i_0] [i_0] [i_0] [(short)1] [i_0]))))) ? (((/* implicit */int) (signed char)-125)) : ((-(((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0])))))))));
        var_24 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(((((/* implicit */int) var_11)) % (((/* implicit */int) var_1)))))))));
    }
    for (unsigned char i_8 = 0; i_8 < 14; i_8 += 3) 
    {
        /* LoopSeq 4 */
        for (long long int i_9 = 2; i_9 < 13; i_9 += 3) 
        {
            var_25 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((max((((/* implicit */unsigned int) (signed char)127)), (arr_4 [i_8] [(_Bool)1]))), (((/* implicit */unsigned int) (~(((/* implicit */int) var_0)))))))) ? (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) (unsigned char)22)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (arr_7 [(unsigned char)6] [(unsigned char)6]))))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_11)))) <= (arr_8 [i_8] [i_9] [i_9 + 1]))))));
            var_26 = max((max((arr_28 [i_9 - 2]), (((/* implicit */unsigned char) (_Bool)0)))), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (short)31))))));
            /* LoopNest 2 */
            for (unsigned char i_10 = 4; i_10 < 12; i_10 += 2) 
            {
                for (unsigned int i_11 = 0; i_11 < 14; i_11 += 3) 
                {
                    {
                        var_27 ^= ((/* implicit */long long int) arr_9 [i_8] [i_8]);
                        arr_38 [i_8] [i_8] [i_8] [i_9] = ((/* implicit */_Bool) ((max((arr_6 [i_9] [i_9]), (((/* implicit */unsigned long long int) arr_37 [i_8] [i_9 + 1] [i_10 - 1] [i_9])))) | (((/* implicit */unsigned long long int) arr_23 [i_8] [i_9] [i_9] [i_10 + 2] [i_11]))));
                    }
                } 
            } 
            arr_39 [i_9] [i_9] = ((/* implicit */unsigned long long int) min(((-(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((unsigned char) ((((/* implicit */int) arr_3 [i_8])) | (((/* implicit */int) var_7))))))));
        }
        /* vectorizable */
        for (short i_12 = 1; i_12 < 12; i_12 += 1) 
        {
            arr_42 [i_8] [i_12] [(_Bool)1] = ((((/* implicit */_Bool) var_9)) ? (7827230654280539775ULL) : (((/* implicit */unsigned long long int) var_12)));
            arr_43 [i_12] [i_12] [i_12] = ((/* implicit */int) ((arr_27 [i_8] [i_12 + 2]) - (arr_27 [i_8] [i_12])));
            arr_44 [i_12] = ((/* implicit */short) (~(arr_29 [i_8] [i_12] [i_12 - 1])));
            /* LoopNest 2 */
            for (long long int i_13 = 0; i_13 < 14; i_13 += 1) 
            {
                for (long long int i_14 = 2; i_14 < 13; i_14 += 1) 
                {
                    {
                        var_28 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)6))) ^ (((unsigned int) arr_46 [i_12]))));
                        arr_50 [(short)7] [i_12] [i_13] [i_14] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_12 + 1] [i_12])) ? (arr_6 [i_12 + 2] [i_12]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_16)))));
                        arr_51 [i_8] [i_12] [i_13] [i_12] = ((/* implicit */unsigned long long int) ((_Bool) arr_1 [i_14 - 2] [i_14 - 1]));
                        arr_52 [i_8] [i_12] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-11805)) ? ((-(((/* implicit */int) (unsigned short)17021)))) : ((~(var_15)))));
                    }
                } 
            } 
            arr_53 [i_12] [i_12] = ((((/* implicit */_Bool) arr_28 [i_12 + 2])) ? (((/* implicit */int) var_17)) : (((/* implicit */int) arr_28 [i_12 + 1])));
        }
        for (unsigned long long int i_15 = 1; i_15 < 12; i_15 += 1) 
        {
            /* LoopSeq 2 */
            for (long long int i_16 = 0; i_16 < 14; i_16 += 1) 
            {
                arr_59 [i_8] [i_15] [i_16] [i_16] = ((/* implicit */signed char) arr_46 [i_15]);
                /* LoopNest 2 */
                for (_Bool i_17 = 1; i_17 < 1; i_17 += 1) 
                {
                    for (unsigned short i_18 = 3; i_18 < 12; i_18 += 2) 
                    {
                        {
                            arr_65 [(_Bool)1] [i_15] [i_16] [i_17] [i_18] = ((_Bool) arr_27 [i_15] [i_18]);
                            arr_66 [i_15] = ((/* implicit */signed char) ((((unsigned long long int) ((int) 15517624539478433921ULL))) / (((/* implicit */unsigned long long int) 2290089516U))));
                            var_29 = ((((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_2)))))))) > (((/* implicit */int) var_4)));
                        }
                    } 
                } 
            }
            for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
            {
                var_30 -= ((/* implicit */_Bool) 3145235686922286501LL);
                var_31 = ((/* implicit */unsigned short) min((var_31), (((/* implicit */unsigned short) min((((/* implicit */int) arr_1 [i_8] [i_8])), ((~(((/* implicit */int) ((((/* implicit */int) var_10)) < (var_9)))))))))));
            }
            arr_71 [i_15] [i_15] = 2363175538U;
        }
        /* vectorizable */
        for (long long int i_20 = 0; i_20 < 14; i_20 += 1) 
        {
            arr_76 [11] [i_20] [i_20] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_7))));
            var_32 = ((/* implicit */int) ((short) arr_54 [i_8]));
            var_33 = ((/* implicit */short) (~(((/* implicit */int) arr_30 [i_8]))));
            var_34 = ((/* implicit */unsigned int) ((_Bool) ((var_10) ? (var_9) : (((/* implicit */int) arr_3 [i_8])))));
            var_35 = ((/* implicit */short) ((((/* implicit */int) var_4)) << (((arr_10 [i_20] [i_20]) - (3768064378U)))));
        }
        var_36 = ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) ((1315929750U) & (arr_69 [(short)2] [i_8] [i_8] [i_8])))) != (max((5509596878200254170ULL), (((/* implicit */unsigned long long int) 1959291221)))))) ? ((-(((((/* implicit */int) var_4)) >> (((3995168085U) - (3995168079U))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 4294967295U)))))));
    }
    for (short i_21 = 0; i_21 < 20; i_21 += 1) 
    {
        arr_79 [(unsigned char)9] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((((/* implicit */int) (short)17470)) + (((/* implicit */int) arr_3 [i_21])))), ((-(((/* implicit */int) var_8)))))))));
        arr_80 [i_21] [i_21] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) max((var_15), (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_21] [i_21])))))) : (min((arr_14 [i_21] [i_21] [i_21] [14U] [i_21]), (((/* implicit */long long int) var_0)))))), (((/* implicit */long long int) ((((((/* implicit */int) min((var_7), (var_6)))) + (2147483647))) << (((((/* implicit */int) var_10)) - (1))))))));
        arr_81 [i_21] = (_Bool)1;
        var_37 = ((/* implicit */signed char) max((var_37), (((/* implicit */signed char) (~((~(((18119190312556175583ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))))))));
    }
    var_38 = ((/* implicit */long long int) min((var_38), (((/* implicit */long long int) ((unsigned char) min((((((/* implicit */_Bool) 8855919549458734432ULL)) || (((/* implicit */_Bool) var_3)))), (var_18)))))));
    var_39 = ((/* implicit */unsigned int) var_7);
    var_40 = ((/* implicit */short) min(((+(((/* implicit */int) (!(var_5)))))), (((/* implicit */int) (signed char)123))));
}
