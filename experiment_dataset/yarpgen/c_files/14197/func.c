/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14197
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14197 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14197
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
    var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) ((long long int) ((((/* implicit */long long int) var_12)) <= (((((/* implicit */_Bool) 16)) ? (var_9) : (var_9)))))))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_6 [i_0] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [(_Bool)1] [(_Bool)1])) ? (arr_1 [i_0] [i_1]) : (arr_1 [i_0] [18U])))) ? (((/* implicit */unsigned long long int) var_7)) : (max((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)7977))) & (arr_0 [i_0] [i_1]))), (((/* implicit */unsigned long long int) (+(var_5))))))));
            var_16 = ((/* implicit */unsigned short) arr_3 [i_1]);
        }
        arr_7 [(signed char)24] = ((/* implicit */unsigned char) max(((~(max((var_9), (((/* implicit */long long int) arr_1 [i_0] [(signed char)10])))))), (arr_3 [i_0])));
        /* LoopNest 2 */
        for (unsigned int i_2 = 0; i_2 < 25; i_2 += 3) 
        {
            for (unsigned int i_3 = 0; i_3 < 25; i_3 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 0; i_4 < 25; i_4 += 1) 
                    {
                        for (long long int i_5 = 4; i_5 < 23; i_5 += 2) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned char) (unsigned short)7977);
                                arr_19 [i_5] [i_4] [i_3] [i_2] [i_2] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_5])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [i_5 + 2] [i_2] [i_3] [i_5 + 2] [i_5 + 2])) ? (((/* implicit */int) ((arr_11 [4ULL] [i_2] [i_2] [i_4]) <= (((/* implicit */long long int) ((/* implicit */int) var_4)))))) : (((/* implicit */int) arr_9 [(signed char)17]))))) : (var_5)));
                                arr_20 [i_2] [i_2] = ((/* implicit */unsigned short) arr_2 [i_0]);
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */_Bool) arr_3 [i_0]);
                }
            } 
        } 
        arr_21 [i_0] [i_0] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_17 [i_0] [i_0]))) % (((((/* implicit */long long int) var_7)) + (var_5)))))) ? (max((var_5), (((/* implicit */long long int) arr_1 [i_0] [i_0])))) : (((/* implicit */long long int) ((/* implicit */int) ((2952291662211356180LL) >= (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))));
    }
    for (unsigned short i_6 = 1; i_6 < 15; i_6 += 3) /* same iter space */
    {
        var_19 = ((/* implicit */long long int) ((((/* implicit */int) arr_12 [i_6] [i_6 + 3])) < (((/* implicit */int) arr_12 [i_6] [i_6 + 3]))));
        /* LoopSeq 2 */
        for (unsigned char i_7 = 1; i_7 < 14; i_7 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_8 = 0; i_8 < 18; i_8 += 4) 
            {
                arr_29 [i_6 + 2] [i_6 + 2] &= ((/* implicit */unsigned int) arr_23 [i_6 + 1] [i_7 + 2]);
                arr_30 [i_7] [i_6] = ((/* implicit */long long int) ((((arr_11 [i_6] [i_7] [i_8] [i_7]) == (((/* implicit */long long int) arr_15 [i_6 + 1] [i_6 + 1] [i_6 + 1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) (!(var_11)))), (arr_12 [i_6 + 3] [i_6 + 3]))))) : (var_12)));
            }
            arr_31 [i_6] = ((/* implicit */short) (-((+(2383714084U)))));
            var_20 &= var_13;
            var_21 &= ((/* implicit */int) ((arr_0 [i_6] [i_7 + 4]) << (((((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) - (3298185638U)))));
        }
        for (long long int i_9 = 1; i_9 < 15; i_9 += 4) 
        {
            var_22 = ((/* implicit */unsigned char) ((signed char) max((arr_11 [i_9] [i_9] [i_9 + 3] [i_9 + 3]), (((/* implicit */long long int) (unsigned short)7983)))));
            /* LoopSeq 1 */
            for (unsigned int i_10 = 0; i_10 < 18; i_10 += 1) 
            {
                var_23 &= ((/* implicit */short) min((((arr_34 [i_6 - 1] [i_9 + 3] [i_6 - 1] [i_6 - 1]) ? (arr_5 [i_6 + 1] [i_9 + 1] [i_10]) : (((-2952291662211356205LL) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))), (((long long int) ((arr_34 [i_10] [i_6] [i_6] [i_6 - 1]) ? (var_6) : (arr_35 [i_6] [i_9 + 2] [i_9 + 2] [i_10]))))));
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 18; i_11 += 4) 
                {
                    for (int i_12 = 3; i_12 < 16; i_12 += 2) 
                    {
                        {
                            var_24 = ((/* implicit */_Bool) (-(var_8)));
                            var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((max((((/* implicit */long long int) (_Bool)1)), (var_14))), (((/* implicit */long long int) arr_12 [i_11] [i_6]))))) ? (arr_1 [i_11] [i_12]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_9])))));
                            var_26 = ((long long int) ((((unsigned int) var_0)) % (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)56954))) + (var_2)))));
                        }
                    } 
                } 
            }
            arr_42 [i_6] = ((/* implicit */unsigned char) min((((var_7) | (arr_36 [i_6] [i_9 + 2] [14] [i_6 - 1]))), (((arr_36 [i_6] [i_9 + 2] [4LL] [i_6 - 1]) >> (((arr_36 [i_6] [i_9 + 2] [(unsigned short)10] [i_6 - 1]) - (321086158)))))));
            var_27 = ((/* implicit */signed char) min((max((arr_11 [i_9 + 3] [i_9] [i_6 + 1] [i_6]), (((/* implicit */long long int) var_13)))), (((((/* implicit */_Bool) arr_12 [i_6 + 1] [i_6])) ? (arr_11 [i_9 + 3] [i_6] [i_6 + 1] [i_6]) : (arr_11 [i_9 + 3] [i_9] [i_6 + 1] [i_6])))));
        }
        var_28 = ((/* implicit */int) max((var_28), (((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_37 [i_6] [i_6] [i_6] [i_6]))) & (0LL)))) ? (0LL) : (((/* implicit */long long int) 2147483647)))) & (((/* implicit */long long int) ((/* implicit */int) arr_34 [i_6] [i_6] [2] [i_6]))))))));
    }
    for (unsigned short i_13 = 1; i_13 < 15; i_13 += 3) /* same iter space */
    {
        var_29 = ((/* implicit */unsigned char) max((var_29), (((/* implicit */unsigned char) max((((((/* implicit */_Bool) min(((short)-24527), (((/* implicit */short) (_Bool)1))))) ? (((((/* implicit */_Bool) -2952291662211356209LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_1))) : (((/* implicit */long long int) var_13)))), (((((/* implicit */_Bool) arr_16 [(signed char)13] [i_13 + 1] [i_13] [i_13 + 3] [i_13 + 1] [i_13 + 1])) ? (arr_16 [i_13 + 3] [i_13 + 3] [i_13] [i_13 + 2] [2U] [i_13 + 2]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)178))))))))));
        var_30 &= ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) ((17744897U) == (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))))) ? (max((-9052520887832243573LL), (arr_8 [i_13] [i_13 + 2]))) : (0LL)));
        var_31 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -13LL)) ? (17744897U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_13])))))) ? (((/* implicit */long long int) max((max((17744897U), (((/* implicit */unsigned int) var_7)))), (((/* implicit */unsigned int) arr_39 [i_13 + 2] [i_13] [i_13 + 2] [i_13 + 2] [(unsigned char)14]))))) : (arr_33 [i_13 + 2] [i_13 - 1])));
    }
    var_32 = ((/* implicit */unsigned char) max((var_32), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) ((var_2) < (var_2)))) : (var_13))))));
    var_33 = ((/* implicit */short) min((((/* implicit */int) ((((_Bool) 11248643456112793399ULL)) || (((/* implicit */_Bool) (short)8176))))), ((~(((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) (short)6649)))))))));
}
