/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165728
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165728 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165728
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 3; i_0 < 14; i_0 += 2) 
    {
        for (long long int i_1 = 3; i_1 < 12; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                {
                    arr_8 [i_2] |= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_9))) < (-1LL)));
                    var_11 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1] [i_1 + 3])) ? (((/* implicit */int) arr_5 [i_1 - 3] [i_1] [i_1 - 3])) : (((/* implicit */int) arr_2 [i_1 - 3] [i_1 - 3]))))) ? (-23LL) : (max((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)80)) & (((/* implicit */int) arr_7 [i_0] [i_0] [i_2] [(unsigned char)8]))))), (1LL)))));
                    /* LoopNest 2 */
                    for (short i_3 = 1; i_3 < 13; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 14; i_4 += 4) 
                        {
                            {
                                arr_14 [i_2] [i_1] [i_2] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (unsigned char)80)), (((unsigned long long int) 23LL))));
                                var_12 += ((/* implicit */short) ((-23LL) & (((/* implicit */long long int) ((/* implicit */int) (((!(((/* implicit */_Bool) -39LL)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) -27LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) : (arr_10 [i_2]))))))))));
                                var_13 |= ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) max(((unsigned char)80), (((/* implicit */unsigned char) (signed char)48))))))))));
                                arr_15 [i_0] [i_1] [i_2] [i_3] [i_1] [i_3] = ((/* implicit */short) min(((+(arr_10 [i_1]))), (((/* implicit */unsigned long long int) min((max((((/* implicit */long long int) arr_7 [5LL] [i_1] [i_1] [7ULL])), (arr_13 [i_4] [i_1] [i_2] [i_2] [i_1] [i_0]))), (((((/* implicit */_Bool) arr_12 [i_0] [i_0 - 1] [i_0 + 1] [i_0 - 1] [i_4])) ? (arr_13 [i_0] [i_1] [i_2] [i_3] [i_2] [i_4]) : (((/* implicit */long long int) var_2)))))))));
                                arr_16 [i_1] [i_3 + 1] [(unsigned char)0] [i_1] [i_1] = max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)25827))) | (3447924900293212319ULL)))) ? (arr_9 [i_0] [i_2]) : (((/* implicit */long long int) (~(((/* implicit */int) arr_7 [i_0 - 1] [i_1] [i_0 - 1] [i_0 - 1])))))))), ((~(7258436831995639879ULL))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_14 &= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 13LL))));
    /* LoopNest 2 */
    for (int i_5 = 3; i_5 < 16; i_5 += 4) 
    {
        for (long long int i_6 = 0; i_6 < 19; i_6 += 2) 
        {
            {
                arr_23 [i_5] = ((/* implicit */signed char) ((max((((-23LL) | (((/* implicit */long long int) var_7)))), (((((/* implicit */_Bool) arr_19 [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (arr_17 [i_5]))))) - (((/* implicit */long long int) ((unsigned int) arr_21 [i_5] [13ULL] [i_5 - 3])))));
                arr_24 [i_5 + 3] = ((/* implicit */unsigned long long int) (unsigned char)249);
                var_15 = ((/* implicit */unsigned long long int) arr_20 [18ULL] [i_5] [i_5]);
                arr_25 [i_5 - 1] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -3421341282089744637LL)))))) <= (0LL)));
            }
        } 
    } 
}
