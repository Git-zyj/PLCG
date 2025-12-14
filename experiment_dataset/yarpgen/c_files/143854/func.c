/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143854
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143854 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143854
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
    for (unsigned char i_0 = 3; i_0 < 12; i_0 += 4) 
    {
        for (unsigned int i_1 = 4; i_1 < 13; i_1 += 2) 
        {
            {
                var_12 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_0 [i_0 - 2]))));
                /* LoopSeq 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) max((((/* implicit */int) arr_4 [(_Bool)1] [(short)1] [i_1 - 1])), (((((/* implicit */_Bool) ((arr_4 [i_0] [i_1 - 2] [i_1 - 2]) ? ((-2147483647 - 1)) : (((/* implicit */int) var_11))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) : (((/* implicit */int) (unsigned char)98)))))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (long long int i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) var_3))));
                        /* LoopSeq 3 */
                        for (short i_4 = 2; i_4 < 14; i_4 += 2) 
                        {
                            var_15 = ((/* implicit */long long int) var_9);
                            var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [i_0 - 1])) ? (arr_3 [i_0 - 3]) : (arr_3 [i_0 - 3])));
                        }
                        for (int i_5 = 0; i_5 < 15; i_5 += 2) 
                        {
                            var_17 = ((/* implicit */unsigned long long int) (((((-2147483647 - 1)) % (((/* implicit */int) (signed char)-110)))) - ((+(((/* implicit */int) var_4))))));
                            var_18 = ((/* implicit */unsigned short) (+(((((/* implicit */int) (_Bool)0)) + (((/* implicit */int) arr_12 [(unsigned char)7] [(unsigned char)7]))))));
                        }
                        for (signed char i_6 = 4; i_6 < 13; i_6 += 4) 
                        {
                            var_19 = ((/* implicit */long long int) (-(var_3)));
                            var_20 = ((/* implicit */_Bool) arr_17 [i_0] [i_1] [i_2] [(signed char)4] [i_0]);
                            var_21 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_1 [i_0 - 1] [(unsigned short)9]))));
                            var_22 = ((/* implicit */long long int) ((((/* implicit */unsigned int) arr_3 [i_0 + 3])) * ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (arr_15 [i_0 + 3] [i_0 - 1] [i_0 - 1] [i_0] [i_0])))));
                        }
                    }
                }
                for (long long int i_7 = 0; i_7 < 15; i_7 += 3) 
                {
                    var_23 = ((/* implicit */short) min((((((/* implicit */int) (signed char)113)) << (((((/* implicit */int) ((unsigned short) 6852497642455468995ULL))) - (35779))))), (((/* implicit */int) ((unsigned short) arr_16 [i_7] [i_1] [i_0 + 1] [i_1 + 2] [i_1 - 1])))));
                    var_24 = ((/* implicit */signed char) max((((/* implicit */unsigned int) max((((/* implicit */int) ((signed char) 609173662U))), (((((/* implicit */_Bool) (unsigned char)98)) ? (((/* implicit */int) arr_18 [i_0] [i_1 - 3] [i_7] [i_7] [9LL] [i_0 + 2] [i_7])) : (((/* implicit */int) (signed char)104))))))), (min((max((var_3), (((/* implicit */unsigned int) arr_9 [i_0 - 1])))), (((arr_4 [i_0 + 1] [i_0 + 1] [i_7]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0 + 1] [2ULL]))) : (arr_15 [i_0 + 3] [i_0 + 1] [i_1 + 1] [(signed char)6] [(signed char)10])))))));
                }
                for (int i_8 = 2; i_8 < 14; i_8 += 2) 
                {
                    var_25 = ((/* implicit */unsigned short) (+(((unsigned int) arr_15 [i_0] [i_1 - 4] [i_8 - 1] [i_8 - 1] [i_1]))));
                    var_26 = ((/* implicit */unsigned short) 0ULL);
                }
                var_27 = ((/* implicit */unsigned short) min((max((var_6), (((/* implicit */long long int) var_1)))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_16 [i_1 - 3] [i_1] [i_1 - 4] [i_1 + 2] [i_1 - 1])) ? (4294967284U) : (arr_16 [i_1] [i_1 - 1] [i_1] [i_1 + 2] [i_1 + 1]))))));
                var_28 = ((/* implicit */signed char) ((((/* implicit */int) ((unsigned short) arr_9 [i_0 + 2]))) >> (((((((((/* implicit */_Bool) 12U)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_24 [i_0 - 1] [i_0 + 1])))) + (var_5))) + (398221722)))));
                var_29 = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((signed char) (_Bool)1))), (var_6)));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned short i_9 = 2; i_9 < 8; i_9 += 4) 
    {
        var_30 = ((/* implicit */_Bool) var_3);
        var_31 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) ((unsigned long long int) arr_6 [i_9] [i_9] [i_9] [i_9 - 1]))) ? (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (signed char)(-127 - 1))))) : ((+(((/* implicit */int) arr_12 [i_9] [i_9]))))))));
        /* LoopNest 3 */
        for (short i_10 = 0; i_10 < 10; i_10 += 2) 
        {
            for (short i_11 = 0; i_11 < 10; i_11 += 2) 
            {
                for (short i_12 = 0; i_12 < 10; i_12 += 3) 
                {
                    {
                        var_32 = ((/* implicit */short) (((!(((/* implicit */_Bool) arr_28 [i_9] [i_10] [i_9 - 2])))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) var_6)) == (arr_25 [i_9 - 2] [i_9 - 2] [i_11] [11])))) : ((+(arr_3 [i_9 + 1])))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_13 = 1; i_13 < 8; i_13 += 1) 
                        {
                            var_33 = ((/* implicit */signed char) max((var_33), (((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) * (arr_29 [i_10]))) + (((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((arr_0 [(_Bool)1]) && (((/* implicit */_Bool) arr_33 [8LL] [i_11] [i_10]))))), (((((/* implicit */_Bool) arr_5 [i_9 - 1] [i_9 - 1] [i_11])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (8392647545230226646LL)))))))))));
                            var_34 = ((/* implicit */unsigned short) min((((/* implicit */int) (_Bool)1)), (((((/* implicit */_Bool) var_7)) ? (arr_8 [i_9] [i_9 + 1] [i_13 - 1]) : ((+(((/* implicit */int) (_Bool)0))))))));
                            var_35 += max((((((/* implicit */unsigned long long int) ((((-3941309733743834340LL) + (9223372036854775807LL))) >> (((((/* implicit */int) var_0)) - (10981)))))) - ((~(var_9))))), (((/* implicit */unsigned long long int) var_4)));
                        }
                    }
                } 
            } 
        } 
    }
}
