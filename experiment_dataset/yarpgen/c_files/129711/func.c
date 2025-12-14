/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129711
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129711 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129711
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
    for (long long int i_0 = 3; i_0 < 7; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */int) var_7);
                var_16 ^= ((/* implicit */long long int) ((arr_2 [i_0]) >= (((/* implicit */unsigned long long int) (~(max((arr_0 [i_0] [i_0]), (((/* implicit */long long int) arr_1 [i_0])))))))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned char) var_2);
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_2 = 0; i_2 < 24; i_2 += 2) 
    {
        /* LoopNest 2 */
        for (long long int i_3 = 2; i_3 < 22; i_3 += 4) 
        {
            for (unsigned long long int i_4 = 3; i_4 < 22; i_4 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_5 = 2; i_5 < 22; i_5 += 1) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 24; i_6 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */int) var_4);
                                arr_18 [i_6] [i_5] [i_3 + 2] [i_3 + 2] [9ULL] = (((-(var_12))) >> (((((((/* implicit */_Bool) arr_12 [i_6] [i_5] [i_3 + 1] [i_2])) ? (arr_10 [i_2] [(unsigned char)14]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_2] [i_3] [i_4] [i_4] [i_4] [16U] [i_6]))))) - (16801761752510824681ULL))));
                                arr_19 [i_2] [i_4] [0U] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(arr_8 [i_4])))) ? (((/* implicit */long long int) -1)) : ((+(6671393730034628698LL)))));
                            }
                        } 
                    } 
                    var_19 = (~(((((/* implicit */_Bool) -1354732502)) ? (((/* implicit */int) arr_16 [i_4 - 3] [i_3] [i_3] [i_2] [i_2])) : (((/* implicit */int) arr_15 [i_4] [i_3 - 2] [i_2])))));
                    /* LoopNest 2 */
                    for (long long int i_7 = 1; i_7 < 21; i_7 += 3) 
                    {
                        for (int i_8 = 3; i_8 < 23; i_8 += 4) 
                        {
                            {
                                arr_24 [i_7] = ((/* implicit */signed char) (~(((/* implicit */int) arr_14 [i_7 - 1]))));
                                var_20 = ((/* implicit */long long int) -1354732502);
                                arr_25 [i_7] [4] [i_4] [i_7] [i_8] [i_8 - 1] = ((/* implicit */long long int) -825744382);
                                var_21 = -4786105561955142282LL;
                            }
                        } 
                    } 
                }
            } 
        } 
        var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) 17224536774484792079ULL))));
        arr_26 [1LL] = ((/* implicit */short) ((var_8) / (((((/* implicit */_Bool) -1354732488)) ? (((/* implicit */long long int) arr_20 [i_2] [i_2])) : (-10LL)))));
        var_23 = ((/* implicit */_Bool) (~(arr_12 [i_2] [i_2] [i_2] [i_2])));
    }
    /* LoopSeq 1 */
    for (long long int i_9 = 0; i_9 < 20; i_9 += 1) 
    {
        arr_30 [5] = ((/* implicit */short) ((((/* implicit */int) arr_17 [i_9] [i_9] [(short)17] [20] [i_9] [i_9] [i_9])) / (max((arr_8 [i_9]), (((int) (signed char)50))))));
        var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((arr_8 [i_9]) < (-1490891446))) ? ((+(arr_12 [i_9] [i_9] [(signed char)1] [i_9]))) : (((/* implicit */int) (unsigned char)56))))) && (((/* implicit */_Bool) -4))));
    }
}
