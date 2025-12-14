/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110467
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110467 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110467
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
    var_12 = ((unsigned char) max((((((/* implicit */unsigned int) ((/* implicit */int) var_10))) & (var_7))), (((/* implicit */unsigned int) var_9))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (unsigned int i_1 = 3; i_1 < 13; i_1 += 4) 
        {
            {
                var_13 = ((/* implicit */long long int) var_8);
                /* LoopSeq 1 */
                for (long long int i_2 = 0; i_2 < 15; i_2 += 3) 
                {
                    arr_7 [i_0] [1LL] [i_1] = ((/* implicit */unsigned char) (((+(0ULL))) != (((/* implicit */unsigned long long int) (+(arr_4 [i_1] [i_1 - 2] [i_1 + 1]))))));
                    /* LoopSeq 1 */
                    for (long long int i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        var_14 |= ((/* implicit */long long int) max((min((var_1), (((/* implicit */unsigned short) var_2)))), (((/* implicit */unsigned short) min((((_Bool) var_5)), (((((/* implicit */unsigned int) ((/* implicit */int) var_9))) != (var_7))))))));
                        var_15 = ((/* implicit */short) min((arr_3 [i_0] [i_3] [i_1 - 1]), (((/* implicit */int) (!((!(((/* implicit */_Bool) var_11)))))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_4 = 3; i_4 < 13; i_4 += 2) 
                    {
                        for (unsigned short i_5 = 0; i_5 < 15; i_5 += 3) 
                        {
                            {
                                var_16 = ((/* implicit */long long int) min(((-(((/* implicit */int) var_5)))), ((+(((/* implicit */int) arr_12 [i_1] [i_5] [i_5] [i_5] [i_1]))))));
                                arr_14 [i_1] [i_4] [i_1] = ((((((/* implicit */unsigned long long int) max((var_3), (((/* implicit */long long int) arr_3 [i_0] [i_0] [i_0]))))) != ((+(18446744073709551615ULL))))) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_2)), (arr_2 [i_1 - 2]))))) : (max((arr_8 [i_1 + 2] [i_1 + 1] [i_4 + 2] [i_4 + 1]), (max((((/* implicit */long long int) var_7)), (var_3))))));
                            }
                        } 
                    } 
                }
                var_17 &= ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_4)), (((((/* implicit */unsigned long long int) -1497318664)) & (0ULL)))));
                /* LoopSeq 3 */
                for (long long int i_6 = 1; i_6 < 14; i_6 += 1) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_7 = 0; i_7 < 15; i_7 += 2) 
                    {
                        var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-19114)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)16700))) : ((-(1LL)))));
                        arr_21 [i_0] [i_1 - 2] [i_1] [i_7] [i_0] = ((/* implicit */signed char) var_11);
                        var_19 = ((/* implicit */unsigned int) var_1);
                    }
                    var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((((min((arr_5 [i_6] [i_6] [i_6] [i_6]), (((/* implicit */long long int) arr_10 [(_Bool)1] [i_0] [i_0] [i_6 + 1])))) / (arr_8 [i_0] [i_1 - 2] [i_1 - 3] [i_6 + 1]))) / (((/* implicit */long long int) max((((((/* implicit */_Bool) arr_0 [i_0])) ? (var_0) : (((/* implicit */int) var_4)))), (((/* implicit */int) var_1))))))))));
                }
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    arr_26 [i_1] [i_1] [i_1] = max((((/* implicit */long long int) var_5)), (min((((long long int) var_8)), (((/* implicit */long long int) max((((/* implicit */unsigned int) var_0)), (arr_13 [i_1] [i_1])))))));
                    arr_27 [i_0] [i_1] [i_8] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (((((((/* implicit */_Bool) arr_10 [i_8] [i_1] [i_1] [i_0])) ? (arr_1 [(_Bool)1] [i_8]) : (((/* implicit */long long int) ((/* implicit */int) var_5))))) & (((/* implicit */long long int) ((/* implicit */int) var_9)))))));
                }
                for (signed char i_9 = 1; i_9 < 12; i_9 += 4) 
                {
                    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */int) var_8)), (arr_3 [i_1] [i_1 + 1] [i_9 + 2])))) ? (((/* implicit */int) min((max((var_8), (((/* implicit */short) var_2)))), (((/* implicit */short) var_9))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1 + 2] [i_9 + 1] [(unsigned char)8])))))));
                    arr_31 [i_1] [i_0] [i_1] = ((((arr_17 [i_0] [i_1] [i_9] [i_9 + 3]) != (((/* implicit */unsigned long long int) var_7)))) ? (((((/* implicit */_Bool) var_4)) ? (arr_17 [i_0] [i_1 + 2] [(unsigned short)12] [i_9 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))) : (((/* implicit */unsigned long long int) ((long long int) arr_5 [i_0] [i_1 - 2] [i_1] [i_9 + 2]))));
                }
                var_22 ^= ((/* implicit */short) min((((/* implicit */unsigned short) (unsigned char)59)), ((unsigned short)48835)));
            }
        } 
    } 
}
