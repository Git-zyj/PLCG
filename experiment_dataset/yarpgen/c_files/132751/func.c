/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132751
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132751 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132751
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
    for (short i_0 = 1; i_0 < 15; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 19; i_2 += 2) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_16 = ((/* implicit */short) ((signed char) max((((/* implicit */unsigned long long int) ((unsigned int) var_10))), (((((/* implicit */_Bool) var_6)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))))));
                            var_17 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) (~(((int) arr_9 [(unsigned short)17] [(short)12]))))), ((-(min((arr_6 [i_1] [i_2] [i_3]), (((/* implicit */unsigned int) arr_5 [i_1] [i_1] [i_1]))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_4 = 4; i_4 < 18; i_4 += 4) 
                {
                    for (long long int i_5 = 3; i_5 < 16; i_5 += 2) 
                    {
                        {
                            var_18 = ((/* implicit */signed char) 9223372036854775807LL);
                            var_19 = ((/* implicit */unsigned long long int) var_12);
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (signed char i_6 = 3; i_6 < 17; i_6 += 4) 
                {
                    for (unsigned long long int i_7 = 1; i_7 < 18; i_7 += 2) 
                    {
                        for (unsigned short i_8 = 0; i_8 < 19; i_8 += 4) 
                        {
                            {
                                var_20 *= max((((/* implicit */unsigned long long int) arr_0 [i_0 - 1])), (((unsigned long long int) ((((/* implicit */_Bool) (unsigned char)240)) && (((/* implicit */_Bool) arr_16 [i_1] [i_6 - 1] [i_7 + 1] [i_1]))))));
                                var_21 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_23 [0LL] [i_7] [i_7] [0LL] [i_0])) ? (arr_13 [i_0]) : (((/* implicit */int) arr_14 [i_0] [i_1] [i_1] [i_0] [i_7] [i_0]))))) / (arr_18 [i_0 + 4] [i_0 + 1] [i_6 - 1] [i_6 - 2] [i_7 + 1] [i_7 + 1])))) ? (min((((/* implicit */long long int) 4294967295U)), (3184703343311589605LL))) : (arr_18 [(signed char)8] [(unsigned short)12] [i_0 + 4] [i_0 + 1] [i_6 - 3] [i_1])));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (short i_9 = 2; i_9 < 16; i_9 += 4) 
                {
                    for (long long int i_10 = 2; i_10 < 18; i_10 += 4) 
                    {
                        {
                            var_22 |= min((((((/* implicit */_Bool) arr_8 [i_1] [i_9 + 1] [i_9 - 2])) ? (arr_8 [i_0 + 3] [i_0 - 1] [i_0 - 1]) : (arr_8 [i_10] [i_9 + 2] [i_1]))), (((/* implicit */unsigned long long int) arr_22 [(short)16] [i_1])));
                            var_23 = ((/* implicit */signed char) arr_22 [i_0 + 4] [i_0]);
                            arr_30 [i_0] [i_0] [i_9] [i_0] = ((/* implicit */short) arr_18 [i_0] [i_1] [i_1] [i_1] [i_9 + 1] [i_10 + 1]);
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_11 = 0; i_11 < 14; i_11 += 4) 
    {
        for (unsigned long long int i_12 = 1; i_12 < 12; i_12 += 2) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_13 = 1; i_13 < 13; i_13 += 4) 
                {
                    for (short i_14 = 4; i_14 < 12; i_14 += 1) 
                    {
                        {
                            arr_43 [i_11] = ((/* implicit */long long int) (+(max((((((/* implicit */int) var_5)) << (((((/* implicit */int) var_14)) - (29208))))), (((/* implicit */int) arr_35 [i_14 - 3]))))));
                            var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) ((((/* implicit */_Bool) min((var_7), (arr_21 [i_11] [i_12 - 1] [i_12 + 1] [i_12 + 1] [i_13 - 1] [i_13 - 1] [i_14 - 4])))) ? (max((((/* implicit */unsigned long long int) min((5527717015207822180LL), (((/* implicit */long long int) (unsigned char)37))))), (max((((/* implicit */unsigned long long int) var_5)), (arr_2 [i_11] [i_12]))))) : (((/* implicit */unsigned long long int) max((min((var_11), (((/* implicit */long long int) 1009594068U)))), (((/* implicit */long long int) min((((/* implicit */unsigned int) arr_29 [i_11] [9U] [i_13] [6ULL])), (arr_11 [i_11] [i_12] [(short)5] [i_14 - 3]))))))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_15 = 0; i_15 < 14; i_15 += 1) 
                {
                    for (short i_16 = 0; i_16 < 14; i_16 += 4) 
                    {
                        {
                            var_25 = ((/* implicit */unsigned short) min((arr_46 [i_16] [i_12 + 2] [i_12 - 1] [i_12 + 1] [i_11]), (((/* implicit */unsigned long long int) min((arr_17 [i_12] [i_12] [i_12]), (((/* implicit */unsigned int) arr_7 [i_15] [i_12 - 1] [(short)10])))))));
                            var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) arr_8 [i_11] [i_15] [i_15]))));
                            arr_48 [i_11] [i_15] = ((/* implicit */unsigned char) min((min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_41 [i_11] [i_12 + 1] [i_15] [i_16] [i_11] [i_12 + 1])) ? (((/* implicit */int) arr_3 [i_15])) : (((/* implicit */int) var_6))))), (min((-1LL), (((/* implicit */long long int) (signed char)6)))))), (max((min((arr_32 [i_15]), (((/* implicit */long long int) (unsigned char)15)))), (((/* implicit */long long int) ((((/* implicit */int) var_12)) + (((/* implicit */int) var_12)))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_17 = 0; i_17 < 14; i_17 += 2) 
                {
                    for (unsigned long long int i_18 = 0; i_18 < 14; i_18 += 1) 
                    {
                        {
                            var_27 = ((/* implicit */unsigned char) max((min((max((((/* implicit */unsigned long long int) var_3)), (arr_2 [i_18] [(unsigned char)7]))), (((/* implicit */unsigned long long int) (-(var_11)))))), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_34 [i_11] [i_17])) ? (9800931272990764969ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_35 [i_18]))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_12 - 1] [i_17] [i_17]))))))));
                            var_28 *= ((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_50 [i_11] [i_12 + 2] [i_12 + 2] [i_18])), (((((/* implicit */_Bool) min(((short)4094), (((/* implicit */short) (signed char)10))))) ? ((~(arr_19 [i_11]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_15 [i_11] [i_11] [i_11])) : (((/* implicit */int) var_6)))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_19 = 1; i_19 < 13; i_19 += 2) 
                {
                    for (unsigned long long int i_20 = 0; i_20 < 14; i_20 += 4) 
                    {
                        {
                            var_29 = ((/* implicit */unsigned char) ((unsigned int) ((short) arr_53 [i_19 - 1] [(_Bool)1] [(signed char)3] [i_12 + 2])));
                            var_30 = ((/* implicit */long long int) min((var_30), (max((((arr_22 [i_12 + 1] [i_20]) - (((/* implicit */long long int) ((/* implicit */int) arr_34 [i_12 + 2] [i_12 + 2]))))), (((/* implicit */long long int) min((arr_34 [i_12 - 1] [i_12 + 2]), (arr_34 [i_12 + 1] [i_12 + 1]))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_21 = 0; i_21 < 13; i_21 += 1) 
    {
        for (int i_22 = 0; i_22 < 13; i_22 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_23 = 0; i_23 < 13; i_23 += 1) 
                {
                    for (int i_24 = 0; i_24 < 13; i_24 += 1) 
                    {
                        {
                            arr_68 [(unsigned char)7] [(short)2] [(short)2] [5U] [(unsigned short)6] = ((/* implicit */signed char) ((max((((((/* implicit */_Bool) (signed char)6)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (signed char)-10)))), (((/* implicit */int) arr_56 [i_21] [11LL] [i_23] [i_23] [i_23])))) % (((((/* implicit */_Bool) arr_34 [i_22] [i_23])) ? (((/* implicit */int) var_14)) : (arr_0 [i_23])))));
                            arr_69 [i_21] [i_22] [i_23] [i_23] [i_24] [i_24] &= ((/* implicit */unsigned int) ((((/* implicit */int) var_2)) ^ (((((/* implicit */int) arr_15 [i_21] [i_22] [i_23])) ^ (((/* implicit */int) arr_5 [i_21] [i_21] [i_21]))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (int i_25 = 0; i_25 < 13; i_25 += 4) 
                {
                    for (unsigned char i_26 = 0; i_26 < 13; i_26 += 4) 
                    {
                        for (unsigned char i_27 = 0; i_27 < 13; i_27 += 4) 
                        {
                            {
                                arr_79 [i_22] [i_22] [i_26] [i_27] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((5974626012435003630ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)240))))), (((/* implicit */unsigned long long int) arr_38 [i_27] [i_27] [i_27]))))) ? (min((((arr_9 [i_22] [i_27]) / (((/* implicit */unsigned long long int) var_9)))), (((/* implicit */unsigned long long int) arr_20 [i_22] [i_22])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)9096)))));
                                var_31 = ((/* implicit */_Bool) (((+(arr_51 [i_21] [i_26] [i_27]))) - (((/* implicit */int) ((((/* implicit */int) (signed char)5)) == (arr_51 [i_21] [i_21] [i_25]))))));
                                var_32 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_26] [(short)14] [i_25])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_37 [i_22] [i_22] [5U] [i_22]))) : (min((arr_2 [i_25] [i_25]), (((/* implicit */unsigned long long int) var_1))))))) ? (((/* implicit */unsigned long long int) min((min((((/* implicit */int) var_2)), (2147483647))), (((((/* implicit */_Bool) arr_33 [i_22])) ? (((/* implicit */int) arr_63 [i_21] [i_22] [i_21])) : (((/* implicit */int) (unsigned char)240))))))) : (arr_60 [i_21] [i_21])));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_28 = 0; i_28 < 13; i_28 += 1) 
                {
                    for (_Bool i_29 = 0; i_29 < 1; i_29 += 1) 
                    {
                        {
                            var_33 = ((/* implicit */long long int) min((var_33), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_73 [i_21] [i_22] [i_28] [i_29]))) * (arr_9 [i_21] [i_21])))) ? (((/* implicit */int) arr_4 [i_22] [i_22])) : (((/* implicit */int) max((arr_42 [i_21] [(unsigned char)2] [i_21] [(unsigned char)2] [i_21] [(unsigned short)11]), (((/* implicit */short) (unsigned char)3))))))))));
                            var_34 = ((/* implicit */unsigned int) max((max((((/* implicit */unsigned long long int) var_5)), (8688940664978230759ULL))), (((/* implicit */unsigned long long int) arr_4 [i_21] [i_29]))));
                            var_35 = ((/* implicit */signed char) min((var_35), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_39 [i_28])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-5))) : (arr_39 [i_21])))) ? (((unsigned long long int) 1238741863U)) : (((/* implicit */unsigned long long int) ((arr_39 [i_21]) << (((arr_39 [i_21]) - (267234994352478741LL)))))))))));
                            var_36 = ((/* implicit */unsigned long long int) var_9);
                            arr_84 [i_29] [i_28] [i_22] [i_21] = ((/* implicit */short) arr_27 [(unsigned short)18]);
                        }
                    } 
                } 
            }
        } 
    } 
}
