/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172409
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172409 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172409
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
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                arr_7 [i_0] = arr_3 [i_0];
                var_11 *= ((/* implicit */_Bool) arr_6 [i_0] [4U] [i_1]);
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 2) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_12 &= ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_2] [i_0]))));
                            /* LoopSeq 1 */
                            for (signed char i_4 = 0; i_4 < 11; i_4 += 2) 
                            {
                                var_13 = ((/* implicit */unsigned short) arr_4 [i_3] [i_0] [i_0]);
                                var_14 = ((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                            }
                            var_15 = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) min(((unsigned char)167), (((/* implicit */unsigned char) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_3), ((_Bool)1))))) : (arr_13 [i_3] [i_2] [i_1] [i_1] [i_0]))));
                            /* LoopSeq 4 */
                            /* vectorizable */
                            for (int i_5 = 0; i_5 < 11; i_5 += 2) 
                            {
                                arr_19 [i_0] [i_1] [i_2] [i_3] [(unsigned short)3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_10 [(signed char)1] [i_2] [i_1])) ? (((/* implicit */unsigned long long int) arr_10 [i_1] [i_2] [i_1])) : (arr_2 [i_1])));
                                var_16 = ((/* implicit */long long int) min((var_16), (((((/* implicit */_Bool) arr_11 [i_0] [i_2] [(short)3] [i_5])) ? (arr_10 [i_0] [i_1] [i_2]) : (((/* implicit */long long int) (-(-738976003))))))));
                                var_17 = ((/* implicit */_Bool) (-(3715789163157780707LL)));
                            }
                            for (signed char i_6 = 0; i_6 < 11; i_6 += 4) /* same iter space */
                            {
                                arr_22 [i_0] [7LL] [i_1] [i_2] [i_2] [i_0] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */long long int) (~(((/* implicit */int) arr_0 [i_0]))))) / (3715789163157780716LL)));
                                arr_23 [i_0] [i_1] [i_2] [i_3] [i_2] [i_6] &= ((/* implicit */long long int) (((-(((unsigned int) 1125899369971712LL)))) | (((/* implicit */unsigned int) ((/* implicit */int) var_7)))));
                            }
                            for (signed char i_7 = 0; i_7 < 11; i_7 += 4) /* same iter space */
                            {
                                arr_26 [i_0] [i_1] [i_2] [i_2] [i_3] [(_Bool)1] = ((/* implicit */int) ((unsigned int) (unsigned char)245));
                                arr_27 [i_7] [i_3] [i_1] [i_0] = (+(((/* implicit */int) min(((_Bool)1), ((!(arr_15 [i_0] [i_1] [i_2] [i_3] [i_7])))))));
                                var_18 = ((/* implicit */short) min((((/* implicit */int) (!(((/* implicit */_Bool) 4866999978944960474LL))))), (max((((((/* implicit */_Bool) -1125899369971739LL)) ? (738976001) : (((/* implicit */int) (unsigned char)236)))), (((/* implicit */int) max((arr_9 [i_1] [i_1] [i_3] [i_3]), (((/* implicit */unsigned short) arr_3 [i_0])))))))));
                                var_19 = ((/* implicit */int) min((var_19), (var_10)));
                                var_20 = ((/* implicit */signed char) arr_20 [i_0] [(signed char)0] [(signed char)0] [i_3] [i_7]);
                            }
                            for (signed char i_8 = 0; i_8 < 11; i_8 += 4) /* same iter space */
                            {
                                arr_31 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) min(((+(max((((/* implicit */int) (_Bool)0)), (738976001))))), (((/* implicit */int) (_Bool)1))));
                                var_21 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_1) ? (arr_28 [i_0] [4] [i_2] [i_3] [i_8]) : (((/* implicit */int) arr_15 [i_0] [i_0] [i_2] [i_0] [2]))))) ? ((-(((/* implicit */int) var_5)))) : (((/* implicit */int) arr_1 [i_8]))))) ? (((/* implicit */long long int) ((/* implicit */int) min(((_Bool)1), ((_Bool)1))))) : (((((/* implicit */long long int) ((/* implicit */int) arr_0 [(unsigned char)6]))) + (((((/* implicit */long long int) ((/* implicit */int) arr_15 [i_2] [i_1] [i_2] [i_3] [i_8]))) | (arr_10 [i_0] [i_3] [i_3])))))));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    var_22 = var_5;
    var_23 = ((/* implicit */unsigned char) min((var_23), (var_4)));
}
