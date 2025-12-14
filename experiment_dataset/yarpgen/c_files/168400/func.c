/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168400
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168400 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168400
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
    for (int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 1; i_2 < 15; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 4 */
                            /* vectorizable */
                            for (int i_4 = 1; i_4 < 15; i_4 += 3) 
                            {
                                var_15 = arr_6 [i_0] [i_0] [i_2];
                                var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_2] [i_3] [i_2 + 1])) ? (((/* implicit */int) arr_11 [(_Bool)1] [i_3] [(_Bool)1])) : (((/* implicit */int) var_0)))))));
                                arr_13 [i_2] [i_2] [i_2 - 1] [i_3] [i_4] = ((/* implicit */short) (+(arr_1 [i_4 - 1])));
                                arr_14 [i_0] [i_0] [0] [i_2] [i_2] = ((/* implicit */int) var_3);
                            }
                            /* vectorizable */
                            for (unsigned char i_5 = 0; i_5 < 16; i_5 += 1) 
                            {
                                arr_18 [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) arr_16 [i_2 + 1] [i_2] [i_2 + 1] [(signed char)8] [8ULL] [i_2] [i_2 + 1])) ? (((/* implicit */int) arr_16 [i_3] [i_2] [i_2 - 1] [(short)12] [(signed char)4] [i_2] [i_1])) : (((/* implicit */int) (short)2048))));
                                var_17 = ((/* implicit */short) var_12);
                                arr_19 [i_0] [i_0] [i_2] [i_2] [i_2] [i_5] = ((/* implicit */_Bool) (signed char)-90);
                            }
                            for (short i_6 = 3; i_6 < 14; i_6 += 2) 
                            {
                                var_18 = ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) arr_5 [(_Bool)1] [i_2] [i_2] [i_0])) ? (var_8) : (((((/* implicit */_Bool) arr_21 [i_1] [i_1] [i_1] [i_1] [i_1])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_0)))))));
                                var_19 = ((/* implicit */unsigned char) var_1);
                                arr_23 [i_0] [(_Bool)1] [i_0] [i_0] [i_0] [i_0] [i_0] |= ((/* implicit */int) var_9);
                                arr_24 [i_0] [i_0] [i_2] [7U] [i_0] = ((/* implicit */_Bool) min((((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)88))))), ((~(var_13)))));
                                arr_25 [i_0] [i_0] [6LL] [6ULL] [i_0] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)0)) ? ((~(((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_6] [i_6 + 2] [4ULL]))))))) : (((/* implicit */int) (signed char)113))));
                            }
                            for (unsigned long long int i_7 = 0; i_7 < 16; i_7 += 4) 
                            {
                                var_20 = ((/* implicit */unsigned long long int) (~((((!(((/* implicit */_Bool) arr_7 [i_0])))) ? (((/* implicit */int) max(((_Bool)1), ((_Bool)1)))) : ((~(((/* implicit */int) arr_12 [i_7]))))))));
                                var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) arr_26 [(signed char)6] [i_0]))));
                                var_22 = ((/* implicit */signed char) ((var_1) + (-489204180)));
                                var_23 = ((/* implicit */short) (((!(((/* implicit */_Bool) min((((/* implicit */int) (signed char)-110)), (arr_1 [i_3])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!((!(((/* implicit */_Bool) (signed char)-116)))))))) : ((~(((((/* implicit */_Bool) var_12)) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_7] [i_3] [i_2] [i_1] [i_0])))))))));
                            }
                            /* LoopSeq 1 */
                            for (signed char i_8 = 0; i_8 < 16; i_8 += 1) 
                            {
                                var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) (!((_Bool)1))))));
                                var_25 = ((/* implicit */unsigned long long int) var_13);
                                var_26 = ((/* implicit */unsigned long long int) max((arr_3 [i_0]), (((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) var_1)) & (arr_17 [i_0] [i_0]))) < (((/* implicit */unsigned long long int) var_1)))))));
                                var_27 ^= ((/* implicit */_Bool) min((min((((/* implicit */long long int) arr_29 [i_0] [i_1] [i_1] [i_0] [i_2 + 1])), (arr_20 [i_0] [11] [0] [(unsigned char)14] [i_2 - 1]))), (((/* implicit */long long int) var_2))));
                            }
                            var_28 = ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (!((_Bool)1))))));
                            var_29 &= ((/* implicit */unsigned short) var_6);
                            var_30 = ((/* implicit */unsigned long long int) (signed char)24);
                        }
                    } 
                } 
                var_31 = ((/* implicit */signed char) arr_15 [11U] [11U] [i_1] [i_1] [i_1] [i_1]);
            }
        } 
    } 
    var_32 = ((/* implicit */unsigned int) (-(var_1)));
}
