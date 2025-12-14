/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101902
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101902 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101902
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
    for (unsigned short i_0 = 2; i_0 < 12; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_7 [i_0 + 3] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) -215654177)) ? (((/* implicit */int) (short)255)) : (((/* implicit */int) (unsigned char)137))));
                /* LoopNest 2 */
                for (long long int i_2 = 1; i_2 < 14; i_2 += 3) 
                {
                    for (long long int i_3 = 3; i_3 < 12; i_3 += 3) 
                    {
                        {
                            /* LoopSeq 3 */
                            for (unsigned int i_4 = 0; i_4 < 15; i_4 += 3) 
                            {
                                var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((~(((/* implicit */int) (unsigned char)137)))) | (var_4)))) ? ((-(((/* implicit */int) var_0)))) : ((-(((/* implicit */int) min((((/* implicit */short) var_11)), (var_0))))))));
                                var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) (~((~(((((/* implicit */_Bool) arr_1 [(unsigned short)9])) ? (((/* implicit */int) arr_11 [i_0] [i_0])) : (((/* implicit */int) arr_13 [13] [i_1] [i_2] [i_1] [(short)2] [i_4])))))))))));
                            }
                            for (int i_5 = 1; i_5 < 12; i_5 += 4) /* same iter space */
                            {
                                var_17 ^= ((/* implicit */long long int) min((((((((/* implicit */_Bool) arr_3 [i_0 + 3])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_14 [i_0] [i_1] [i_2 + 1] [i_3] [i_5])))) << (((((/* implicit */int) arr_13 [i_0] [i_1] [i_3] [i_0 - 1] [i_5] [i_3])) - (235))))), (arr_0 [i_0] [i_0])));
                                var_18 = ((/* implicit */long long int) (~(var_2)));
                            }
                            for (int i_6 = 1; i_6 < 12; i_6 += 4) /* same iter space */
                            {
                                var_19 = ((/* implicit */unsigned char) 1994111985U);
                                arr_21 [i_0] [i_0 + 3] [i_2] = ((arr_18 [i_0] [i_1] [i_1] [i_3 + 1] [i_1] [i_0] [i_2]) | (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)119))))));
                                var_20 = -1828758918;
                            }
                            /* LoopSeq 3 */
                            /* vectorizable */
                            for (long long int i_7 = 1; i_7 < 11; i_7 += 3) /* same iter space */
                            {
                                arr_24 [i_0 + 1] [i_2] [(short)7] [i_3] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_15 [i_3 + 3] [i_2] [i_7 + 4] [12LL] [i_0 + 2])) >= (((/* implicit */int) arr_11 [i_2] [i_2 - 1]))));
                                arr_25 [i_7] [i_1] [i_1] [i_1] [i_2] = ((/* implicit */long long int) (((+(((/* implicit */int) (unsigned char)119)))) * (((((/* implicit */_Bool) arr_17 [i_0] [i_2] [5U])) ? (((/* implicit */int) (unsigned char)119)) : (((/* implicit */int) (_Bool)1))))));
                            }
                            for (long long int i_8 = 1; i_8 < 11; i_8 += 3) /* same iter space */
                            {
                                var_21 += ((/* implicit */unsigned short) ((((/* implicit */long long int) (+(((/* implicit */int) arr_15 [i_8 - 1] [i_0] [i_2] [i_3 + 2] [i_2]))))) + (arr_28 [i_0] [(short)14] [i_2] [i_2] [i_3] [i_0])));
                                var_22 = ((/* implicit */int) min((var_22), ((-(((/* implicit */int) arr_8 [i_0 - 1] [i_1] [2LL] [14]))))));
                            }
                            for (long long int i_9 = 1; i_9 < 11; i_9 += 3) /* same iter space */
                            {
                                arr_32 [i_0 + 2] [i_0] [i_0 + 1] [i_0 + 2] [i_2] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_9 + 4] [i_0 - 2] [i_2 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_9 + 2] [i_0 + 3] [i_2 + 1])))))) : (var_10)));
                                arr_33 [i_2] [i_2] = ((/* implicit */long long int) arr_6 [(short)7] [i_2] [(unsigned char)8]);
                            }
                            var_23 |= ((/* implicit */unsigned int) arr_18 [i_1] [i_1] [i_1] [(short)14] [i_1] [i_1] [i_1]);
                            var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) (((!(((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))))) ? (var_4) : (((((/* implicit */_Bool) arr_11 [i_0] [i_0 + 3])) ? ((~(((/* implicit */int) arr_16 [i_2] [i_3 - 3])))) : (((/* implicit */int) arr_30 [i_2 + 1] [11] [i_2 - 1] [11] [i_2 - 1])))))))));
                        }
                    } 
                } 
                var_25 = ((/* implicit */short) (-(((((/* implicit */_Bool) ((unsigned char) var_7))) ? (arr_22 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0 - 2] [i_0]) : (((/* implicit */long long int) ((unsigned int) var_11)))))));
            }
        } 
    } 
    var_26 = ((/* implicit */_Bool) (~((~(((/* implicit */int) min((((/* implicit */unsigned char) var_3)), (var_13))))))));
    var_27 = ((/* implicit */short) (unsigned char)118);
    var_28 = ((/* implicit */unsigned char) var_12);
    var_29 = ((/* implicit */unsigned char) var_6);
}
