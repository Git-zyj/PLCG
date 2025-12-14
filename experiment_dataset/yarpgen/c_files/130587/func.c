/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130587
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130587 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130587
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
    var_11 = ((/* implicit */unsigned int) var_10);
    var_12 = ((/* implicit */signed char) max((var_7), (((/* implicit */long long int) ((((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_8)))) || (((/* implicit */_Bool) var_5)))))));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 15; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 17; i_1 += 4) 
        {
            {
                var_13 = ((/* implicit */unsigned long long int) ((max((((/* implicit */unsigned long long int) var_2)), (var_8))) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        {
                            var_14 = ((/* implicit */unsigned int) ((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_7 [i_1 + 2] [i_0] [i_1 + 1] [i_1] [i_1])) : (((/* implicit */int) var_3))))), (arr_1 [i_3]))) ^ (arr_0 [i_0])));
                            var_15 *= ((/* implicit */unsigned char) arr_5 [i_0] [i_1] [(signed char)16] [(signed char)16]);
                            var_16 = ((/* implicit */short) var_6);
                        }
                    } 
                } 
                var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) min((arr_8 [i_1 - 1] [i_1] [i_1] [i_1 + 2]), (var_1)))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_10)), (var_2)))) ? (((/* implicit */unsigned long long int) arr_8 [i_0] [16ULL] [i_0] [i_1])) : (min((var_4), (var_4)))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_4 = 2; i_4 < 15; i_4 += 3) 
    {
        for (unsigned short i_5 = 1; i_5 < 14; i_5 += 4) 
        {
            for (unsigned int i_6 = 0; i_6 < 17; i_6 += 2) 
            {
                {
                    arr_17 [i_4] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_3)), (((((((/* implicit */_Bool) (unsigned char)7)) ? (16569186969865141655ULL) : (var_8))) << (((arr_16 [i_6] [i_5 + 2] [i_4]) - (10034015624639792533ULL)))))));
                    var_18 &= ((/* implicit */unsigned long long int) var_10);
                    arr_18 [i_4] [i_5] [i_6] = (i_4 % 2 == 0) ? (((/* implicit */unsigned long long int) ((((((var_7) == (((/* implicit */long long int) ((/* implicit */int) var_6))))) ? (((((/* implicit */int) var_6)) ^ (((/* implicit */int) var_3)))) : (((/* implicit */int) arr_7 [i_6] [i_4] [i_6] [i_5] [i_6])))) >> (((max((((/* implicit */unsigned int) var_3)), (arr_4 [i_4 - 1] [i_4 - 2] [i_4]))) - (3863138507U)))))) : (((/* implicit */unsigned long long int) ((((((((var_7) == (((/* implicit */long long int) ((/* implicit */int) var_6))))) ? (((((/* implicit */int) var_6)) ^ (((/* implicit */int) var_3)))) : (((/* implicit */int) arr_7 [i_6] [i_4] [i_6] [i_5] [i_6])))) + (2147483647))) >> (((max((((/* implicit */unsigned int) var_3)), (arr_4 [i_4 - 1] [i_4 - 2] [i_4]))) - (3863138507U))))));
                }
            } 
        } 
    } 
}
