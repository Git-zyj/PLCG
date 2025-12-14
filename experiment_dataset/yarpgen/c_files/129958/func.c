/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129958
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129958 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129958
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
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                {
                    arr_6 [i_0] [i_1] [i_0 - 1] [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned char) arr_4 [i_0 - 1] [i_0 - 1])))));
                    /* LoopSeq 3 */
                    for (short i_3 = 0; i_3 < 24; i_3 += 1) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_4 = 0; i_4 < 24; i_4 += 4) 
                        {
                            var_14 = ((/* implicit */_Bool) max((((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)83))))), (((long long int) -2147483625))));
                            var_15 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [14LL] [i_1] [(unsigned char)18] [4LL] [i_3] [19U]))) / (max((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_1 [i_2]))))), (arr_11 [(short)15] [10])))));
                        }
                        /* vectorizable */
                        for (unsigned long long int i_5 = 1; i_5 < 22; i_5 += 2) 
                        {
                            var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (short)-20526)) : (((/* implicit */int) arr_1 [i_0]))));
                            var_17 = ((/* implicit */short) (~(-2147483623)));
                            arr_15 [i_5] = ((((/* implicit */long long int) (~(((/* implicit */int) var_0))))) / (var_7));
                            var_18 ^= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) -2147483601)) && (((/* implicit */_Bool) (short)32767)))))) < ((-(6LL)))));
                        }
                        var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) (!(((/* implicit */_Bool) max((5209079751449404242LL), (((/* implicit */long long int) (short)20530))))))))));
                        arr_16 [i_0] [i_3] = ((/* implicit */long long int) arr_10 [i_0 - 1] [i_3] [i_2] [i_3] [i_0]);
                    }
                    for (short i_6 = 0; i_6 < 24; i_6 += 1) /* same iter space */
                    {
                        var_20 = ((/* implicit */unsigned long long int) ((unsigned int) min((((/* implicit */short) (signed char)11)), ((short)20524))));
                        arr_21 [(signed char)2] [i_1] [i_6] [i_6] = ((/* implicit */unsigned short) arr_8 [i_6] [i_2]);
                        var_21 = ((/* implicit */long long int) max(((~(((/* implicit */int) ((short) var_13))))), (((/* implicit */int) (short)20505))));
                    }
                    for (short i_7 = 0; i_7 < 24; i_7 += 1) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (int i_8 = 3; i_8 < 20; i_8 += 3) 
                        {
                            arr_26 [i_0] [14ULL] [i_0] [i_8] = (-(((((/* implicit */_Bool) arr_9 [23LL] [i_1] [i_0 - 1] [i_1] [8ULL] [i_0 - 1])) ? (((/* implicit */int) arr_12 [10U] [16ULL] [i_0 - 1] [i_7] [i_0 - 1])) : (((/* implicit */int) arr_9 [i_0] [i_1] [i_0 - 1] [i_1] [i_8] [i_8 - 3])))));
                            var_22 -= ((/* implicit */unsigned char) max((arr_11 [i_7] [i_8 - 2]), (max((arr_11 [i_0 - 1] [i_1]), (((/* implicit */unsigned long long int) var_13))))));
                            var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) arr_7 [(unsigned short)21] [i_0 - 1] [i_0 - 1] [i_0]))) ? (((/* implicit */long long int) ((/* implicit */int) arr_18 [(unsigned char)18] [i_2]))) : (((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)7))) : (706723590733238369LL))))))));
                            var_24 -= ((/* implicit */unsigned char) max((3067261619U), (((/* implicit */unsigned int) (short)8176))));
                        }
                        var_25 = ((/* implicit */unsigned char) ((((/* implicit */int) max((arr_9 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1]), (arr_9 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1])))) | (((/* implicit */int) min((arr_9 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1]), (arr_9 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1]))))));
                        arr_27 [i_7] [i_2] [i_1] [i_0 - 1] = ((/* implicit */unsigned short) (short)-9282);
                        var_26 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((unsigned short) min((arr_17 [i_0] [i_1] [i_2] [i_0]), (var_9))))), (((((/* implicit */_Bool) ((short) arr_18 [i_0] [i_1]))) ? (max((((/* implicit */long long int) var_6)), (arr_5 [i_1] [i_7]))) : (((/* implicit */long long int) arr_7 [(unsigned short)1] [i_1] [i_2] [i_7]))))));
                        var_27 = ((/* implicit */unsigned long long int) max((var_27), (((/* implicit */unsigned long long int) var_11))));
                    }
                }
            } 
        } 
    } 
    var_28 = ((/* implicit */signed char) min((((/* implicit */long long int) (unsigned short)4861)), (var_7)));
    var_29 = var_10;
}
