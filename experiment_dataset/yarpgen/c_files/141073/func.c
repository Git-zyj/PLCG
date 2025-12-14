/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141073
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141073 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141073
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) -4807510419468538219LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) && (((/* implicit */_Bool) -4807510419468538219LL)))))) : (arr_0 [i_0])))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (short)32766))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 3; i_3 < 21; i_3 += 3) 
                    {
                        for (int i_4 = 0; i_4 < 24; i_4 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */short) min((var_20), (arr_13 [i_0] [i_0])));
                                var_21 = ((/* implicit */unsigned long long int) min((var_21), (max((max((((/* implicit */unsigned long long int) -416778339)), (arr_0 [i_3 - 3]))), (((arr_0 [i_3 - 1]) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))))));
                                var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_9 [i_3] [i_3 - 1] [i_3] [7])) && (((/* implicit */_Bool) arr_9 [i_3 + 2] [i_3 - 3] [i_3] [10ULL])))) && (((/* implicit */_Bool) -3843531056842220205LL)))))));
                            }
                        } 
                    } 
                    arr_14 [i_0] [i_1] [i_2] = ((/* implicit */long long int) arr_6 [i_0] [i_1] [i_1]);
                    var_23 = ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)51926))) & (((((/* implicit */_Bool) arr_7 [i_0] [0ULL] [0ULL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32766))) : (15118627734986369110ULL))))) | (((((/* implicit */_Bool) max((arr_0 [i_0]), (((/* implicit */unsigned long long int) var_8))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_12 [i_0] [i_1] [17ULL] [i_2] [i_1])) : (((/* implicit */int) arr_7 [i_2] [i_1] [i_0]))))) : (arr_11 [i_2])))));
                }
            } 
        } 
    }
    var_24 = ((/* implicit */long long int) 416778331);
}
