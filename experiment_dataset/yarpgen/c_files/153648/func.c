/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153648
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153648 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153648
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
    for (signed char i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (int i_1 = 2; i_1 < 14; i_1 += 2) 
        {
            {
                arr_4 [5U] = var_9;
                arr_5 [(unsigned char)6] [i_1] [i_0] = ((/* implicit */short) 8191U);
                var_20 = ((/* implicit */_Bool) (((-(min((var_16), (((/* implicit */int) (short)-20)))))) * (((/* implicit */int) ((arr_2 [i_0]) <= (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (int i_2 = 0; i_2 < 15; i_2 += 2) 
                {
                    arr_8 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) 1473921164262292966ULL);
                    arr_9 [(unsigned char)0] [(unsigned char)0] [i_2] [i_2] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_5)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_12))))))));
                }
                for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 2) 
                {
                    var_21 -= ((/* implicit */int) ((max((((unsigned long long int) var_9)), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_14)) * (((/* implicit */int) (short)32764))))))) != (((/* implicit */unsigned long long int) max(((-(arr_0 [i_0]))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (signed char)-49)) : (((/* implicit */int) var_1)))))))));
                    arr_13 [(short)14] [(short)14] [8] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1 + 1] [i_1 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1 - 1] [i_1 - 1]))) : (var_13)))) ? (((((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0] [i_0] [i_3] [i_0]))) : (var_6))) / (((/* implicit */unsigned long long int) ((/* implicit */int) min(((short)32751), (arr_3 [i_0] [(signed char)0] [i_0]))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [(unsigned char)12] [i_0]))))))));
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_4 = 1; i_4 < 16; i_4 += 2) 
    {
        for (short i_5 = 0; i_5 < 17; i_5 += 2) 
        {
            {
                var_22 = ((/* implicit */signed char) min((var_17), ((~(((var_7) ? (var_2) : (((/* implicit */int) arr_14 [i_4]))))))));
                /* LoopNest 2 */
                for (short i_6 = 0; i_6 < 17; i_6 += 2) 
                {
                    for (short i_7 = 2; i_7 < 14; i_7 += 2) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (unsigned char i_8 = 3; i_8 < 15; i_8 += 2) 
                            {
                                arr_26 [i_4] [i_5] [i_6] [i_4] [1U] = ((/* implicit */_Bool) (-(min((9205357638345293824ULL), (((/* implicit */unsigned long long int) (short)-2687))))));
                                arr_27 [i_4 - 1] [i_5] [i_6] [i_7] [i_8 + 1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(16ULL))))));
                            }
                            for (unsigned long long int i_9 = 1; i_9 < 14; i_9 += 2) 
                            {
                                arr_30 [i_4] [i_5] [i_9] [i_4] [i_4] [i_5] [i_9] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_4] [(unsigned char)12]))));
                                var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) var_17))));
                                arr_31 [i_4 - 1] [i_9] [i_6] = ((/* implicit */short) min(((~(min((((/* implicit */long long int) var_14)), (arr_16 [i_4 + 1] [i_5]))))), (((/* implicit */long long int) (((~(((/* implicit */int) (short)(-32767 - 1))))) / (((/* implicit */int) (short)15910)))))));
                                var_24 = ((/* implicit */unsigned long long int) (!(((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_21 [i_4 + 1] [i_6] [(signed char)7] [i_9])), (arr_15 [i_4] [0])))) >= (((((/* implicit */_Bool) var_13)) ? (9205357638345293824ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)15900)))))))));
                            }
                            arr_32 [(short)16] [3LL] [i_6] [i_6] [(signed char)13] = ((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) arr_19 [i_7 - 1] [i_4 + 1] [i_7 - 1])) ? (((/* implicit */int) (short)26576)) : (((/* implicit */int) (short)32767)))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) 
                {
                    for (long long int i_11 = 3; i_11 < 15; i_11 += 2) 
                    {
                        for (unsigned long long int i_12 = 3; i_12 < 14; i_12 += 2) 
                        {
                            {
                                var_25 = ((/* implicit */_Bool) (+(((/* implicit */int) ((short) max((((/* implicit */int) (signed char)51)), (var_4)))))));
                                var_26 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_16 [6] [i_4 + 1])) || (((/* implicit */_Bool) arr_40 [i_4 + 1]))))) << (((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))));
                            }
                        } 
                    } 
                } 
                var_27 += ((/* implicit */unsigned long long int) (-(3368525477U)));
            }
        } 
    } 
}
