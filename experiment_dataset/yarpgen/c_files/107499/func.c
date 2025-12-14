/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107499
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107499 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107499
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
    for (short i_0 = 3; i_0 < 9; i_0 += 2) 
    {
        for (short i_1 = 3; i_1 < 11; i_1 += 3) 
        {
            {
                /* LoopSeq 4 */
                for (unsigned int i_2 = 0; i_2 < 12; i_2 += 1) 
                {
                    arr_10 [5LL] [i_0] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)-7902)) * ((~(((/* implicit */int) var_8))))))) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (short)-7902)) || (((/* implicit */_Bool) (signed char)118))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_18 [4U] = ((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) var_10)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_1] [(short)11]))))));
                                arr_19 [i_0] [i_0] [3ULL] [i_0 + 2] [i_0] [(unsigned short)4] [i_0] = ((/* implicit */unsigned int) max((((/* implicit */long long int) (~(((var_7) ? (arr_15 [i_0] [i_0] [i_0] [i_0] [10] [i_0] [4U]) : (((/* implicit */int) arr_17 [i_4] [(unsigned char)1] [(unsigned char)1] [i_0]))))))), (((long long int) ((((/* implicit */_Bool) arr_14 [i_2] [i_1 - 1] [i_0] [i_2])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) (short)9268)))))));
                                arr_20 [(unsigned char)4] [4U] [i_2] [i_2] [(signed char)8] = ((/* implicit */_Bool) arr_17 [i_1 - 2] [i_1 - 2] [i_3] [i_1 - 2]);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 12; i_5 += 4) 
                    {
                        for (int i_6 = 1; i_6 < 8; i_6 += 3) 
                        {
                            {
                                arr_25 [i_5] [i_5] [(short)8] [i_5] [i_5] = ((/* implicit */_Bool) var_10);
                                arr_26 [i_5] [i_5] [i_2] [(unsigned short)6] [i_5] = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)66)) ? (16282801954582331902ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-10803)))))) && (((/* implicit */_Bool) (-(arr_15 [i_0] [i_1] [i_1] [i_2] [i_5] [0] [i_6])))))) ? (((/* implicit */long long int) (-(((/* implicit */int) (!(var_7))))))) : (((long long int) 223018305406417989ULL))));
                                arr_27 [(short)9] [i_0] [i_5] [i_5] [i_2] [i_0] [1ULL] = ((/* implicit */_Bool) var_8);
                                arr_28 [i_1] [i_5] = ((/* implicit */unsigned int) (~((~(((/* implicit */int) ((((/* implicit */int) (short)7923)) != (((/* implicit */int) (unsigned char)75)))))))));
                                arr_29 [i_0] [i_0] [(_Bool)1] = ((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) (unsigned char)66)) : (((/* implicit */int) (unsigned char)249))));
                            }
                        } 
                    } 
                }
                for (short i_7 = 3; i_7 < 11; i_7 += 1) 
                {
                    /* LoopNest 2 */
                    for (short i_8 = 0; i_8 < 12; i_8 += 2) 
                    {
                        for (int i_9 = 0; i_9 < 12; i_9 += 1) 
                        {
                            {
                                arr_38 [i_0] = ((/* implicit */_Bool) var_1);
                                arr_39 [i_0] = ((((/* implicit */_Bool) ((signed char) max(((unsigned char)59), ((unsigned char)249))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 4294967293U))))) : (((/* implicit */int) ((((((/* implicit */_Bool) arr_2 [i_0])) && (arr_21 [11] [i_7] [i_0] [i_9]))) || ((!((_Bool)0)))))));
                            }
                        } 
                    } 
                    arr_40 [(unsigned char)4] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 9U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)190))) : (-17LL)))) ? (((/* implicit */unsigned long long int) var_5)) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)193))) : (var_4))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) (short)11567))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (signed char)45)))) : ((-(2U))))))));
                    arr_41 [i_0 - 2] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 225467022)) ? (((/* implicit */int) (short)-11568)) : (((/* implicit */int) (unsigned char)26))));
                }
                for (short i_10 = 0; i_10 < 12; i_10 += 1) /* same iter space */
                {
                    arr_45 [i_0 - 2] [i_0] [i_0 - 2] [3U] = ((/* implicit */unsigned int) arr_7 [i_10] [i_10] [7LL] [i_0]);
                    arr_46 [(short)4] = ((/* implicit */_Bool) (+(((/* implicit */int) ((_Bool) (short)-17817)))));
                    arr_47 [0LL] [i_1] [0LL] = (~(((((/* implicit */_Bool) (~(var_1)))) ? ((~(2108215005))) : (((/* implicit */int) arr_21 [i_0] [i_0] [(signed char)0] [i_1])))));
                    arr_48 [i_0] [1] [i_0] = ((/* implicit */short) var_2);
                }
                /* vectorizable */
                for (short i_11 = 0; i_11 < 12; i_11 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 12; i_12 += 4) 
                    {
                        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                        {
                            {
                                arr_57 [i_0] [(short)3] [i_0] [3] [i_0] [i_12] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)7)) * (((/* implicit */int) (_Bool)1))));
                                arr_58 [i_0] [i_12] [i_0] &= ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)66)) || (((((/* implicit */int) var_8)) != (((/* implicit */int) arr_33 [i_0 - 1] [i_1 - 1] [i_11] [i_11] [i_12]))))));
                            }
                        } 
                    } 
                    arr_59 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_8)) % (((/* implicit */int) (short)26926))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_1)))) : (arr_14 [i_11] [(signed char)10] [i_1 + 1] [i_0])));
                }
                arr_60 [i_0] [i_0] [i_0] = ((/* implicit */long long int) var_4);
                arr_61 [i_0 + 3] [i_0] [i_0 + 3] = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)21)) ? (arr_16 [(short)4] [i_1]) : (((/* implicit */int) (short)-26462))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-120)) ? (((/* implicit */int) (unsigned char)21)) : (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) (signed char)-57)) ? (1445154219U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-64))))))) & (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)70)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-26933))) : (var_5)))) ? (((/* implicit */int) (short)26926)) : (((((/* implicit */int) var_9)) ^ (((/* implicit */int) arr_21 [i_0] [i_0] [i_0] [i_1])))))))));
            }
        } 
    } 
    var_11 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) (short)-26922)))) ? (((long long int) ((((/* implicit */int) var_9)) | (((/* implicit */int) (_Bool)1))))) : (((/* implicit */long long int) (((-(((/* implicit */int) var_7)))) * (var_0))))));
    /* LoopNest 2 */
    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
    {
        for (short i_15 = 2; i_15 < 11; i_15 += 4) 
        {
            {
                arr_68 [i_14] [(short)2] [i_15] = ((/* implicit */long long int) ((((((/* implicit */_Bool) min(((short)-30691), (((/* implicit */short) arr_17 [i_15 - 2] [i_15] [i_14] [i_14]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-12279))) : (var_5))) * (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) var_3)) < (var_1)))))));
                arr_69 [i_14] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)26932)) ? (var_6) : (((/* implicit */int) (short)-26087))));
                /* LoopNest 3 */
                for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                {
                    for (short i_17 = 0; i_17 < 12; i_17 += 4) 
                    {
                        for (unsigned int i_18 = 0; i_18 < 12; i_18 += 1) 
                        {
                            {
                                arr_78 [i_14] [i_14] [i_16] [i_14] [i_18] = ((/* implicit */int) ((long long int) max((((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (9223372036854775807LL))), (((/* implicit */long long int) arr_44 [(unsigned char)7] [(unsigned char)10] [i_18])))));
                                arr_79 [i_14] [i_14] [i_16] [i_14] = ((/* implicit */long long int) min(((~(((/* implicit */int) ((unsigned short) var_1))))), ((+(var_0)))));
                                arr_80 [i_14] [i_15] [i_14] [i_16] [1] [(unsigned short)6] [i_18] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) ? ((~(((/* implicit */int) max((((/* implicit */short) arr_52 [i_14] [i_14])), ((short)(-32767 - 1))))))) : (((((((((/* implicit */_Bool) (short)-26926)) ? (var_3) : (((/* implicit */int) var_9)))) + (2147483647))) << ((((~(-190339163))) - (190339162)))))));
                                arr_81 [i_17] [i_17] [i_14] [i_17] [i_17] [i_17] = ((/* implicit */signed char) var_0);
                                arr_82 [(_Bool)1] [(_Bool)1] [1U] [i_15] [i_18] [i_14] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))) : (((((((/* implicit */_Bool) (signed char)80)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32760))) : (var_4))) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_14])))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
