/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144694
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144694 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144694
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
    for (short i_0 = 2; i_0 < 21; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned int i_2 = 1; i_2 < 20; i_2 += 1) /* same iter space */
                {
                    arr_8 [i_0 + 1] [(_Bool)1] [(unsigned short)14] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) arr_5 [i_0 - 1] [(signed char)18])) ? (((/* implicit */int) arr_5 [i_1] [i_0])) : (((/* implicit */int) arr_2 [i_1])))))) ? (max((arr_0 [i_0 + 1] [i_1]), (arr_0 [i_0 - 1] [i_1]))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_1])) ? (var_13) : (((/* implicit */unsigned long long int) arr_0 [i_1] [i_1]))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) (signed char)113)), (arr_1 [i_0 + 1])))) : (((/* implicit */int) arr_7 [i_1] [i_2 + 1]))))));
                    var_17 = ((/* implicit */signed char) arr_1 [i_0]);
                    arr_9 [i_0 + 1] [i_1] [i_2 - 1] = ((/* implicit */int) (!(((/* implicit */_Bool) -3738473505127452994LL))));
                }
                for (unsigned int i_3 = 1; i_3 < 20; i_3 += 1) /* same iter space */
                {
                    var_18 = ((/* implicit */unsigned short) arr_12 [i_1] [i_1]);
                    var_19 |= ((/* implicit */unsigned int) ((int) ((((var_0) != (((/* implicit */long long int) var_16)))) ? (((/* implicit */int) arr_1 [i_3 - 1])) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned short)12)) : (((/* implicit */int) arr_12 [i_1] [i_1])))))));
                }
                for (unsigned int i_4 = 1; i_4 < 20; i_4 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 22; i_5 += 4) 
                    {
                        for (unsigned int i_6 = 3; i_6 < 20; i_6 += 3) 
                        {
                            {
                                arr_22 [i_0 - 1] [i_0] [i_0 + 1] [i_0] [i_4] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))));
                                var_20 -= ((/* implicit */int) arr_18 [i_1] [i_4 + 2] [i_5] [i_1]);
                                var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((min((-3738473505127452994LL), (((/* implicit */long long int) var_6)))), (((/* implicit */long long int) arr_7 [i_0 - 2] [i_1]))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-116)) ? ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)61242)))) : (((/* implicit */int) arr_11 [i_0 + 1] [i_4 + 2] [i_4]))))) : ((-(766018802U)))));
                                arr_23 [7U] [i_4] [i_4] [i_5] [i_4] [i_6 - 1] = ((/* implicit */unsigned long long int) min((((/* implicit */int) min((arr_16 [i_4 + 1] [i_0 - 2] [i_0 - 1] [(unsigned short)14]), (arr_16 [i_4 + 2] [i_0 + 1] [i_0] [i_0])))), (((((/* implicit */_Bool) arr_3 [i_4 - 1] [i_6 + 2] [i_0 - 2])) ? (((/* implicit */int) (unsigned char)193)) : (((/* implicit */int) arr_16 [i_4 + 1] [i_0 + 1] [i_0 - 2] [(unsigned short)15]))))));
                            }
                        } 
                    } 
                    arr_24 [i_4] [(unsigned short)13] [i_4] = ((/* implicit */int) arr_19 [i_4 + 1] [i_4] [i_4] [i_1] [i_0]);
                    arr_25 [i_4 - 1] [i_1] [i_1] [i_0 + 1] |= ((/* implicit */int) ((((((/* implicit */_Bool) arr_18 [i_4 + 1] [(unsigned short)4] [i_0 - 2] [i_4])) ? (((/* implicit */int) arr_2 [i_0 - 1])) : (((/* implicit */int) arr_18 [i_4 + 1] [i_4] [i_0 + 1] [i_4])))) < (((((/* implicit */_Bool) arr_13 [i_4 + 2] [i_0 + 1] [i_0 - 1] [i_0 - 2])) ? (((/* implicit */int) arr_13 [i_4 + 2] [i_0 - 2] [i_0 - 1] [i_0 - 1])) : (((/* implicit */int) arr_13 [i_4 + 1] [i_0 - 2] [i_0 - 1] [i_0 + 1]))))));
                    /* LoopNest 2 */
                    for (unsigned short i_7 = 0; i_7 < 22; i_7 += 2) 
                    {
                        for (unsigned short i_8 = 0; i_8 < 22; i_8 += 4) 
                        {
                            {
                                var_22 = ((/* implicit */int) max(((unsigned short)61242), (((/* implicit */unsigned short) (unsigned char)0))));
                                arr_30 [i_0] [i_0] [i_4] [i_4] [(unsigned char)0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~((-(arr_17 [i_0] [i_4])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_7 [i_0 - 2] [i_4 - 1])) < ((-(743818378))))))) : (arr_19 [i_0 - 2] [i_1] [i_4] [i_8] [i_8])));
                            }
                        } 
                    } 
                }
                arr_31 [i_1] &= ((/* implicit */long long int) max((((/* implicit */unsigned int) var_3)), (min((215891837U), (((/* implicit */unsigned int) (unsigned short)63150))))));
                arr_32 [i_1] [i_0 + 1] = ((/* implicit */unsigned int) (_Bool)1);
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned short) (-(min((-1106090754), (((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) var_2)))))))));
}
