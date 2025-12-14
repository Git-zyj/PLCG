/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103191
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103191 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103191
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
    for (long long int i_0 = 1; i_0 < 19; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)9)) / (((/* implicit */int) (unsigned char)29))))) ? (((/* implicit */int) ((short) arr_1 [i_0 + 1] [i_0 + 1]))) : (((/* implicit */int) arr_1 [i_0 + 1] [i_0 + 2]))));
        arr_4 [i_0] = ((/* implicit */unsigned short) ((max((3891189152U), (((/* implicit */unsigned int) (unsigned char)1)))) ^ (((/* implicit */unsigned int) (((!(((/* implicit */_Bool) var_5)))) ? (((/* implicit */int) (short)32767)) : ((+(((/* implicit */int) (_Bool)1)))))))));
    }
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        arr_8 [(unsigned short)0] [(_Bool)1] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (signed char)22)) && (((/* implicit */_Bool) (short)15872)))) ? (((((/* implicit */_Bool) (unsigned short)28672)) ? (arr_2 [(signed char)12]) : (arr_2 [12LL]))) : (arr_2 [(unsigned short)14])));
        arr_9 [i_1] [i_1] = (unsigned char)138;
    }
    /* vectorizable */
    for (unsigned long long int i_2 = 3; i_2 < 15; i_2 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_3 = 3; i_3 < 16; i_3 += 2) 
        {
            arr_17 [3] [(unsigned char)7] = ((/* implicit */short) (+(((/* implicit */int) var_8))));
            /* LoopSeq 2 */
            for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 3) 
            {
                /* LoopSeq 4 */
                for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                {
                    /* LoopSeq 1 */
                    for (short i_6 = 0; i_6 < 18; i_6 += 1) 
                    {
                        arr_24 [(_Bool)1] [i_5 + 1] [i_4] [i_4] [12ULL] [12ULL] = ((/* implicit */unsigned char) ((int) arr_10 [i_5 + 1]));
                        arr_25 [i_6] [i_4] [15] [i_3 - 1] [i_3] [i_4] [15] = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (_Bool)1))));
                    }
                    arr_26 [i_2] [i_4] [i_4] [0ULL] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (short)-15872))) <= (var_11)));
                    arr_27 [14LL] [(_Bool)1] [(unsigned short)0] [i_3] [(_Bool)1] [i_2 - 3] = ((/* implicit */unsigned short) (short)-30328);
                }
                for (short i_7 = 0; i_7 < 18; i_7 += 2) 
                {
                    arr_31 [i_2 - 1] [i_7] = ((/* implicit */short) ((unsigned char) arr_19 [i_2 - 3] [(unsigned short)6] [i_4] [i_7]));
                    arr_32 [i_2] [i_7] [i_4] [(_Bool)1] = ((/* implicit */int) (~(arr_28 [i_4] [i_3 - 1] [i_2 - 2] [i_2])));
                    arr_33 [i_7] = ((/* implicit */long long int) arr_29 [i_2 + 2]);
                    arr_34 [i_7] [i_7] = ((/* implicit */unsigned short) arr_20 [i_2] [i_2 - 1] [i_3] [i_4] [i_2 - 1]);
                }
                for (int i_8 = 0; i_8 < 18; i_8 += 2) 
                {
                    arr_39 [i_8] = ((((/* implicit */_Bool) 7142614504302585660ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_2 - 1]))) : (var_1));
                    arr_40 [i_4] [i_4] [i_4] [i_4] [i_8] [i_4] = (short)30327;
                }
                for (unsigned long long int i_9 = 0; i_9 < 18; i_9 += 1) 
                {
                    arr_45 [(_Bool)0] [0ULL] [(short)12] [(short)12] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_13 [i_3 - 3] [i_2 + 1])) ? ((-(((/* implicit */int) arr_37 [i_9] [i_2] [i_3] [i_2])))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_2] [i_2])) || (var_3))))));
                    arr_46 [i_2] [(short)12] [4LL] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (short)30328))))) ? (((var_7) ? (((/* implicit */int) (unsigned char)133)) : (((/* implicit */int) var_3)))) : (((/* implicit */int) ((((/* implicit */int) arr_41 [i_9] [i_4] [11ULL] [i_2] [i_2 + 1] [i_2])) >= (((/* implicit */int) var_13)))))));
                }
                arr_47 [i_2] [i_4] [i_4] [i_4] = ((/* implicit */unsigned short) (short)-15891);
                arr_48 [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_42 [i_3] [i_3] [i_3] [i_3] [(_Bool)1] [i_3 - 1])) ? (((/* implicit */int) arr_42 [i_3 + 2] [i_3 + 2] [i_3] [i_3] [i_3] [i_3 - 2])) : (((/* implicit */int) arr_20 [i_4] [i_3 - 1] [i_2 + 1] [i_3 - 1] [i_4]))));
            }
            for (unsigned long long int i_10 = 4; i_10 < 15; i_10 += 1) 
            {
                arr_52 [9U] [9U] [i_10] [i_3] = ((/* implicit */unsigned short) (+(arr_12 [11U] [i_2 - 1])));
                arr_53 [i_2] [i_10] [i_10] [i_10 + 1] = ((/* implicit */int) (+(arr_44 [i_10])));
                arr_54 [i_2] [(short)5] [i_10] [i_10] = (-(((/* implicit */int) arr_29 [i_2 + 1])));
                arr_55 [i_10] [i_3] [(unsigned char)12] = ((/* implicit */unsigned char) arr_50 [i_2] [i_10] [i_10]);
                /* LoopSeq 2 */
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
                {
                    arr_58 [i_10] [i_3 - 2] [i_2] [i_3 - 2] = ((/* implicit */unsigned char) var_5);
                    arr_59 [i_11] [i_10] [i_10] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_49 [i_2] [i_2 - 1] [i_10] [i_3 - 3])) ? (arr_49 [i_10 - 3] [i_2 + 2] [i_10 + 2] [i_3 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))));
                    arr_60 [i_2] [i_10] [(signed char)13] [i_11] = ((/* implicit */unsigned short) ((unsigned long long int) arr_28 [i_11] [i_3 + 1] [i_2 + 2] [i_2 + 2]));
                    arr_61 [i_2] [(unsigned short)8] [(unsigned short)8] = ((/* implicit */unsigned int) ((unsigned short) (!(((/* implicit */_Bool) arr_20 [i_2 - 3] [i_2 - 3] [i_10] [i_11] [i_11])))));
                }
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) /* same iter space */
                {
                    arr_64 [i_12] [i_12] [i_12] [10U] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)5))));
                    arr_65 [i_2] [i_3 + 1] [i_10] [(unsigned short)16] = ((/* implicit */unsigned short) ((1529531583) != (((/* implicit */int) (short)15881))));
                }
            }
            arr_66 [i_2] [i_3 - 3] = ((((/* implicit */_Bool) arr_56 [i_2] [i_2 + 2] [i_2] [i_3 - 1] [i_3 - 2])) ? (((((/* implicit */_Bool) arr_7 [i_2])) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-121))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))));
        }
        arr_67 [(unsigned char)8] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_37 [(unsigned short)2] [i_2 - 1] [9U] [i_2 - 2])) : (((/* implicit */int) var_6)))) : (((/* implicit */int) ((((/* implicit */long long int) arr_12 [i_2] [i_2])) <= (arr_28 [i_2] [i_2] [i_2] [i_2]))))));
        arr_68 [i_2] = ((/* implicit */unsigned int) ((((-1129852424027101364LL) + (9223372036854775807LL))) >> (((arr_49 [i_2] [i_2 - 2] [i_2 - 1] [i_2]) - (934239466U)))));
    }
    var_14 = ((/* implicit */unsigned char) var_13);
    var_15 = ((/* implicit */short) ((((/* implicit */unsigned long long int) var_4)) > (((min((((/* implicit */unsigned long long int) var_4)), (5067094543661231110ULL))) + (((/* implicit */unsigned long long int) max((2284855031U), (((/* implicit */unsigned int) var_8)))))))));
    var_16 = ((/* implicit */long long int) var_10);
}
