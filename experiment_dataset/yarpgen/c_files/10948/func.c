/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10948
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10948 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10948
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
    var_16 |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)95)) ? (((/* implicit */int) ((((/* implicit */int) var_8)) < (((/* implicit */int) var_14))))) : (((/* implicit */int) var_1))))) ? (((/* implicit */int) (signed char)120)) : (((/* implicit */int) (unsigned short)46156))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 17; i_2 += 3) 
                {
                    for (int i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 2 */
                            /* vectorizable */
                            for (unsigned char i_4 = 0; i_4 < 17; i_4 += 3) 
                            {
                                var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_11))))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_12 [i_2])) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_7 [i_0 + 4] [i_1] [16U]))));
                                var_18 = ((/* implicit */_Bool) ((short) arr_2 [i_0 - 1]));
                                var_19 = ((/* implicit */signed char) ((arr_10 [i_0] [i_0] [i_0 + 3]) + (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [i_0] [2] [i_2])) % (((/* implicit */int) arr_9 [i_3])))))));
                            }
                            for (int i_5 = 1; i_5 < 14; i_5 += 3) 
                            {
                                var_20 |= ((/* implicit */unsigned int) (+(((/* implicit */int) ((_Bool) (signed char)94)))));
                                var_21 = ((/* implicit */_Bool) min(((short)-178), (((/* implicit */short) (signed char)-101))));
                                var_22 = ((/* implicit */long long int) min(((-(((/* implicit */int) max((((/* implicit */short) arr_18 [i_5 + 1] [i_3] [i_2] [i_1] [i_0] [(_Bool)1] [i_0])), (arr_4 [i_0 + 1] [i_2] [i_2])))))), (((/* implicit */int) (signed char)-93))));
                            }
                            /* LoopSeq 3 */
                            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                            {
                                var_23 &= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_15 [i_0] [i_0 + 1] [i_0 + 4] [7] [i_0] [i_0 + 1] [i_0])) - (((/* implicit */int) arr_12 [i_0 - 1]))))) ? (((unsigned long long int) arr_12 [i_0 + 4])) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_0 + 4])) ? (arr_3 [i_0 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0 + 2]))))))));
                                var_24 = (signed char)-94;
                            }
                            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
                            {
                                var_25 = ((/* implicit */signed char) ((((/* implicit */long long int) max((((/* implicit */unsigned int) (_Bool)1)), (arr_14 [i_0 + 3])))) - (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) | (((long long int) (signed char)87))))));
                                var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) min((((/* implicit */short) arr_22 [i_7] [(signed char)5] [(_Bool)1] [i_2] [i_2] [(_Bool)1] [(_Bool)1])), (arr_4 [(unsigned char)12] [(unsigned short)8] [i_7])))) & (((/* implicit */int) (signed char)-1))))) ? (((((/* implicit */_Bool) min((((/* implicit */long long int) (_Bool)1)), (-8352715769857846627LL)))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_4 [i_7] [11U] [i_2]))))) : (var_4))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-11)))));
                            }
                            for (unsigned int i_8 = 0; i_8 < 17; i_8 += 1) 
                            {
                                var_27 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) var_8))) ? (8352715769857846628LL) : (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_0] [i_0] [i_2] [i_2] [i_8] [i_0] [i_3])))))) ? (((((/* implicit */_Bool) min(((short)-1), (((/* implicit */short) var_2))))) ? (((/* implicit */int) arr_9 [(signed char)5])) : (((/* implicit */int) max((((/* implicit */short) var_11)), (arr_24 [i_0] [i_1] [(_Bool)1] [i_8])))))) : (((/* implicit */int) max((((/* implicit */unsigned char) arr_17 [i_0] [i_0 + 2])), ((unsigned char)6)))));
                                var_28 = ((/* implicit */short) arr_5 [i_0] [i_8]);
                            }
                        }
                    } 
                } 
                var_29 |= ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_9 [i_0 - 1])) ? (((/* implicit */int) arr_9 [i_0 + 4])) : (((/* implicit */int) arr_9 [i_0 + 3])))), (((((/* implicit */_Bool) ((unsigned char) arr_11 [i_1]))) ? ((+(((/* implicit */int) arr_20 [i_0] [i_0] [(short)4] [i_1])))) : (((((/* implicit */_Bool) 12814215444551017638ULL)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_6))))))));
                var_30 = ((/* implicit */unsigned int) max((var_30), (((/* implicit */unsigned int) arr_0 [i_1]))));
            }
        } 
    } 
}
