/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102126
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102126 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102126
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 8; i_1 += 4) 
        {
            {
                /* LoopSeq 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    arr_8 [i_0] [i_1] [i_2] |= ((((/* implicit */_Bool) ((long long int) max((((/* implicit */long long int) (_Bool)0)), (arr_3 [i_0]))))) ? (((unsigned long long int) (unsigned short)4673)) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(arr_1 [i_1 + 2] [i_1 + 2]))))));
                    arr_9 [i_0] [i_1 + 2] [i_2] = ((/* implicit */short) min((((arr_1 [i_0] [i_2]) ? (arr_3 [i_1 - 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1 + 2]))))), (((arr_0 [i_0]) ? (549755812864LL) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1 + 2])))))));
                }
                /* vectorizable */
                for (unsigned short i_3 = 3; i_3 < 9; i_3 += 4) 
                {
                    arr_13 [(unsigned char)1] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [(_Bool)0])) ? (((/* implicit */int) arr_11 [(unsigned char)5] [i_1] [i_0] [i_0])) : (((/* implicit */int) (unsigned short)60863))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))))) : (((var_5) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_1 + 1] [i_1] [i_1 + 2])))))));
                    /* LoopNest 2 */
                    for (unsigned short i_4 = 0; i_4 < 10; i_4 += 4) 
                    {
                        for (long long int i_5 = 0; i_5 < 10; i_5 += 2) 
                        {
                            {
                                arr_19 [i_0] [i_0] [i_0] [(short)9] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) var_1)) < (((/* implicit */int) (unsigned char)0))));
                                arr_20 [i_0] [i_1] [i_0] [i_5] = 1152912708513824768LL;
                            }
                        } 
                    } 
                }
                for (signed char i_6 = 2; i_6 < 7; i_6 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_7 = 3; i_7 < 9; i_7 += 4) 
                    {
                        for (unsigned long long int i_8 = 0; i_8 < 10; i_8 += 4) 
                        {
                            {
                                arr_30 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((short) ((_Bool) ((unsigned short) arr_23 [i_1 + 2] [i_6 - 1] [i_7]))));
                                arr_31 [i_0] [i_6] [i_7] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_26 [i_0] [i_0] [i_1] [i_6 + 2] [i_7] [(unsigned short)0])) - (((/* implicit */int) var_2))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
                    {
                        for (unsigned short i_10 = 0; i_10 < 10; i_10 += 1) 
                        {
                            {
                                arr_37 [i_6] = ((/* implicit */_Bool) max((-9190088078318195768LL), (((/* implicit */long long int) ((((/* implicit */int) arr_25 [i_9 + 1] [i_9 + 1] [i_9] [i_9])) - (((/* implicit */int) arr_25 [i_9 + 1] [i_9 + 1] [i_9] [i_9])))))));
                                arr_38 [i_0] [i_0] [i_0] [i_0] [(_Bool)1] = (unsigned short)9;
                            }
                        } 
                    } 
                    arr_39 [i_1] [(unsigned short)6] = var_13;
                    arr_40 [i_0] = max((max((arr_23 [i_1 - 1] [i_1 + 1] [i_6 - 1]), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)65527))))))), (((/* implicit */unsigned short) min((arr_14 [(unsigned char)4] [i_1 + 2] [(unsigned char)0] [i_6]), (arr_14 [i_0] [i_0] [i_0] [1U])))));
                    arr_41 [i_0] [i_0] [i_0] [i_0] |= ((/* implicit */long long int) min((arr_32 [i_1 + 1] [i_1 + 2] [i_1 + 2] [(_Bool)1]), (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((unsigned short) arr_35 [i_0] [i_1 - 1]))))))));
                }
                /* LoopSeq 3 */
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    arr_45 [i_0] [i_11] [i_11] = ((/* implicit */_Bool) ((unsigned char) max(((unsigned char)0), (((/* implicit */unsigned char) (_Bool)1)))));
                    arr_46 [i_1 - 1] [i_11] [i_11] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)0)) + (((/* implicit */int) var_7))))) ? (((((/* implicit */_Bool) arr_17 [i_11])) ? (2047LL) : (var_9))) : (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_0] [i_0] [(_Bool)0] [i_1])))))) ? (((/* implicit */unsigned long long int) ((-2047LL) * (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0)))))) : (var_4)));
                    /* LoopNest 2 */
                    for (long long int i_12 = 0; i_12 < 10; i_12 += 2) 
                    {
                        for (unsigned short i_13 = 0; i_13 < 10; i_13 += 4) 
                        {
                            {
                                arr_53 [i_13] [i_12] [i_11] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((var_0), (((/* implicit */long long int) arr_4 [i_1 - 1]))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) ((((long long int) arr_25 [i_0] [i_1] [i_11] [i_13])) < (((/* implicit */long long int) ((/* implicit */int) var_13))))))));
                                arr_54 [i_11] [i_11] [i_11] [i_11] [i_11] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_48 [i_11] [i_11])) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) arr_48 [i_1] [(unsigned short)9]))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1 - 1]))) > (((arr_6 [(short)1] [i_1 + 1] [i_11] [i_12]) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_36 [i_0] [i_1] [i_11] [(_Bool)0] [i_13])))))))) : (((/* implicit */int) min(((unsigned char)86), (((/* implicit */unsigned char) var_8)))))));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) 
                    {
                        arr_60 [i_14] [i_14] [i_14] [i_14] [i_14] [i_14] = ((/* implicit */unsigned short) var_8);
                        arr_61 [3LL] [i_14] [(_Bool)1] = ((/* implicit */unsigned short) var_8);
                    }
                    for (unsigned char i_16 = 1; i_16 < 9; i_16 += 3) 
                    {
                        arr_65 [i_0] [i_0] [i_14] [i_0] [i_0] = ((/* implicit */short) ((var_4) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)7478)))));
                        arr_66 [i_14] [i_14] [3ULL] [i_14] = ((/* implicit */unsigned int) var_5);
                        arr_67 [i_1] [i_1] [i_0] [i_1 + 1] = ((/* implicit */signed char) (unsigned short)4673);
                    }
                    arr_68 [i_0] [i_14] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) -1388444484761158759LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)60862))) : (1182157816585067941LL)));
                    arr_69 [i_14] [(_Bool)1] [i_14] = ((/* implicit */unsigned short) (unsigned char)255);
                    arr_70 [i_14] [i_1 - 1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_14 [i_0] [i_0] [(_Bool)1] [i_0])) * (((/* implicit */int) arr_14 [i_14] [(_Bool)0] [i_0] [i_0]))));
                }
                for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) /* same iter space */
                {
                    arr_73 [i_0] [i_1] [(unsigned short)6] [i_17] = ((/* implicit */long long int) min((((/* implicit */unsigned short) ((_Bool) var_0))), ((unsigned short)60862)));
                    /* LoopSeq 1 */
                    for (short i_18 = 2; i_18 < 7; i_18 += 2) 
                    {
                        arr_76 [i_17] = ((max((((/* implicit */long long int) arr_22 [i_18 - 2])), (2047LL))) - (7046115635352382210LL));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned long long int i_19 = 0; i_19 < 10; i_19 += 3) 
                        {
                            arr_79 [i_19] [i_19] [i_19] [i_19] [i_17] [i_19] [i_19] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((_Bool) var_13)))));
                            arr_80 [i_0] [i_18 + 1] [i_17] [i_1] [i_0] [i_0] = ((/* implicit */_Bool) ((arr_5 [i_18 + 3]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)4673)))));
                        }
                        for (_Bool i_20 = 1; i_20 < 1; i_20 += 1) 
                        {
                            arr_83 [i_0] [i_1 + 1] [i_17] [i_17] [i_18] [i_20 - 1] = ((/* implicit */_Bool) (~(((long long int) ((((/* implicit */_Bool) (unsigned short)512)) ? (((/* implicit */int) arr_47 [i_17] [i_17] [i_18 + 1])) : (((/* implicit */int) (unsigned char)255)))))));
                            arr_84 [i_0] [i_17] = (unsigned short)9;
                        }
                        arr_85 [i_0] [i_1] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) (unsigned char)0)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)25))))))), (max(((unsigned short)65535), ((unsigned short)512)))));
                    }
                    arr_86 [i_0] [i_1 + 2] [i_0] [i_17] |= ((/* implicit */unsigned long long int) ((max((((/* implicit */unsigned long long int) max((arr_81 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), (var_10)))), (((arr_21 [i_17] [i_1] [i_0]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_47 [i_0] [i_1 - 1] [(_Bool)1]))) : (var_4))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_0] [(unsigned short)7] [i_1 + 2] [(unsigned short)7])))));
                }
                arr_87 [i_0] [0ULL] [i_0] = ((/* implicit */_Bool) var_12);
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_21 = 0; i_21 < 10; i_21 += 3) 
    {
        for (long long int i_22 = 0; i_22 < 10; i_22 += 3) 
        {
            {
                arr_94 [i_21] [i_21] [i_22] = ((/* implicit */unsigned char) (unsigned short)65527);
                arr_95 [(signed char)5] [i_22] [i_22] = -2047LL;
                arr_96 [i_21] [i_22] = ((/* implicit */long long int) arr_42 [i_21] [i_21] [(unsigned short)8]);
                arr_97 [i_21] [i_21] [i_21] = ((/* implicit */short) ((unsigned char) arr_49 [i_21] [i_21] [i_21] [i_22] [i_22] [i_22]));
                arr_98 [i_22] = ((/* implicit */long long int) ((_Bool) (+(((/* implicit */int) min(((unsigned short)26423), (((/* implicit */unsigned short) var_10))))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (short i_23 = 0; i_23 < 10; i_23 += 1) 
    {
        arr_101 [i_23] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_62 [i_23] [i_23] [i_23] [2LL] [i_23] [i_23])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (arr_62 [i_23] [i_23] [i_23] [(_Bool)1] [i_23] [i_23]))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((signed char) arr_35 [i_23] [(_Bool)1]))))))));
        arr_102 [i_23] = ((long long int) arr_29 [i_23] [i_23] [i_23]);
    }
    for (signed char i_24 = 0; i_24 < 25; i_24 += 2) 
    {
        arr_105 [i_24] = ((/* implicit */long long int) arr_104 [(unsigned short)4]);
        arr_106 [i_24] = ((/* implicit */unsigned short) ((signed char) arr_103 [i_24]));
    }
}
