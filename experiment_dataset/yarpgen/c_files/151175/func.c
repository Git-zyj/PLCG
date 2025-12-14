/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151175
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151175 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151175
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
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) (short)-26398)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (((((/* implicit */_Bool) (unsigned char)255)) ? (8894613417795687032LL) : (((/* implicit */long long int) ((/* implicit */int) (short)7108))))))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (short)-27948)) : (((/* implicit */int) (signed char)-1)))))));
        arr_4 [i_0] [i_0] = ((/* implicit */short) arr_0 [i_0]);
        arr_5 [6LL] [i_0] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) (unsigned char)255)) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_6))) : (((/* implicit */long long int) 465406805))))));
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 15; i_1 += 3) 
    {
        arr_8 [(unsigned short)2] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1])) ? (-6088967971130661077LL) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [(unsigned short)1] [i_1])))))) ? (((/* implicit */int) (short)-1612)) : (((((/* implicit */_Bool) -1LL)) ? (((/* implicit */int) (unsigned char)241)) : (((/* implicit */int) (unsigned char)25))))));
        arr_9 [(unsigned short)12] |= ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)199)) ? (((/* implicit */int) (signed char)1)) : (((/* implicit */int) arr_6 [i_1]))));
        arr_10 [(short)6] [(short)6] = ((/* implicit */short) arr_7 [(signed char)5] [i_1]);
        arr_11 [14LL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)21029)) ? (((/* implicit */int) arr_7 [i_1] [10])) : (((((/* implicit */int) (unsigned char)138)) << (((var_3) - (5459702218654543786LL)))))));
        /* LoopSeq 2 */
        for (unsigned char i_2 = 1; i_2 < 13; i_2 += 4) 
        {
            arr_15 [(signed char)4] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-72)) ? (((/* implicit */int) (unsigned short)24848)) : (((/* implicit */int) arr_12 [i_1]))));
            arr_16 [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) -477401151)) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_7 [(unsigned short)4] [i_1])) : (((/* implicit */int) (signed char)-72)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) (short)32767)))))));
            arr_17 [i_1] [i_2] = ((/* implicit */unsigned char) ((unsigned short) arr_7 [i_2 + 2] [i_2]));
            arr_18 [i_1] [i_1] [i_1] = ((signed char) arr_7 [i_2 - 1] [i_2 + 2]);
        }
        for (int i_3 = 3; i_3 < 14; i_3 += 4) 
        {
            arr_21 [i_1] [i_3] = ((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) arr_6 [10LL])) ? (((/* implicit */int) arr_13 [i_1])) : (((/* implicit */int) (signed char)127)))));
            arr_22 [i_1] [i_1] [8] &= ((/* implicit */int) ((unsigned short) arr_12 [i_3 - 3]));
            /* LoopSeq 3 */
            for (signed char i_4 = 0; i_4 < 15; i_4 += 3) /* same iter space */
            {
                arr_26 [i_1] [0LL] [i_3] [0LL] = ((/* implicit */unsigned char) -980947449548335713LL);
                /* LoopNest 2 */
                for (unsigned short i_5 = 3; i_5 < 14; i_5 += 1) 
                {
                    for (short i_6 = 0; i_6 < 15; i_6 += 4) 
                    {
                        {
                            arr_33 [i_1] [i_3] = ((/* implicit */signed char) ((int) ((((/* implicit */_Bool) (short)1)) ? (((/* implicit */long long int) ((/* implicit */int) (short)16384))) : (-9223372036854775806LL))));
                            arr_34 [i_1] [i_3] [i_4] [i_5] = ((/* implicit */int) ((((/* implicit */_Bool) ((short) (unsigned short)8188))) ? (((((/* implicit */long long int) var_14)) | (6088967971130661075LL))) : (((/* implicit */long long int) (~(((/* implicit */int) (signed char)-1)))))));
                            arr_35 [i_6] [i_1] [i_4] [i_1] [i_1] = ((/* implicit */unsigned short) (+(-1919787880)));
                            arr_36 [10] [i_1] [i_5] [i_6] = ((/* implicit */long long int) arr_12 [i_4]);
                        }
                    } 
                } 
            }
            for (signed char i_7 = 0; i_7 < 15; i_7 += 3) /* same iter space */
            {
                arr_39 [i_7] [i_1] [i_1] [i_1] = ((/* implicit */signed char) (unsigned char)255);
                /* LoopNest 2 */
                for (signed char i_8 = 0; i_8 < 15; i_8 += 1) 
                {
                    for (signed char i_9 = 0; i_9 < 15; i_9 += 1) 
                    {
                        {
                            arr_45 [i_1] [i_3] [i_1] [i_8] [i_9] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_42 [i_3 - 1] [i_3 - 1] [i_3 - 1] [(signed char)2] [i_1]))));
                            arr_46 [i_1] [i_1] [i_1] [i_1] [i_9] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_7))));
                            arr_47 [i_1] [i_3] [i_7] [i_1] [i_9] = ((/* implicit */long long int) (~(arr_27 [i_3 + 1] [i_3 - 1] [i_3 - 3])));
                        }
                    } 
                } 
            }
            for (long long int i_10 = 0; i_10 < 15; i_10 += 4) 
            {
                /* LoopNest 2 */
                for (long long int i_11 = 1; i_11 < 14; i_11 += 4) 
                {
                    for (short i_12 = 4; i_12 < 14; i_12 += 2) 
                    {
                        {
                            arr_56 [i_1] [0LL] [i_11] [i_10] [i_1] [i_1] [i_1] = ((/* implicit */long long int) (short)7);
                            arr_57 [i_1] [i_3] [i_10] [i_11] [(signed char)6] [i_12] = ((((/* implicit */int) arr_43 [i_1] [i_3] [i_10] [i_11] [i_12])) ^ (((/* implicit */int) (unsigned short)24854)));
                        }
                    } 
                } 
                arr_58 [i_1] [i_3] = ((/* implicit */short) ((-177064548) / (-98967791)));
            }
            arr_59 [(unsigned char)10] [(unsigned char)10] &= ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-21088)) ? (arr_40 [(unsigned short)0] [i_3 + 1]) : (((/* implicit */int) arr_38 [i_3] [i_3 + 1] [i_3 + 1] [i_3]))));
        }
    }
    var_15 = ((/* implicit */short) var_10);
}
