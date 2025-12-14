/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127362
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127362 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127362
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        var_14 = ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (unsigned short)40334)));
        var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_0])) ? ((+(((/* implicit */int) (unsigned short)40330)))) : (arr_0 [i_0])));
    }
    var_16 = ((/* implicit */int) max((((/* implicit */unsigned long long int) var_13)), (12987210201528867033ULL)));
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 13; i_1 += 3) 
    {
        for (unsigned long long int i_2 = 2; i_2 < 11; i_2 += 4) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (int i_3 = 0; i_3 < 13; i_3 += 1) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_4 = 0; i_4 < 13; i_4 += 4) 
                    {
                        arr_10 [i_2 + 2] = arr_1 [i_1];
                        var_17 = ((/* implicit */unsigned long long int) ((arr_5 [i_2 + 1] [i_2]) != (arr_5 [i_2 + 1] [i_2 + 2])));
                        var_18 = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (arr_7 [i_1]))));
                        var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_6 [2LL] [2] [i_1])) ? (74007008906088172ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_3] [i_2] [i_3])))));
                        arr_11 [i_2] [i_2] [i_3] [i_4] [i_2 + 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(arr_7 [i_1])))) ? ((+(74007008906088172ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) var_2)) : (arr_0 [i_2 + 2]))))));
                    }
                    var_20 = ((((/* implicit */_Bool) arr_7 [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_2 - 2] [10LL])))))) : (((((/* implicit */_Bool) 74007008906088170ULL)) ? (arr_3 [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1] [i_2 + 2] [i_3]))))));
                    var_21 = ((/* implicit */signed char) (+(((/* implicit */int) arr_4 [i_1] [i_2] [i_1]))));
                }
                var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_5)) : ((+(((int) arr_2 [i_2]))))));
                /* LoopNest 3 */
                for (short i_5 = 1; i_5 < 11; i_5 += 3) 
                {
                    for (unsigned char i_6 = 0; i_6 < 13; i_6 += 2) 
                    {
                        for (long long int i_7 = 1; i_7 < 11; i_7 += 4) 
                        {
                            {
                                var_23 = ((/* implicit */signed char) ((_Bool) ((unsigned short) arr_14 [i_5 + 1] [i_2 - 2] [i_5] [i_6] [i_5 + 1])));
                                arr_19 [i_5] [i_5] [i_5 - 1] [i_5] [i_5] = ((/* implicit */unsigned short) ((unsigned long long int) min((arr_15 [i_5 - 1] [i_2] [i_2 + 2] [i_7 + 2] [i_2]), (arr_15 [i_5 + 2] [i_5 + 2] [i_2 - 2] [i_7 + 2] [i_7 + 2]))));
                                arr_20 [i_6] [i_6] [i_5] [i_6] [(unsigned short)6] |= ((/* implicit */int) min((((arr_18 [i_1] [i_1] [i_1] [8LL] [i_1]) - (((/* implicit */long long int) ((/* implicit */int) min((arr_14 [i_6] [i_1] [i_2] [i_2] [i_1]), (var_10))))))), (((/* implicit */long long int) min((min((((/* implicit */unsigned int) var_5)), (1344047977U))), (((/* implicit */unsigned int) min(((unsigned short)10497), (((/* implicit */unsigned short) var_13))))))))));
                                arr_21 [i_5] = var_8;
                                var_24 = arr_6 [i_7 - 1] [i_5 - 1] [i_2 - 1];
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_25 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) <= (min((max((((/* implicit */unsigned long long int) (short)21553)), (var_0))), (((/* implicit */unsigned long long int) var_13))))));
}
