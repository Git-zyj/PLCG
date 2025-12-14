/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176328
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176328 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176328
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
    var_10 |= ((/* implicit */int) 3407283268U);
    var_11 *= ((/* implicit */unsigned char) var_3);
    var_12 -= ((/* implicit */unsigned short) min((var_8), (((/* implicit */unsigned int) (-(var_2))))));
    var_13 -= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)34245))) * (1782488537997465543ULL)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (int i_1 = 2; i_1 < 10; i_1 += 4) 
        {
            {
                var_14 |= ((/* implicit */signed char) ((int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_3 [i_1 - 2] [i_1 - 2])))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned int i_3 = 2; i_3 < 8; i_3 += 2) 
                    {
                        {
                            var_15 *= ((/* implicit */unsigned int) ((((arr_7 [i_2] [(_Bool)1] [i_2] [i_1 - 1] [i_1] [i_1]) ? (min((((/* implicit */unsigned long long int) 3309257307U)), (16332467861936337470ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_3])))))))) % (((/* implicit */unsigned long long int) ((long long int) var_9)))));
                            var_16 += ((/* implicit */_Bool) arr_5 [8] [i_3] [i_1]);
                            var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) ((((((arr_6 [i_0] [i_1] [i_2] [i_3]) + (9223372036854775807LL))) << (((((int) arr_8 [i_3] [i_2] [i_1 + 1] [i_1 + 1] [i_0])) - (21015))))) == (((/* implicit */long long int) max((arr_0 [i_1 - 1]), (min((-1), (((/* implicit */int) arr_3 [i_0] [i_1]))))))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_4 = 0; i_4 < 11; i_4 += 2) 
                {
                    for (unsigned int i_5 = 1; i_5 < 8; i_5 += 1) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (unsigned int i_6 = 1; i_6 < 10; i_6 += 1) 
                            {
                                arr_17 [i_5] &= ((((/* implicit */int) min((arr_9 [i_5 + 1] [i_5 - 1] [i_5 + 2] [i_5 - 1]), (arr_9 [i_5 - 1] [i_5 + 1] [i_5 + 3] [i_5 + 3])))) >> (((min((var_7), (((/* implicit */unsigned int) arr_9 [i_5 + 1] [i_5 - 1] [i_5 - 1] [i_5 + 2])))) - (136U))));
                                var_18 *= ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) var_7)))) > (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)11)) >> (((((/* implicit */int) arr_13 [i_0] [i_1 - 2] [i_6] [i_5] [i_6] [i_6])) - (16)))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_6] [(signed char)2] [i_0] [i_0]))) : ((-(var_1)))))));
                                arr_18 [i_0] [i_1] [i_4] [(signed char)3] [i_6 + 1] |= ((/* implicit */long long int) var_9);
                            }
                            /* vectorizable */
                            for (signed char i_7 = 1; i_7 < 9; i_7 += 2) 
                            {
                                var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) var_7))));
                                var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) 337454278U))) ? (((/* implicit */int) ((((/* implicit */int) (short)25839)) < (((/* implicit */int) arr_19 [(unsigned short)3] [(unsigned short)3] [(unsigned short)1] [i_4] [i_5] [i_7 - 1]))))) : (var_9))))));
                                var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) 32767U))));
                            }
                            arr_21 [i_0] [i_0] [i_1] [i_1] [i_4] [i_5] |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)34023))))) ? (((/* implicit */long long int) min((var_6), (((/* implicit */int) var_4))))) : (((((/* implicit */_Bool) (short)11843)) ? (var_1) : (((/* implicit */long long int) var_6))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0]))) : (1358992927U)));
                            var_22 = ((/* implicit */unsigned int) min((var_22), (var_3)));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned int i_8 = 0; i_8 < 11; i_8 += 1) 
                {
                    for (unsigned long long int i_9 = 0; i_9 < 11; i_9 += 1) 
                    {
                        for (unsigned int i_10 = 2; i_10 < 9; i_10 += 1) 
                        {
                            {
                                var_23 *= ((/* implicit */int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) arr_16 [i_10 - 1] [i_10 + 2] [i_1 + 1] [i_1 + 1] [i_1 - 2] [i_1]))))), (((((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), (arr_13 [i_0] [i_0] [(unsigned short)9] [i_8] [i_9] [i_10 + 1]))))) & (((((/* implicit */_Bool) -1584092857682881456LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_0] [i_0] [i_0] [i_9] [i_10] [i_10 - 2]))) : (var_7)))))));
                                var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) (-(min((var_8), (arr_11 [i_10 + 2] [i_10 - 2] [(short)8] [i_10 - 2] [i_10]))))))));
                                arr_32 [i_0] [i_0] [i_0] &= ((/* implicit */unsigned short) var_3);
                            }
                        } 
                    } 
                } 
                arr_33 [i_0] [i_0] [4LL] &= ((/* implicit */int) var_1);
            }
        } 
    } 
}
