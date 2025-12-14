/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171356
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171356 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171356
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
    for (int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) ((arr_1 [i_0]) << (((((1129659740U) >> (((/* implicit */int) (_Bool)1)))) - (564829870U)))));
        arr_4 [i_0] = ((/* implicit */short) 1129659740U);
        arr_5 [i_0] = ((/* implicit */_Bool) 12651906455336783062ULL);
        arr_6 [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_2 [i_0])) - (var_0)))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (_Bool)1))))) + (((((/* implicit */_Bool) ((((/* implicit */int) var_10)) - (134217727)))) ? (((/* implicit */unsigned long long int) ((arr_0 [i_0] [i_0]) + (arr_0 [i_0] [i_0])))) : (max((var_0), (((/* implicit */unsigned long long int) arr_2 [i_0]))))))));
    }
    for (long long int i_1 = 1; i_1 < 10; i_1 += 1) /* same iter space */
    {
        arr_10 [i_1] [i_1] = ((/* implicit */signed char) var_3);
        /* LoopSeq 1 */
        for (long long int i_2 = 4; i_2 < 11; i_2 += 4) 
        {
            /* LoopSeq 3 */
            for (int i_3 = 0; i_3 < 12; i_3 += 4) /* same iter space */
            {
                arr_17 [i_1] [i_2] [i_3] = ((/* implicit */unsigned int) (+(((((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (arr_14 [i_3] [i_3] [i_3] [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)21813)))))) % (min((arr_2 [i_1]), (((/* implicit */long long int) var_8))))))));
                arr_18 [i_3] [i_2] [i_1] = ((/* implicit */unsigned int) 12651906455336783069ULL);
            }
            for (int i_4 = 0; i_4 < 12; i_4 += 4) /* same iter space */
            {
                arr_23 [i_1] [i_2] [i_4] [i_4] = ((/* implicit */unsigned long long int) arr_21 [i_4]);
                arr_24 [i_2] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) arr_20 [i_1])) > (min((((/* implicit */unsigned long long int) var_9)), (((unsigned long long int) var_1))))));
                /* LoopSeq 3 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    arr_27 [i_1] [i_2] [i_4] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_8))))) && (((/* implicit */_Bool) var_9)))))) > (((unsigned int) ((2313850454U) ^ (arr_14 [i_1] [i_2] [i_4] [i_5]))))));
                    arr_28 [i_5] [i_4] [i_2] [i_1] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) var_4)) ? (arr_12 [i_1 - 1] [i_1 + 2] [i_1 - 1]) : (var_2))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_16)) | (((/* implicit */int) var_5)))))));
                    arr_29 [i_5] [i_4] [i_2] [i_1] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) 3165307560U)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) : (((((/* implicit */_Bool) arr_9 [i_1 - 1] [i_4])) ? (((/* implicit */int) arr_25 [i_1 + 1] [i_2] [i_4] [i_5])) : (((/* implicit */int) arr_25 [i_1] [i_2 - 3] [i_4] [i_5]))))));
                }
                /* vectorizable */
                for (unsigned int i_6 = 1; i_6 < 10; i_6 += 2) 
                {
                    arr_34 [i_2] [i_2] = ((/* implicit */unsigned char) arr_0 [i_1] [i_6]);
                    arr_35 [i_6] [i_2] = ((/* implicit */unsigned short) ((unsigned int) var_0));
                    arr_36 [i_4] [i_6] = ((/* implicit */unsigned short) arr_14 [i_1] [i_2] [i_1] [i_6]);
                    /* LoopSeq 1 */
                    for (unsigned int i_7 = 0; i_7 < 12; i_7 += 3) 
                    {
                        arr_40 [i_1] [i_2] [i_4] [i_6] [i_7] = ((/* implicit */unsigned short) var_1);
                        arr_41 [i_1] [i_2] [i_4] [i_6] [i_7] = ((/* implicit */unsigned short) (unsigned char)236);
                        arr_42 [i_1] [i_2] [i_4] [i_6] [i_7] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) 5794837618372768571ULL)) ? (((/* implicit */int) arr_11 [i_6] [i_6] [i_6])) : (((/* implicit */int) var_11))))));
                    }
                }
                /* vectorizable */
                for (unsigned int i_8 = 0; i_8 < 12; i_8 += 1) 
                {
                    arr_45 [i_1] [i_2] [i_4] [i_8] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_13) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_1] [i_1] [i_2] [i_4] [i_8])))))) ? (((/* implicit */int) arr_39 [i_2] [i_2] [i_2 + 1] [i_1 + 2] [i_8])) : (((/* implicit */int) arr_15 [i_1 - 1] [i_1 + 1] [i_1 - 1]))));
                    arr_46 [i_2] = (!(((/* implicit */_Bool) var_12)));
                    arr_47 [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_37 [i_1] [i_2] [i_2] [i_2] [i_2 - 2] [i_4] [i_4])) ? (arr_37 [i_1] [i_1] [i_2] [i_2] [i_2 - 2] [i_4] [i_4]) : (((/* implicit */long long int) ((/* implicit */int) var_9)))));
                    arr_48 [i_1] [i_2] [i_4] [i_8] = ((unsigned char) var_4);
                }
                arr_49 [i_1] [i_2] [i_4] [i_1] = ((/* implicit */unsigned short) var_18);
            }
            for (int i_9 = 0; i_9 < 12; i_9 += 4) /* same iter space */
            {
                arr_53 [i_1] [i_2] [i_9] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((8790057884940046236ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))))))));
                /* LoopNest 2 */
                for (long long int i_10 = 1; i_10 < 10; i_10 += 3) 
                {
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        {
                            arr_58 [i_1] [i_2] [i_9] [i_10] [i_11] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 6925619987845345107LL)) ? (3334160470U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65529)))));
                            arr_59 [i_1] [i_2] [i_1] [i_10] [i_11] [i_9] [i_2] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_22 [i_1] [i_9] [i_10]), (((/* implicit */unsigned short) arr_54 [i_1] [i_2] [i_9] [i_10] [i_11]))))) ? (((/* implicit */int) min(((short)1662), (((/* implicit */short) var_8))))) : (((/* implicit */int) arr_43 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])))))));
                        }
                    } 
                } 
            }
            arr_60 [i_1] [i_2] [i_1] = ((/* implicit */unsigned char) (~((~(var_0)))));
            arr_61 [i_1] [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_31 [i_1 + 1])), (arr_44 [i_1 - 1] [i_1 + 2])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_31 [i_1 + 2]), (var_17))))) : ((((_Bool)1) ? (arr_44 [i_1 - 1] [i_1 - 1]) : (((/* implicit */unsigned long long int) 60911117U))))));
        }
        arr_62 [i_1] = ((/* implicit */unsigned short) arr_19 [i_1] [i_1] [i_1]);
    }
    for (long long int i_12 = 1; i_12 < 10; i_12 += 1) /* same iter space */
    {
        arr_65 [i_12] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_8 [i_12])) || (((/* implicit */_Bool) 13U)))) ? (arr_33 [i_12] [i_12] [i_12] [i_12]) : (((/* implicit */unsigned long long int) ((unsigned int) (short)-32757)))))) ? (((((/* implicit */int) ((_Bool) arr_31 [i_12]))) | ((~(((/* implicit */int) arr_43 [i_12] [i_12] [i_12] [i_12] [i_12] [i_12])))))) : (((/* implicit */int) arr_19 [i_12] [i_12] [i_12]))));
        arr_66 [i_12] = (unsigned char)113;
    }
    /* LoopSeq 1 */
    for (long long int i_13 = 3; i_13 < 13; i_13 += 3) 
    {
        arr_71 [i_13] = ((/* implicit */signed char) arr_1 [i_13]);
        arr_72 [i_13] [i_13] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) arr_70 [i_13] [i_13])) ? ((~(arr_67 [i_13]))) : (((/* implicit */unsigned long long int) ((arr_2 [i_13]) - (((/* implicit */long long int) ((/* implicit */int) var_15)))))))) : ((-(max((12651906455336783077ULL), (((/* implicit */unsigned long long int) arr_68 [i_13]))))))));
    }
}
