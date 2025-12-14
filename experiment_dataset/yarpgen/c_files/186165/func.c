/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186165
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186165 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186165
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
    for (long long int i_0 = 2; i_0 < 16; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 20; i_2 += 3) 
                {
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 20; i_4 += 3) 
                        {
                            {
                                var_12 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_8 [i_0 + 1] [i_0 + 1] [i_3] [i_0 + 4])))) ? (((/* implicit */int) ((_Bool) arr_1 [i_0 + 4]))) : ((+(((((/* implicit */_Bool) 201326592)) ? (98551050) : (((/* implicit */int) var_6))))))));
                                var_13 ^= -1;
                                var_14 = ((/* implicit */int) ((((((((/* implicit */_Bool) var_3)) ? (arr_6 [i_0 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_4]))))) != (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_1] [i_2] [i_3] [i_3])) ? (((/* implicit */int) var_6)) : (var_8)))))) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_1 [i_0]))))) : (((var_2) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)32)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)223))) : (3582865705U)))) : (((long long int) var_3))))));
                                var_15 = ((/* implicit */unsigned short) (~(712101591U)));
                            }
                        } 
                    } 
                } 
                var_16 = ((/* implicit */unsigned long long int) var_10);
                /* LoopSeq 3 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                {
                    var_17 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) ((var_4) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_4 [i_0 - 1] [i_0]))))) ? ((~(712101596U))) : (((unsigned int) arr_15 [i_0]))))));
                    var_18 = ((/* implicit */unsigned int) ((unsigned long long int) max((((/* implicit */long long int) ((int) arr_3 [i_0] [12]))), (((arr_16 [16LL] [i_1]) / (((/* implicit */long long int) var_8)))))));
                    var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) ((int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_3)) ^ (arr_14 [i_0] [i_0] [i_0] [i_0])))) ? (((/* implicit */int) ((712101591U) == (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)22)))))) : (((((/* implicit */_Bool) arr_15 [i_0])) ? (((/* implicit */int) (_Bool)0)) : (arr_7 [i_0] [i_1] [i_1] [i_5])))))))));
                    arr_17 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) var_6);
                }
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                {
                    var_20 = ((/* implicit */unsigned long long int) max((3582865705U), (((/* implicit */unsigned int) (unsigned char)21))));
                    var_21 ^= ((/* implicit */int) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_15 [i_0 + 3]))))) % (min((((/* implicit */unsigned long long int) (~(712101592U)))), (arr_9 [i_0 + 2] [i_1] [(_Bool)1] [i_1] [i_1])))));
                    /* LoopNest 2 */
                    for (unsigned char i_7 = 0; i_7 < 20; i_7 += 3) 
                    {
                        for (int i_8 = 2; i_8 < 17; i_8 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(arr_23 [i_0 - 1] [i_1] [(unsigned char)10] [i_0 - 1] [i_8])))) ? (((((/* implicit */_Bool) arr_0 [9LL])) ? (((/* implicit */unsigned long long int) arr_7 [i_7] [i_7] [i_1] [i_0 + 3])) : (arr_5 [8] [i_1] [4] [11U]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_6))))))) ? (((((/* implicit */_Bool) ((unsigned long long int) var_6))) ? (arr_5 [i_7] [i_6] [i_1] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))))) : (((268435455ULL) * (((/* implicit */unsigned long long int) 4294967282U)))))))));
                                var_23 = ((/* implicit */long long int) ((((unsigned int) ((((/* implicit */_Bool) arr_18 [i_0] [i_0] [i_6])) ? (((/* implicit */unsigned long long int) -4745300124552523180LL)) : (arr_9 [i_0] [i_1] [i_6] [i_1] [i_7])))) * (((((/* implicit */_Bool) arr_22 [i_0] [12U] [13ULL])) ? (arr_25 [14LL] [i_0] [14LL] [i_0] [i_0] [i_0 + 3] [i_0 + 4]) : (arr_26 [i_0] [i_0] [i_0] [i_0] [i_0])))));
                            }
                        } 
                    } 
                }
                for (int i_9 = 2; i_9 < 19; i_9 += 2) 
                {
                    arr_29 [i_0] [i_0] [i_9] = ((/* implicit */unsigned char) ((((int) arr_18 [i_9 + 1] [i_9 + 1] [i_9])) != (((((/* implicit */_Bool) arr_8 [i_9] [i_9 - 1] [i_1] [i_9 + 1])) ? (arr_18 [i_9] [i_9 - 1] [i_9]) : (((/* implicit */int) var_10))))));
                    /* LoopNest 2 */
                    for (long long int i_10 = 3; i_10 < 19; i_10 += 3) 
                    {
                        for (unsigned char i_11 = 3; i_11 < 17; i_11 += 1) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) var_1))));
                                var_25 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_25 [i_11 - 2] [i_11] [i_11] [i_11 - 2] [i_11 - 2] [i_11] [i_11])) ? (arr_25 [i_11 - 2] [i_11] [i_11] [i_11] [i_11] [i_11] [i_11]) : (arr_25 [i_11 - 2] [i_11] [i_11] [i_11 + 3] [(unsigned char)16] [i_11] [i_11 - 2])))) / ((~(var_3)))));
                                var_26 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1873542767)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)21))))) ? ((-(arr_2 [i_9] [i_11 + 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    /* LoopSeq 1 */
    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
    {
        var_27 = arr_34 [i_12];
        arr_36 [i_12] [i_12] = ((/* implicit */long long int) ((_Bool) var_5));
    }
    var_28 = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((unsigned char) var_10))), (min((((((/* implicit */_Bool) var_3)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))))), (((/* implicit */unsigned long long int) ((long long int) var_6)))))));
    var_29 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((var_4) ? (var_3) : (((/* implicit */long long int) var_9))))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_2)))) : (min((((/* implicit */int) (_Bool)1)), (452970501)))))) : (((((/* implicit */_Bool) ((int) var_7))) ? (var_3) : (((long long int) var_1))))));
}
