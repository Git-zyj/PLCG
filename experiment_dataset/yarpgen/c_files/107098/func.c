/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107098
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107098 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107098
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
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) arr_1 [i_0]);
        arr_3 [i_0] = ((/* implicit */_Bool) (+((-(arr_1 [i_0])))));
        arr_4 [(unsigned short)10] = ((/* implicit */unsigned char) var_16);
        arr_5 [i_0] = ((/* implicit */_Bool) (-(arr_0 [i_0])));
        arr_6 [i_0] = ((/* implicit */short) var_6);
    }
    for (short i_1 = 0; i_1 < 11; i_1 += 4) 
    {
        arr_9 [i_1] = ((/* implicit */unsigned short) (~(arr_8 [i_1])));
        /* LoopNest 2 */
        for (unsigned int i_2 = 0; i_2 < 11; i_2 += 4) 
        {
            for (unsigned short i_3 = 0; i_3 < 11; i_3 += 4) 
            {
                {
                    arr_17 [i_3] [i_3] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_1]))) : (max((((/* implicit */unsigned long long int) arr_7 [i_3])), (var_10)))));
                    arr_18 [i_2] [i_2] = ((/* implicit */unsigned short) (~(((/* implicit */int) max((((/* implicit */signed char) (!(((/* implicit */_Bool) arr_16 [i_1] [i_2] [i_1] [i_1]))))), (arr_11 [i_1] [i_2] [i_3]))))));
                    /* LoopSeq 3 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
                    {
                        arr_21 [i_1] [i_1] [i_2] [i_3] [i_2] [i_4] = ((/* implicit */short) arr_20 [i_1] [i_2] [i_1] [i_1] [i_2]);
                        arr_22 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */signed char) var_13);
                        arr_23 [i_1] [i_2] [i_2] [i_2] &= ((/* implicit */unsigned int) arr_20 [i_3] [i_3] [i_3] [i_3] [i_3]);
                    }
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                    {
                        arr_27 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_7 [i_1]))))) ? (((/* implicit */int) max((arr_24 [i_1] [i_1] [i_1] [i_1]), (((/* implicit */short) var_6))))) : (arr_10 [i_3] [i_3] [i_1])));
                        arr_28 [i_1] [i_1] [i_1] [i_2] [i_1] [i_1] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_7 [i_3]))))) ? (((/* implicit */int) arr_25 [i_1] [i_1] [i_2] [i_1] [i_1] [i_2])) : (max((arr_10 [i_1] [i_1] [i_1]), (arr_8 [i_1])))));
                    }
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                    {
                        arr_31 [i_6] = ((/* implicit */long long int) (+(arr_8 [i_3])));
                        arr_32 [i_1] [i_3] = ((/* implicit */unsigned long long int) arr_0 [i_2]);
                        arr_33 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = min((((/* implicit */short) (!(((/* implicit */_Bool) (~(arr_1 [i_2]))))))), (min((arr_24 [i_6] [i_3] [i_2] [i_1]), (arr_24 [i_1] [i_2] [i_6] [i_3]))));
                    }
                    arr_34 [i_1] [i_1] |= ((/* implicit */unsigned short) arr_30 [i_1] [i_1] [i_1]);
                }
            } 
        } 
        arr_35 [i_1] [i_1] = ((/* implicit */signed char) arr_1 [i_1]);
    }
    for (unsigned short i_7 = 4; i_7 < 12; i_7 += 4) 
    {
        arr_38 [i_7 - 4] = ((/* implicit */unsigned char) min((((/* implicit */int) min((((/* implicit */unsigned short) arr_37 [i_7 - 4])), (arr_36 [i_7 - 4])))), ((-(((/* implicit */int) arr_36 [i_7 - 4]))))));
        arr_39 [i_7] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_36 [i_7 + 1])) ? (((/* implicit */int) arr_36 [i_7 - 4])) : (((/* implicit */int) arr_36 [i_7 + 3]))))));
    }
    /* LoopNest 3 */
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
    {
        for (unsigned short i_9 = 3; i_9 < 16; i_9 += 4) 
        {
            for (long long int i_10 = 2; i_10 < 15; i_10 += 4) 
            {
                {
                    arr_48 [i_9] [i_9 - 3] [i_9] = max((((/* implicit */signed char) (!(((/* implicit */_Bool) arr_43 [i_9 - 3] [i_9 - 2]))))), (arr_45 [i_8] [i_8] [i_8]));
                    arr_49 [i_9 + 2] [i_9 - 3] [i_9 + 2] [i_10] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_40 [i_9 + 1] [i_10 + 2]))));
                    arr_50 [i_10] [i_10] [i_10] [i_10] &= ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))))) ? ((-((-(((/* implicit */int) arr_40 [i_8] [i_8])))))) : (((/* implicit */int) min((arr_47 [i_10] [i_10 + 3] [i_10 + 1]), (arr_45 [i_10] [i_10 - 1] [i_10 - 2]))))));
                }
            } 
        } 
    } 
    /* LoopSeq 4 */
    for (unsigned short i_11 = 0; i_11 < 21; i_11 += 3) 
    {
        arr_54 [i_11] [i_11] = ((/* implicit */unsigned short) arr_53 [i_11] [i_11]);
        arr_55 [(unsigned short)20] &= ((/* implicit */long long int) arr_52 [i_11]);
    }
    for (unsigned long long int i_12 = 1; i_12 < 24; i_12 += 4) 
    {
        arr_58 [i_12] [i_12] = ((/* implicit */int) max((((/* implicit */long long int) (~(var_16)))), ((+(((((/* implicit */_Bool) arr_57 [i_12] [i_12 - 1])) ? (arr_56 [i_12]) : (((/* implicit */long long int) arr_57 [i_12] [i_12]))))))));
        arr_59 [i_12] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (~(var_1)))), (arr_57 [i_12] [i_12])))) ? (((/* implicit */long long int) arr_57 [i_12] [i_12])) : ((~(arr_56 [i_12])))));
        arr_60 [i_12] [i_12] = max((((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (arr_57 [i_12] [i_12]) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))))), (max((min((arr_56 [i_12]), (((/* implicit */long long int) var_16)))), (((/* implicit */long long int) (+(((/* implicit */int) var_7))))))));
    }
    /* vectorizable */
    for (short i_13 = 1; i_13 < 19; i_13 += 3) 
    {
        arr_64 [i_13] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_57 [i_13] [i_13])) ? (((/* implicit */int) arr_61 [i_13 + 1])) : (((/* implicit */int) arr_61 [i_13 + 1]))));
        arr_65 [(unsigned short)10] [(unsigned short)10] &= (+(((/* implicit */int) var_12)));
    }
    for (long long int i_14 = 1; i_14 < 18; i_14 += 2) 
    {
        arr_70 [(short)4] &= ((/* implicit */int) arr_63 [i_14 + 2] [i_14 + 2]);
        arr_71 [i_14] = ((/* implicit */unsigned long long int) max((max((arr_53 [i_14 + 1] [i_14]), (arr_53 [i_14] [i_14 + 1]))), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_53 [i_14 + 1] [i_14 - 1])))))));
        arr_72 [10] [10] &= ((/* implicit */signed char) (+((+(((/* implicit */int) var_11))))));
    }
    var_18 = ((/* implicit */unsigned char) max((((/* implicit */int) var_6)), ((-(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_11))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_15 = 2; i_15 < 20; i_15 += 4) 
    {
        arr_76 [i_15 - 1] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_74 [i_15])) : (((/* implicit */int) arr_73 [i_15]))))));
        arr_77 [i_15] = ((/* implicit */unsigned int) (+(arr_56 [i_15])));
    }
}
