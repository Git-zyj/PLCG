/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115946
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115946 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115946
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
    for (unsigned char i_0 = 4; i_0 < 18; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 16; i_1 += 2) 
        {
            {
                var_12 = ((/* implicit */unsigned long long int) min(((+(((/* implicit */int) arr_0 [i_0 - 2])))), (((/* implicit */int) arr_3 [i_0 - 2]))));
                arr_4 [i_0] [i_0 - 3] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) min((arr_0 [i_1 + 3]), (arr_2 [i_0] [i_0 - 3])))) : (((/* implicit */int) arr_0 [i_0]))))));
                /* LoopNest 3 */
                for (long long int i_2 = 3; i_2 < 18; i_2 += 3) 
                {
                    for (unsigned short i_3 = 1; i_3 < 18; i_3 += 3) 
                    {
                        for (signed char i_4 = 1; i_4 < 18; i_4 += 4) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned long long int) (~((~(arr_12 [i_3] [i_1] [i_2 - 2] [i_3] [i_0 + 1])))));
                                arr_14 [i_0 - 1] [i_0 - 1] [i_0 - 1] = ((/* implicit */int) (!(((/* implicit */_Bool) max((max((4046408431U), (((/* implicit */unsigned int) (signed char)62)))), (((/* implicit */unsigned int) (unsigned short)14336)))))));
                                var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) ((((((((/* implicit */_Bool) arr_6 [i_0 + 1] [i_1] [i_0 + 1] [(unsigned short)18])) ? (arr_11 [i_0] [i_0] [i_2 - 2] [i_1 - 1] [i_0] [(signed char)7]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_3 - 1]))))) >= (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0 - 2] [i_2 + 1]))))) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_1 [i_0 - 2])), (arr_2 [i_2 + 1] [i_1 - 1]))))) : (min((max((((/* implicit */long long int) arr_0 [(signed char)13])), (arr_12 [i_4] [i_3] [i_0 - 2] [i_1] [i_0 - 2]))), (min((1887933656952684344LL), (((/* implicit */long long int) (signed char)124)))))))))));
                                arr_15 [i_4 + 1] [i_3 + 1] [i_2] [i_0] [i_0 - 1] [i_0] = ((max((((/* implicit */long long int) max((((/* implicit */signed char) arr_1 [i_0])), (arr_7 [i_0] [i_1])))), (min((arr_10 [i_0] [i_1] [(short)7]), (((/* implicit */long long int) arr_7 [i_4 + 1] [(unsigned char)5])))))) >= (((((/* implicit */_Bool) ((arr_8 [i_0 + 1] [i_1] [(_Bool)1] [i_1] [i_1] [i_1 + 3]) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_2] [i_0])))))) ? (((8286104509304984452LL) >> (((((/* implicit */int) (unsigned short)5647)) - (5640))))) : (((((/* implicit */_Bool) arr_7 [i_3 - 1] [i_0])) ? (arr_11 [i_4 + 1] [(signed char)6] [i_0] [i_2] [i_0] [i_0]) : (((/* implicit */long long int) arr_8 [i_4 + 1] [i_1 + 3] [i_2] [i_1] [i_1 + 3] [i_0 - 4])))))));
                                arr_16 [(signed char)18] [i_3 - 1] [i_0] [i_0] [i_0] &= ((/* implicit */unsigned int) ((arr_5 [i_3 - 1] [i_1 + 3]) >= ((~(arr_9 [i_4 - 1] [i_4 - 1])))));
                            }
                        } 
                    } 
                } 
                arr_17 [i_0 - 1] [i_0 - 1] = ((/* implicit */_Bool) ((((((/* implicit */int) ((1887933656952684344LL) >= (-8286104509304984451LL)))) >= ((~(((/* implicit */int) (unsigned short)5672)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_0]))) : (min((max((((/* implicit */unsigned long long int) arr_3 [6ULL])), (arr_13 [17] [i_1] [i_1] [i_1] [i_1 + 3] [i_1 - 1] [i_1 + 3]))), (((/* implicit */unsigned long long int) max((arr_3 [i_1]), (arr_3 [i_0 - 3]))))))));
                var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((arr_13 [i_0] [i_0] [i_0 - 4] [i_0] [i_0] [i_0] [(unsigned short)11]) >= (arr_9 [i_0 + 1] [i_0 + 1]))) ? (((/* implicit */int) arr_2 [i_1] [i_0])) : (((/* implicit */int) max((arr_6 [i_0 - 2] [i_1] [14U] [14U]), (((/* implicit */signed char) arr_1 [i_0])))))))) ? (max((max((arr_10 [i_0] [i_0] [i_1 - 1]), (((/* implicit */long long int) arr_7 [i_0] [i_0])))), (((((/* implicit */_Bool) arr_13 [i_1 - 1] [i_0 - 1] [i_1 - 1] [i_0] [i_1 - 1] [i_1] [(signed char)9])) ? (arr_11 [i_1] [i_0 - 4] [i_0 - 4] [i_0 - 4] [i_0 - 4] [i_0 - 4]) : (arr_10 [i_0 + 1] [i_0 + 1] [i_1 + 1]))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_3 [i_1 - 1])) >= (((/* implicit */int) arr_3 [i_1 + 1]))))))));
            }
        } 
    } 
    var_16 &= ((/* implicit */unsigned int) max((min((max((var_10), (var_1))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) (unsigned char)27))))))), ((-(((((/* implicit */_Bool) var_10)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))))));
    var_17 = ((/* implicit */_Bool) ((((((/* implicit */int) (unsigned char)5)) >= (var_3))) ? ((-(min((var_7), (((/* implicit */unsigned int) var_9)))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))));
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 22; i_5 += 1) 
    {
        for (short i_6 = 0; i_6 < 22; i_6 += 2) 
        {
            {
                var_18 *= ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-2203)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))))), (max((arr_21 [i_5] [i_6]), (((/* implicit */unsigned long long int) arr_22 [i_5] [i_5]))))));
                /* LoopNest 2 */
                for (long long int i_7 = 0; i_7 < 22; i_7 += 2) 
                {
                    for (signed char i_8 = 3; i_8 < 21; i_8 += 3) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (unsigned long long int i_9 = 0; i_9 < 22; i_9 += 2) 
                            {
                                var_19 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */int) arr_24 [i_5] [i_5] [0U] [0U])) + (((/* implicit */int) arr_22 [i_5] [i_5]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned char) arr_27 [i_9] [i_6] [i_9] [i_8] [i_8])), (arr_19 [i_5]))))) : (max((arr_28 [i_5] [i_6] [i_7] [i_6] [i_9]), (((/* implicit */unsigned long long int) arr_24 [(unsigned char)21] [i_5] [14LL] [i_5])))))) - (((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) - (489422616U))) + (((/* implicit */unsigned int) ((arr_18 [i_5]) - (((/* implicit */int) arr_22 [i_5] [i_6]))))))))));
                                var_20 += ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */int) arr_24 [i_6] [19LL] [i_8 - 1] [i_8 - 3])) >= (min((((/* implicit */int) arr_25 [i_5] [i_5] [(short)15])), (arr_18 [i_9]))))))));
                            }
                            var_21 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [i_5] [i_5] [i_5] [10LL] [i_8 - 3])) ? (arr_23 [i_8] [i_6] [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_5] [i_5])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_24 [8LL] [i_6] [14ULL] [i_6]), (arr_26 [i_5] [i_5]))))) : (((((/* implicit */_Bool) arr_20 [i_7])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_5] [i_5]))) : (arr_29 [i_5] [i_5] [i_7] [i_8 - 2] [i_8 - 2] [i_7] [i_7]))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
