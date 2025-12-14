/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149704
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149704 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149704
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 11; i_2 += 4) 
                {
                    for (unsigned int i_3 = 2; i_3 < 8; i_3 += 1) 
                    {
                        {
                            arr_9 [i_0] [6ULL] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) (unsigned short)64147)) != (((/* implicit */int) arr_6 [i_0]))))) % (((/* implicit */int) ((arr_4 [i_3 + 2]) >= (arr_4 [i_3 - 2]))))));
                            /* LoopSeq 4 */
                            for (unsigned short i_4 = 0; i_4 < 11; i_4 += 4) /* same iter space */
                            {
                                var_17 &= ((/* implicit */signed char) min((((((/* implicit */_Bool) ((((/* implicit */int) var_9)) - (((/* implicit */int) var_4))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_2])) || (((/* implicit */_Bool) var_10)))))) : (min((arr_0 [i_1]), (1885615965U))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_1 [i_3] [i_4])), (arr_4 [i_0])))) ? (arr_7 [i_0] [i_3] [i_2] [i_3 + 2]) : (((/* implicit */int) arr_11 [i_4] [i_4] [1] [i_3 - 2] [i_3 + 2])))))));
                                arr_12 [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_8 [(_Bool)1] [i_3] [i_1] [i_0]))));
                                var_18 = ((/* implicit */unsigned long long int) arr_8 [(unsigned short)5] [i_3 - 2] [i_2] [i_2]);
                                var_19 = ((/* implicit */int) ((min((((/* implicit */unsigned int) arr_8 [i_3] [i_3] [i_3 + 2] [4ULL])), (((((/* implicit */_Bool) (unsigned short)64153)) ? (2452970149U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)64123))))))) <= (((/* implicit */unsigned int) ((/* implicit */int) var_9)))));
                                var_20 = ((/* implicit */unsigned short) max((((((((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) != (arr_10 [i_3 + 2] [i_1] [i_1]))) ? (((/* implicit */int) ((var_1) == (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0])))))) : (((/* implicit */int) min((arr_8 [(_Bool)1] [i_1] [i_1] [i_1]), ((signed char)-1)))))), (min((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_16)))), (((/* implicit */int) var_9))))));
                            }
                            for (unsigned short i_5 = 0; i_5 < 11; i_5 += 4) /* same iter space */
                            {
                                var_21 = ((/* implicit */unsigned int) ((unsigned short) (+(min((((/* implicit */unsigned long long int) var_3)), (arr_4 [i_3]))))));
                                var_22 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((383383618U) + (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-4))))))));
                            }
                            for (unsigned short i_6 = 0; i_6 < 11; i_6 += 4) /* same iter space */
                            {
                                arr_19 [i_0] [i_0] [i_2] [i_3 + 3] [(_Bool)1] = ((/* implicit */int) arr_1 [i_1] [i_2]);
                                arr_20 [i_0] = ((/* implicit */_Bool) min(((signed char)17), (((/* implicit */signed char) ((_Bool) ((3911583677U) * (var_2)))))));
                                var_23 &= ((/* implicit */signed char) arr_2 [i_0]);
                                var_24 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_6)))) < (((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_0])) << (((((/* implicit */int) var_14)) - (5534)))))) ? (((/* implicit */unsigned long long int) 66087197)) : (max((((/* implicit */unsigned long long int) var_4)), (arr_4 [(unsigned short)4])))))));
                            }
                            /* vectorizable */
                            for (unsigned short i_7 = 0; i_7 < 11; i_7 += 4) /* same iter space */
                            {
                                arr_23 [i_0] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1305922936)) ? (arr_4 [(unsigned short)4]) : (549755813887ULL)))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_2 [i_3 - 2]))));
                                var_25 = ((/* implicit */unsigned long long int) arr_22 [(signed char)5] [7ULL] [i_3 + 1] [i_0] [i_3 - 1]);
                                arr_24 [9U] [i_0] [i_7] [i_7] [i_7] [i_7] = ((/* implicit */unsigned int) ((unsigned long long int) arr_7 [i_0] [i_1] [i_2] [i_3 + 2]));
                                arr_25 [i_0] [i_1] [i_2] [i_1] [i_7] &= ((/* implicit */_Bool) ((signed char) arr_21 [i_1] [i_7] [i_3 - 2]));
                            }
                            /* LoopSeq 1 */
                            for (signed char i_8 = 0; i_8 < 11; i_8 += 3) 
                            {
                                arr_28 [i_0] [i_0] = ((/* implicit */int) ((unsigned short) min((((/* implicit */signed char) var_8)), (arr_14 [i_0] [i_1]))));
                                arr_29 [i_1] [i_2] [i_8] |= (_Bool)1;
                                var_26 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) * (((arr_16 [i_0] [i_0] [i_1] [i_2] [i_3 - 2] [(signed char)6] [i_8]) ? (arr_4 [(signed char)9]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_9))))))));
                            }
                        }
                    } 
                } 
                arr_30 [i_0] [(signed char)8] [i_0] = ((/* implicit */unsigned short) ((unsigned int) ((int) ((((/* implicit */int) var_7)) | (((/* implicit */int) (_Bool)1))))));
                /* LoopNest 2 */
                for (unsigned int i_9 = 0; i_9 < 11; i_9 += 1) 
                {
                    for (unsigned long long int i_10 = 0; i_10 < 11; i_10 += 1) 
                    {
                        {
                            var_27 -= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_33 [i_0])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)126))));
                            var_28 = ((/* implicit */unsigned short) ((var_0) + (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_7 [i_0] [i_1] [5ULL] [i_10])) ? (((/* implicit */int) (signed char)-17)) : (((/* implicit */int) var_16)))) == (((/* implicit */int) ((((/* implicit */_Bool) (signed char)16)) || (((/* implicit */_Bool) arr_18 [i_0] [i_0] [i_0] [i_0] [i_10])))))))))));
                        }
                    } 
                } 
                arr_38 [i_0] = ((/* implicit */_Bool) ((unsigned int) 6408711636633968502ULL));
                var_29 += ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_34 [(unsigned short)5] [i_1] [i_1] [(unsigned short)6] [10]))))) ? (((((var_7) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)64149))) : (arr_31 [i_0]))) + (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_1] [(signed char)6] [i_1] [i_0] [i_0]))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))));
            }
        } 
    } 
    var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((((var_6) << (((2409351330U) - (2409351330U))))) == ((-(((/* implicit */int) (unsigned short)11173)))))))));
    var_31 ^= ((/* implicit */unsigned short) ((unsigned int) var_15));
}
