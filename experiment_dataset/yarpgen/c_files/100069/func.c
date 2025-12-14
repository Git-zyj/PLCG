/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100069
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100069 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100069
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
    var_13 |= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)1023)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (short)1002)) && (((/* implicit */_Bool) (short)1034))))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_7)));
    /* LoopSeq 4 */
    for (unsigned int i_0 = 2; i_0 < 12; i_0 += 4) 
    {
        arr_3 [i_0] [i_0 - 1] = ((/* implicit */unsigned int) var_12);
        arr_4 [i_0] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (short)1034)) : (((/* implicit */int) var_11)))), ((+(((/* implicit */int) (unsigned char)207))))));
        arr_5 [i_0 + 2] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((max(((unsigned char)196), (((/* implicit */unsigned char) (_Bool)0)))), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) 1022439235)) > (762340048079753814ULL))))))) ? (((((/* implicit */_Bool) (+(var_1)))) ? (((((/* implicit */_Bool) var_3)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (var_10))))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)1034)))));
    }
    for (int i_1 = 1; i_1 < 11; i_1 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_2 = 1; i_2 < 11; i_2 += 4) 
        {
            arr_11 [i_1] = ((/* implicit */unsigned int) (unsigned char)146);
            arr_12 [i_1 + 1] [i_1 + 1] [i_2 - 1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) var_10))) ? (((/* implicit */int) arr_0 [i_2])) : (max((757134320), (((/* implicit */int) arr_0 [i_2]))))))) >= (((((/* implicit */_Bool) arr_0 [i_2 - 1])) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))));
            arr_13 [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (arr_2 [(unsigned char)12]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-1)))))) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned char) (signed char)0)), ((unsigned char)186))))) : (var_9)))) ? (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (signed char)95)) != (((/* implicit */int) (unsigned char)44))))) > (((/* implicit */int) (unsigned char)70))))) : (((var_0) ? (min((((/* implicit */int) arr_1 [i_1 - 1])), (var_1))) : (((((/* implicit */int) (unsigned char)185)) * (((/* implicit */int) (signed char)0))))))));
        }
        /* LoopNest 2 */
        for (unsigned int i_3 = 0; i_3 < 12; i_3 += 4) 
        {
            for (unsigned char i_4 = 2; i_4 < 10; i_4 += 4) 
            {
                {
                    arr_18 [i_1] [i_3] [i_4] = ((/* implicit */short) (signed char)-27);
                    arr_19 [i_4 + 1] [i_4] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) ((((var_10) - (var_10))) - (((/* implicit */unsigned int) var_4))))) ? (((min((((/* implicit */unsigned long long int) var_1)), (var_7))) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_8)))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))));
                    arr_20 [i_1] [i_3] [i_3] [i_4 - 2] &= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */signed char) var_2)), (arr_16 [i_4 - 1] [i_4] [i_4])))) ? (((((/* implicit */_Bool) arr_10 [i_4] [i_4 - 2])) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1]))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 70368727400448ULL)) ? (2533506292U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)4))))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_17 [i_1 + 1] [i_4 - 2])) ? (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)147))) * (var_10))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_10 [i_1] [i_3])) % (((/* implicit */int) var_2)))))))) : (var_3)));
                }
            } 
        } 
    }
    for (int i_5 = 1; i_5 < 11; i_5 += 1) /* same iter space */
    {
        arr_23 [i_5 + 1] = ((/* implicit */short) ((signed char) ((((/* implicit */_Bool) ((((/* implicit */int) var_11)) ^ (((/* implicit */int) (_Bool)1))))) ? (var_9) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)186)) | (((/* implicit */int) var_12))))))));
        arr_24 [i_5] = ((/* implicit */long long int) ((var_1) != (((/* implicit */int) var_8))));
        arr_25 [i_5] = ((/* implicit */short) ((((/* implicit */int) ((((var_6) >> (((var_4) + (1545866600))))) >= (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)173)) ? (2147483647) : (((/* implicit */int) (unsigned char)108)))))))) % (((/* implicit */int) ((((/* implicit */_Bool) arr_21 [i_5 - 1])) && (((/* implicit */_Bool) arr_6 [i_5])))))));
        arr_26 [i_5 - 1] [i_5 - 1] = ((/* implicit */unsigned int) min((min((arr_14 [i_5 - 1] [i_5 - 1] [i_5 + 1]), (((/* implicit */unsigned long long int) var_9)))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_14 [i_5 - 1] [i_5 - 1] [i_5 - 1])))))));
        /* LoopSeq 2 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            arr_30 [i_5] [i_5] [i_5] = ((/* implicit */unsigned char) max((((((/* implicit */int) min((var_0), (var_2)))) + ((-(((/* implicit */int) arr_8 [(short)9])))))), (((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_5)) : (arr_28 [i_5] [i_5]))) + (min((-36682994), (((/* implicit */int) (unsigned char)146))))))));
            /* LoopNest 2 */
            for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
            {
                for (long long int i_8 = 2; i_8 < 8; i_8 += 2) 
                {
                    {
                        arr_37 [i_5] [i_5] [i_5 - 1] [i_5] [i_5 + 1] [i_5 - 1] = max((((/* implicit */long long int) 12U)), (9223372036854775807LL));
                        arr_38 [i_8 + 4] [i_7] [i_6] [i_6] [i_5 + 1] = ((/* implicit */short) var_1);
                    }
                } 
            } 
            arr_39 [i_5] [i_5] [i_5] = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((-1979961277) / (((/* implicit */int) var_12))))) ? (((((/* implicit */_Bool) var_1)) ? (var_9) : (((/* implicit */long long int) var_10)))) : (((arr_36 [i_5] [7] [i_5] [(short)8] [i_6]) / (var_6))))) > (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((var_0) ? (((/* implicit */unsigned long long int) var_1)) : (var_7))))))))));
        }
        /* vectorizable */
        for (unsigned char i_9 = 2; i_9 < 11; i_9 += 4) 
        {
            arr_42 [i_9] = ((/* implicit */unsigned int) var_8);
            /* LoopSeq 1 */
            for (long long int i_10 = 0; i_10 < 12; i_10 += 4) 
            {
                arr_46 [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)7168)) < (((/* implicit */int) (unsigned char)169))));
                arr_47 [i_5] [i_5 + 1] [i_5 - 1] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)13345)) || (((/* implicit */_Bool) var_8)))))));
            }
            /* LoopSeq 2 */
            for (short i_11 = 1; i_11 < 9; i_11 += 2) /* same iter space */
            {
                arr_50 [i_11] [i_11] = ((/* implicit */short) ((unsigned long long int) ((-6376142210957130882LL) * (((/* implicit */long long int) ((/* implicit */int) var_2))))));
                arr_51 [i_11] [i_9] [i_11] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_9))));
            }
            for (short i_12 = 1; i_12 < 9; i_12 += 2) /* same iter space */
            {
                /* LoopNest 2 */
                for (short i_13 = 0; i_13 < 12; i_13 += 2) 
                {
                    for (short i_14 = 0; i_14 < 12; i_14 += 4) 
                    {
                        {
                            arr_59 [i_14] [i_12] [i_12] [i_12] [i_5] = ((/* implicit */unsigned char) ((-1273685859) % (((/* implicit */int) var_11))));
                            arr_60 [i_5] [(_Bool)1] [i_12] [i_13] [i_14] |= ((/* implicit */short) ((((((/* implicit */_Bool) var_5)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_5))))) & (((/* implicit */long long int) ((/* implicit */int) var_5)))));
                            arr_61 [i_12] [i_9] [i_9] [i_12 + 1] [i_13] [i_13] [i_14] = arr_1 [i_13];
                        }
                    } 
                } 
                /* LoopSeq 3 */
                for (unsigned int i_15 = 0; i_15 < 12; i_15 += 2) /* same iter space */
                {
                    arr_64 [i_15] [i_15] [i_12] [i_15] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 5983669036040861756ULL)) ? (((/* implicit */int) (short)224)) : (1979961277)));
                    arr_65 [i_15] [i_15] = ((/* implicit */unsigned short) var_5);
                }
                for (unsigned int i_16 = 0; i_16 < 12; i_16 += 2) /* same iter space */
                {
                    arr_69 [8U] [i_9] [i_12] [i_12] [i_16] = ((/* implicit */signed char) var_8);
                    arr_70 [i_12] = (unsigned short)62431;
                }
                for (unsigned int i_17 = 0; i_17 < 12; i_17 += 2) /* same iter space */
                {
                    arr_73 [i_12] [i_9] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)30876))))) ? (arr_22 [i_12 + 3] [i_5 + 1]) : (((/* implicit */long long int) ((/* implicit */int) var_12)))));
                    arr_74 [i_5 + 1] [i_5 + 1] [i_5] [i_12] [i_5] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_44 [i_5 + 1])) ? (var_10) : (((/* implicit */unsigned int) 0))));
                    arr_75 [i_5] [i_12] = ((((/* implicit */_Bool) arr_48 [i_5 - 1] [i_5] [i_12] [i_9 - 1])) ? (((((/* implicit */int) arr_6 [i_5])) & (((/* implicit */int) var_2)))) : (((((/* implicit */int) var_5)) % (var_1))));
                }
                arr_76 [i_5] [i_9] [i_9] [i_12] = ((/* implicit */signed char) ((((((/* implicit */int) var_8)) & (((/* implicit */int) var_8)))) / (var_1)));
                arr_77 [i_5] [i_5] [i_5 + 1] [i_12] = ((/* implicit */unsigned char) (_Bool)1);
            }
            arr_78 [i_9] = ((/* implicit */unsigned int) ((var_6) / (((/* implicit */long long int) ((/* implicit */int) arr_55 [i_9] [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_9 - 1])))));
            arr_79 [i_5 - 1] [i_5] = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)65527)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (-2853762541603608828LL)));
        }
    }
    /* vectorizable */
    for (int i_18 = 1; i_18 < 11; i_18 += 1) /* same iter space */
    {
        arr_82 [i_18] [i_18 + 1] = ((/* implicit */unsigned long long int) ((var_10) - (arr_80 [i_18] [i_18 + 1])));
        /* LoopNest 2 */
        for (signed char i_19 = 1; i_19 < 8; i_19 += 2) 
        {
            for (int i_20 = 0; i_20 < 12; i_20 += 4) 
            {
                {
                    arr_90 [i_18] [i_18] [i_18] [i_18] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) var_3))))) - (((/* implicit */int) (_Bool)1))));
                    arr_91 [(_Bool)1] [(_Bool)1] [i_19 + 3] [i_20] = ((/* implicit */short) var_1);
                }
            } 
        } 
        arr_92 [i_18] = ((/* implicit */signed char) var_7);
        arr_93 [i_18] [i_18] &= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) var_10)) + (4194303ULL)));
    }
}
