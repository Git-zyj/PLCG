/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128818
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128818 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128818
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
    for (short i_0 = 1; i_0 < 17; i_0 += 4) 
    {
        var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0])) / (((/* implicit */int) arr_1 [i_0]))))) ? ((~(((/* implicit */int) arr_1 [i_0])))) : ((-(((/* implicit */int) arr_1 [i_0]))))));
        var_16 = (~((+(arr_0 [i_0 + 1]))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 1; i_1 < 16; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                {
                    var_17 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) min(((short)-25959), (((/* implicit */short) var_12)))))) != (((unsigned int) (short)(-32767 - 1)))));
                    arr_6 [i_0] [(signed char)11] [i_2] = max((((((/* implicit */_Bool) -5132919931196780331LL)) ? (-7819581154654408513LL) : (((/* implicit */long long int) ((/* implicit */int) var_1))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_3 [i_0]))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        for (int i_4 = 0; i_4 < 18; i_4 += 4) 
                        {
                            {
                                arr_14 [i_1] [i_0] [i_1] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */long long int) max(((+(((/* implicit */int) (short)-2508)))), (((((/* implicit */_Bool) -1087224793365838022LL)) ? (((/* implicit */int) (_Bool)1)) : (-1361577389)))))) * (5132919931196780330LL)));
                                var_18 = ((/* implicit */short) (+((-(((/* implicit */int) arr_2 [i_1]))))));
                                var_19 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_7 [i_0] [i_0] [i_1 - 1] [i_2] [i_3] [i_2])), (arr_8 [i_0] [i_0] [10LL] [14])))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 200651795U)) ? (7819581154654408513LL) : (((/* implicit */long long int) arr_0 [i_0]))))) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) ((arr_9 [i_0] [i_0] [i_0] [i_3] [i_0]) != (((/* implicit */long long int) ((/* implicit */int) var_13))))))))) : (max((min((7124344361295680813LL), (((/* implicit */long long int) var_2)))), (((/* implicit */long long int) arr_13 [(short)16] [(short)16] [(short)16]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) arr_2 [i_0]))));
    }
    /* LoopNest 2 */
    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
    {
        for (int i_6 = 0; i_6 < 12; i_6 += 1) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_7 = 1; i_7 < 10; i_7 += 4) 
                {
                    for (unsigned char i_8 = 0; i_8 < 12; i_8 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */long long int) (!(((/* implicit */_Bool) -7819581154654408512LL))));
                            var_22 ^= ((/* implicit */short) ((min((((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_10)), (var_9)))), ((~(var_8))))) % (((/* implicit */unsigned long long int) 1361577370))));
                            arr_24 [i_6] = ((/* implicit */int) 8875056412135551316ULL);
                        }
                    } 
                } 
                arr_25 [i_6] = ((/* implicit */unsigned long long int) arr_1 [i_6]);
            }
        } 
    } 
}
