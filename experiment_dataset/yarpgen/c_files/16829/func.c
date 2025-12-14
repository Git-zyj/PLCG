/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16829
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16829 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16829
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
    var_14 = ((/* implicit */int) (unsigned short)36893);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 21; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)26273))))) ? (((((/* implicit */_Bool) (unsigned short)26273)) ? (arr_3 [i_1 + 2]) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1 - 1]))))) : (min((((/* implicit */long long int) arr_1 [i_1 + 2])), (arr_3 [i_1 - 1])))));
                var_16 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (arr_0 [i_0]))) - (((arr_0 [i_1]) + (arr_0 [i_0])))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 23; i_2 += 3) 
                {
                    for (unsigned short i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        {
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (unsigned char i_4 = 0; i_4 < 23; i_4 += 1) 
                            {
                                var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) arr_9 [i_1 + 1] [i_1 + 2]))));
                                var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_1 + 2])) ? (((/* implicit */int) (unsigned char)184)) : (((/* implicit */int) (unsigned short)65535))));
                            }
                            /* LoopSeq 3 */
                            for (unsigned char i_5 = 0; i_5 < 23; i_5 += 1) 
                            {
                                var_19 = arr_3 [i_0];
                                var_20 &= ((/* implicit */short) (~(min((arr_4 [i_0]), (((/* implicit */int) arr_6 [i_1] [(short)1] [i_5]))))));
                                var_21 += ((/* implicit */_Bool) (unsigned short)26273);
                            }
                            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                            {
                                var_22 *= ((/* implicit */unsigned short) max((((((/* implicit */_Bool) (+(arr_2 [i_1] [(signed char)5])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [(short)2])))))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [(signed char)0] [i_1] [20] [14]))) * (arr_2 [i_0] [(_Bool)1]))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min(((unsigned short)39274), (arr_8 [(signed char)18] [i_1] [i_3] [(unsigned char)17])))) ? (((/* implicit */int) (short)21030)) : (((/* implicit */int) ((_Bool) (unsigned short)39274))))))));
                                arr_16 [(short)13] [i_0] [(_Bool)1] [(unsigned short)13] [i_2] [15LL] [14] = ((/* implicit */unsigned long long int) (short)2319);
                                arr_17 [12LL] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) arr_15 [(unsigned char)21] [i_3] [i_2] [0U] [(unsigned short)9] [i_0] [i_0]))) && (((/* implicit */_Bool) var_8))));
                            }
                            for (unsigned short i_7 = 0; i_7 < 23; i_7 += 1) 
                            {
                                arr_20 [i_0] [10LL] [(signed char)6] [(_Bool)1] [i_7] [i_7] [(short)22] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_6 [i_1 + 1] [i_1] [i_1 - 1])) << (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)26273)) && (((/* implicit */_Bool) (unsigned short)26262)))))));
                                var_23 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((arr_12 [i_0] [i_1] [18U] [i_3] [i_7]) < (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (short)26045)) : (((/* implicit */int) arr_13 [(unsigned char)0] [(unsigned short)13])))))))), (max((((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [8U] [(short)1] [i_0]))) != (var_8)))), (arr_0 [i_1])))));
                                arr_21 [i_7] [(short)1] [i_2] [i_1] [i_7] = ((/* implicit */unsigned long long int) arr_6 [(short)12] [10ULL] [(_Bool)1]);
                            }
                            /* LoopSeq 1 */
                            for (short i_8 = 0; i_8 < 23; i_8 += 3) 
                            {
                                var_24 = ((/* implicit */short) min(((+(((/* implicit */int) (short)-29050)))), (((/* implicit */int) min((min((((/* implicit */unsigned short) (unsigned char)24)), ((unsigned short)26267))), ((unsigned short)65535))))));
                                var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) min((((/* implicit */int) ((_Bool) var_9))), (((((/* implicit */_Bool) arr_8 [i_1 - 1] [i_1] [i_1 + 2] [8ULL])) ? (((/* implicit */int) arr_8 [i_1 + 2] [i_1] [i_1 - 2] [i_1])) : (((/* implicit */int) arr_18 [10LL] [i_0] [i_1 + 2] [i_1] [i_1 - 1])))))))));
                                var_26 = max(((unsigned short)26240), (((/* implicit */unsigned short) (unsigned char)255)));
                            }
                        }
                    } 
                } 
                var_27 = ((/* implicit */unsigned char) arr_19 [i_0] [i_1] [22] [i_0] [i_0]);
                arr_26 [(unsigned char)10] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((var_0) ? (((((/* implicit */int) arr_15 [(short)10] [5] [i_1] [(_Bool)1] [(_Bool)1] [i_1] [(unsigned short)0])) << (((/* implicit */int) (unsigned short)2)))) : (((/* implicit */int) (_Bool)1))))), (((arr_10 [5LL] [i_1 - 2] [18] [(_Bool)1] [i_1] [i_1 + 1]) ? (((unsigned long long int) arr_14 [(unsigned short)14] [i_1] [i_1] [i_0] [i_0] [20U] [7U])) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_9)), (arr_3 [i_0]))))))));
            }
        } 
    } 
    var_28 = ((/* implicit */short) var_6);
    var_29 = ((/* implicit */unsigned short) ((unsigned long long int) var_9));
}
