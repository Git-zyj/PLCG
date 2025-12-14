/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155095
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155095 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155095
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
    /* LoopSeq 1 */
    for (short i_0 = 3; i_0 < 19; i_0 += 4) 
    {
        arr_3 [4LL] = ((/* implicit */_Bool) max((((/* implicit */unsigned int) max((((/* implicit */unsigned short) (_Bool)1)), (arr_2 [i_0 - 2])))), (((arr_1 [i_0 + 2] [10]) - (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 - 2])))))));
        arr_4 [i_0] = ((/* implicit */signed char) (+((+(((/* implicit */int) arr_2 [i_0 - 1]))))));
        arr_5 [(_Bool)1] = ((/* implicit */unsigned short) max(((+(((/* implicit */int) max(((signed char)-121), (((/* implicit */signed char) (_Bool)1))))))), (((((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) != (((/* implicit */int) (_Bool)1))))) ^ ((-(var_5)))))));
        arr_6 [i_0] = ((/* implicit */unsigned char) arr_1 [12LL] [i_0]);
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 22; i_1 += 4) 
    {
        /* LoopSeq 1 */
        for (int i_2 = 0; i_2 < 22; i_2 += 4) 
        {
            /* LoopSeq 2 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                arr_16 [i_2] = ((/* implicit */int) arr_7 [i_3] [i_1]);
                arr_17 [i_3] [i_2] [i_2] [i_1] = ((var_16) << (((arr_11 [i_1] [i_2] [i_3]) - (5172493860616626028LL))));
                arr_18 [i_3] [i_1] [i_3] [i_2] = ((((/* implicit */_Bool) arr_13 [i_1] [i_1] [i_1])) ? (arr_12 [i_1] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_1] [i_1] [i_3]))));
                arr_19 [i_3] [i_2] = (+(arr_12 [i_3] [i_2]));
            }
            for (long long int i_4 = 0; i_4 < 22; i_4 += 3) 
            {
                arr_23 [i_1] = ((/* implicit */signed char) (_Bool)1);
                arr_24 [i_4] [i_2] [i_2] [i_1] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_13 [i_2] [i_2] [i_2]))));
            }
            /* LoopSeq 1 */
            for (unsigned long long int i_5 = 0; i_5 < 22; i_5 += 3) 
            {
                arr_28 [i_5] [i_2] [i_1] = ((/* implicit */short) (-(var_2)));
                /* LoopSeq 3 */
                for (unsigned short i_6 = 0; i_6 < 22; i_6 += 4) 
                {
                    arr_31 [i_5] [(_Bool)1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) ^ (arr_7 [i_1] [i_5])))) ? (((/* implicit */int) arr_29 [i_5] [i_5] [i_5] [i_5])) : (((/* implicit */int) arr_26 [i_1]))));
                    arr_32 [(signed char)11] [i_5] [i_5] [i_2] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) arr_29 [i_6] [i_5] [i_2] [i_1]))));
                    arr_33 [i_1] [i_1] [i_5] [i_5] [i_6] = ((/* implicit */int) arr_21 [i_6]);
                    arr_34 [i_6] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) arr_21 [i_1])) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned short)49152))));
                    arr_35 [i_1] = (((_Bool)1) || (((/* implicit */_Bool) arr_11 [i_5] [i_5] [i_5])));
                }
                for (unsigned char i_7 = 2; i_7 < 21; i_7 += 4) 
                {
                    arr_40 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 2047)) ? (((/* implicit */int) (unsigned short)49152)) : (((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)16384))))));
                    arr_41 [i_5] [11] [i_5] [i_7 - 2] [i_7 + 1] [i_1] = ((/* implicit */unsigned short) ((var_5) >= (((/* implicit */int) arr_14 [i_7 + 1] [i_7] [i_7 - 2] [i_7 - 2]))));
                }
                for (long long int i_8 = 0; i_8 < 22; i_8 += 4) 
                {
                    arr_44 [i_8] [i_5] [i_5] [i_2] [i_1] = ((/* implicit */unsigned long long int) (_Bool)0);
                    /* LoopSeq 3 */
                    for (short i_9 = 0; i_9 < 22; i_9 += 4) 
                    {
                        arr_47 [i_8] [i_2] [i_5] [i_8] [i_9] [i_8] [i_9] = ((/* implicit */unsigned int) arr_37 [i_1] [i_1] [i_5] [i_8] [i_5]);
                        arr_48 [i_9] [i_8] [i_5] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_1])) && (((/* implicit */_Bool) (unsigned short)49152))));
                        arr_49 [i_1] [i_1] [i_2] [i_5] [i_5] [i_8] [i_9] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_39 [i_1] [i_1] [i_5] [i_1] [i_9])) ? (((/* implicit */int) arr_39 [i_1] [i_1] [i_1] [i_1] [i_1])) : (((/* implicit */int) (_Bool)0))));
                    }
                    for (unsigned long long int i_10 = 0; i_10 < 22; i_10 += 4) 
                    {
                        arr_52 [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) arr_29 [i_8] [i_5] [i_2] [i_1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_0))));
                        arr_53 [i_1] [i_2] [i_5] [i_8] [i_10] = ((/* implicit */unsigned long long int) (unsigned short)35778);
                        arr_54 [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_1])) && (((/* implicit */_Bool) arr_8 [i_2]))));
                    }
                    for (signed char i_11 = 2; i_11 < 21; i_11 += 3) 
                    {
                        arr_57 [i_1] [i_1] [i_1] [i_1] [i_1] [i_11] = arr_27 [i_1] [i_5] [i_8] [i_1];
                        arr_58 [i_11] [i_2] = ((((/* implicit */int) (unsigned short)16398)) ^ (((/* implicit */int) arr_26 [i_1])));
                        arr_59 [i_11] [i_8] [i_11] [i_1] [i_1] = arr_10 [i_11] [i_2] [i_1];
                        arr_60 [i_11] [i_11] = ((/* implicit */unsigned long long int) 1073741823U);
                        arr_61 [i_1] [i_1] [i_1] [i_2] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((3221225472U) % (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)16384)))));
                    }
                    arr_62 [i_8] [i_5] [i_1] [i_1] = ((/* implicit */signed char) arr_42 [i_1] [i_2] [i_5] [i_8] [i_2]);
                    arr_63 [i_1] = ((/* implicit */_Bool) (+(((/* implicit */int) var_6))));
                }
            }
            arr_64 [i_1] [i_2] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_43 [i_1] [i_2] [i_1] [i_2]))));
        }
        arr_65 [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)141)) | (((/* implicit */int) (signed char)127))));
    }
    for (unsigned short i_12 = 0; i_12 < 10; i_12 += 1) 
    {
        arr_68 [i_12] [i_12] = ((/* implicit */unsigned long long int) (((((!(((/* implicit */_Bool) (unsigned char)66)))) ? (((((/* implicit */_Bool) (short)32763)) ? (((/* implicit */int) arr_29 [i_12] [i_12] [i_12] [i_12])) : (((/* implicit */int) arr_66 [i_12])))) : (((/* implicit */int) max((arr_21 [i_12]), (arr_39 [i_12] [i_12] [i_12] [i_12] [i_12])))))) << (((var_2) + (4114698677633352730LL)))));
        arr_69 [i_12] [i_12] = ((/* implicit */int) ((((/* implicit */_Bool) arr_45 [i_12] [i_12] [i_12] [6LL] [i_12] [i_12] [i_12])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (288195191779622912ULL)));
        arr_70 [i_12] [i_12] = ((/* implicit */int) ((((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_21 [i_12]))))) >= (max((arr_55 [i_12] [i_12] [i_12] [i_12] [i_12] [(unsigned char)4]), (var_7))))) ? (((/* implicit */long long int) arr_1 [i_12] [(unsigned short)6])) : (-1155498401393773600LL)));
        arr_71 [i_12] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) 4294967295U)) ? (arr_27 [i_12] [i_12] [i_12] [i_12]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)108)))))));
    }
}
