/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178762
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178762 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178762
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
    var_13 = ((/* implicit */int) var_5);
    var_14 = ((/* implicit */signed char) var_12);
    /* LoopSeq 2 */
    for (unsigned char i_0 = 2; i_0 < 9; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (signed char i_2 = 3; i_2 < 8; i_2 += 3) 
            {
                {
                    arr_8 [i_0 - 2] [i_1] = ((/* implicit */unsigned long long int) min((((/* implicit */int) (unsigned char)9)), (min((arr_0 [i_0] [(signed char)0]), (((((/* implicit */int) arr_5 [i_2 + 3])) - (arr_0 [i_0] [i_1])))))));
                    arr_9 [i_2] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */int) min(((unsigned char)17), (((/* implicit */unsigned char) (_Bool)1))))) >= (((((/* implicit */_Bool) arr_6 [i_0 - 1] [i_0 + 2] [i_0 - 1] [i_2 + 3])) ? (arr_1 [i_0 - 1]) : (arr_1 [i_0 - 1])))));
                }
            } 
        } 
        arr_10 [i_0] = ((/* implicit */unsigned int) (((+(1671559638))) >= (((/* implicit */int) (unsigned char)222))));
        arr_11 [8LL] = ((/* implicit */_Bool) ((((/* implicit */int) (((-(((/* implicit */int) arr_2 [i_0])))) > (((/* implicit */int) ((signed char) (_Bool)0)))))) + ((~((+(((/* implicit */int) var_5))))))));
        arr_12 [i_0 + 2] = ((/* implicit */long long int) max(((signed char)-71), ((signed char)123)));
        arr_13 [i_0] [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (signed char)16))))))))));
    }
    for (signed char i_3 = 0; i_3 < 13; i_3 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_4 = 1; i_4 < 12; i_4 += 4) 
        {
            /* LoopSeq 3 */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                arr_22 [i_5] = ((/* implicit */unsigned int) (+(((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)123))) - (var_12)))) % (arr_19 [i_4 + 1] [i_4])))));
                /* LoopNest 2 */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    for (unsigned long long int i_7 = 1; i_7 < 12; i_7 += 4) 
                    {
                        {
                            arr_27 [i_7] [i_7] [i_5] [i_7] [i_7 - 1] [i_7 + 1] [i_7] = ((/* implicit */_Bool) max((((long long int) (!(((/* implicit */_Bool) var_3))))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)223)) ? (((/* implicit */int) max((var_8), (((/* implicit */short) var_2))))) : (arr_14 [i_4 + 1]))))));
                            arr_28 [i_3] [6] [6] [i_6] [6] = ((/* implicit */unsigned char) max(((-((+(((/* implicit */int) (_Bool)0)))))), ((~(((/* implicit */int) arr_15 [i_7 - 1]))))));
                        }
                    } 
                } 
            }
            for (int i_8 = 0; i_8 < 13; i_8 += 3) 
            {
                arr_31 [i_3] [i_3] = ((/* implicit */short) max((((/* implicit */int) var_2)), ((-(((/* implicit */int) (short)-26049))))));
                arr_32 [i_3] [i_8] [i_8] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) max((var_11), (((/* implicit */unsigned short) (_Bool)1))))))))) / (((((/* implicit */long long int) (-(arr_14 [i_3])))) & (((((/* implicit */long long int) arr_16 [i_3] [i_4])) & (var_0)))))));
                arr_33 [(_Bool)1] [i_4] [i_3] [(signed char)10] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned short) arr_23 [i_3] [i_4] [i_4 - 1])))));
                arr_34 [i_3] [0U] [i_4] [i_8] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) 15420561260522234461ULL)) ? (((/* implicit */long long int) var_3)) : (var_0)))))) && (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)52430))))) ^ (min((70093866270720ULL), (((/* implicit */unsigned long long int) var_10)))))))));
                arr_35 [i_8] [i_4] [i_4] [i_3] = ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */int) var_11)) >= (((/* implicit */int) (unsigned char)244))))), ((((((_Bool)0) || (((/* implicit */_Bool) 1767039469U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((var_6), ((signed char)74))))) : (((var_12) & (arr_29 [i_3] [i_3] [(_Bool)1] [i_4 - 1])))))));
            }
            for (unsigned short i_9 = 0; i_9 < 13; i_9 += 2) 
            {
                arr_40 [8] [8] [i_9] [i_9] = ((/* implicit */long long int) var_12);
                arr_41 [i_3] [i_4] [i_9] [i_9] = ((/* implicit */_Bool) ((unsigned int) (!(((/* implicit */_Bool) arr_26 [i_4 + 1] [i_4] [i_9] [i_9] [i_4])))));
            }
            arr_42 [i_3] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_21 [(_Bool)1])) + (((/* implicit */int) max((arr_26 [i_3] [i_4 - 1] [i_4] [i_3] [i_3]), (((/* implicit */unsigned short) (unsigned char)223)))))));
        }
        /* LoopSeq 3 */
        for (unsigned char i_10 = 0; i_10 < 13; i_10 += 4) 
        {
            arr_46 [i_3] [i_10] [i_10] = ((/* implicit */_Bool) max((((((/* implicit */int) (signed char)80)) | (((/* implicit */int) (signed char)14)))), (((/* implicit */int) arr_17 [i_3] [i_3] [i_10]))));
            arr_47 [i_10] [i_10] [10LL] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) max((arr_36 [i_10] [i_3] [5U]), (arr_36 [i_10] [i_3] [i_3]))))));
            arr_48 [i_3] [(signed char)11] [i_10] = ((/* implicit */_Bool) min(((-(((((/* implicit */long long int) ((/* implicit */int) var_7))) & (arr_45 [(_Bool)1]))))), (((/* implicit */long long int) (-((~(((/* implicit */int) var_11)))))))));
            arr_49 [i_3] [i_3] [i_10] = ((/* implicit */unsigned char) ((_Bool) (_Bool)1));
        }
        for (short i_11 = 0; i_11 < 13; i_11 += 3) 
        {
            arr_54 [i_11] [i_3] |= ((/* implicit */int) (~(((((/* implicit */_Bool) arr_25 [i_3] [(_Bool)1] [i_11] [i_3] [(_Bool)1])) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_7)) & (((/* implicit */int) var_11))))) : (((2099199372U) / (((/* implicit */unsigned int) var_10))))))));
            arr_55 [i_3] [i_3] = ((/* implicit */signed char) -429012349);
        }
        for (unsigned char i_12 = 0; i_12 < 13; i_12 += 3) 
        {
            /* LoopNest 2 */
            for (short i_13 = 0; i_13 < 13; i_13 += 1) 
            {
                for (long long int i_14 = 1; i_14 < 12; i_14 += 4) 
                {
                    {
                        arr_66 [i_3] [i_3] [0] [i_14] = ((/* implicit */short) ((var_0) + (((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_57 [i_12] [i_12] [i_12])) < (((/* implicit */int) (signed char)19)))))) + (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (-724546057533906319LL) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))))));
                        /* LoopSeq 2 */
                        for (short i_15 = 2; i_15 < 12; i_15 += 3) 
                        {
                            arr_69 [i_13] = ((/* implicit */short) ((signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) < (((var_1) & (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-17))))))));
                            arr_70 [i_3] [i_12] [i_13] [i_14] [i_15] [i_13] = ((/* implicit */_Bool) var_12);
                            arr_71 [i_3] [i_12] [(_Bool)1] [i_14] [(short)6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */int) (signed char)80)) - (((/* implicit */int) (short)19951)))) : (((/* implicit */int) max((arr_60 [(signed char)6] [i_15 - 1] [i_14 - 1] [(signed char)6]), (arr_60 [(signed char)4] [i_15 - 2] [i_14 - 1] [(signed char)4]))))));
                            arr_72 [i_13] [i_13] [i_12] [i_13] [i_15 - 2] [i_13] [(short)5] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) (signed char)83)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_1))), (((/* implicit */unsigned long long int) ((unsigned char) (_Bool)1)))));
                        }
                        for (signed char i_16 = 0; i_16 < 13; i_16 += 2) 
                        {
                            arr_75 [i_3] [i_13] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((((/* implicit */int) var_6)) - (((/* implicit */int) var_9)))), (((/* implicit */int) arr_58 [i_3] [i_13]))))) ? (((((((/* implicit */unsigned int) ((/* implicit */int) var_9))) < (3494975028U))) ? (((/* implicit */int) var_4)) : ((-(arr_14 [i_12]))))) : (((((/* implicit */int) arr_25 [12] [i_12] [i_13] [i_14 - 1] [i_16])) % ((-(((/* implicit */int) var_2))))))));
                            arr_76 [i_3] [i_12] [i_12] [i_13] [i_14] [i_16] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) arr_50 [i_14] [i_12] [i_13]))))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_0)))));
                            arr_77 [i_13] = ((/* implicit */long long int) min((var_12), (((/* implicit */unsigned int) ((((/* implicit */int) var_2)) - (((((/* implicit */int) var_11)) | (((/* implicit */int) var_7)))))))));
                        }
                        arr_78 [(signed char)0] [i_13] [i_13] = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)142)) ? (((/* implicit */int) arr_56 [i_3] [i_12])) : (((/* implicit */int) var_8)))))))) + ((-(((/* implicit */int) (signed char)70))))));
                    }
                } 
            } 
            arr_79 [i_3] = ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */_Bool) max((arr_14 [i_3]), (((/* implicit */int) var_5))))) || (((/* implicit */_Bool) ((int) arr_64 [i_12] [(_Bool)1] [(short)10] [3]))))))));
            arr_80 [i_3] [i_12] [i_12] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)246))))) ? (min((arr_53 [i_3]), (((/* implicit */long long int) arr_43 [i_3] [i_3] [i_12])))) : (((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) ^ (((/* implicit */int) (signed char)-37)))))));
            arr_81 [i_12] = ((/* implicit */long long int) (-((-(((/* implicit */int) max(((signed char)(-127 - 1)), (((/* implicit */signed char) (_Bool)0)))))))));
        }
    }
}
