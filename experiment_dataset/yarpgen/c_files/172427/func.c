/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172427
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172427 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172427
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
    for (int i_0 = 4; i_0 < 16; i_0 += 2) 
    {
        for (long long int i_1 = 2; i_1 < 17; i_1 += 4) 
        {
            for (unsigned char i_2 = 2; i_2 < 15; i_2 += 3) 
            {
                {
                    arr_9 [i_0] [i_0] [i_1] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) arr_4 [i_0]))) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_2] [i_0 - 4]))) : (((long long int) arr_5 [i_0] [i_0]))))) ? (((((((/* implicit */int) arr_4 [i_2 + 2])) + (2147483647))) << (((((((/* implicit */_Bool) arr_3 [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1 + 1] [i_1 + 1]))) : (arr_2 [i_2] [i_0]))) - (82U))))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((arr_8 [i_0] [i_0] [i_2]) != (arr_8 [i_2] [i_1 - 2] [6U]))))) < (((((/* implicit */_Bool) arr_1 [i_1 - 2])) ? (arr_2 [i_1 + 1] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0 + 2]))))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        for (signed char i_4 = 2; i_4 < 17; i_4 += 2) 
                        {
                            {
                                var_13 -= ((/* implicit */unsigned short) ((((((/* implicit */int) ((((/* implicit */unsigned int) arr_8 [i_0] [i_3] [i_4])) >= (arr_2 [(short)9] [i_2 - 1])))) << (((((int) arr_1 [i_2])) + (768716927))))) - (((int) ((((/* implicit */_Bool) arr_3 [i_0])) ? (arr_2 [i_1 - 2] [i_1 - 2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_4] [i_4] [i_4] [i_0]))))))));
                                var_14 = ((/* implicit */signed char) ((unsigned short) max((((/* implicit */int) (unsigned char)248)), (688909301))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 3; i_5 < 17; i_5 += 1) 
                    {
                        for (unsigned short i_6 = 2; i_6 < 14; i_6 += 3) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_1 - 1] [i_2] [i_2] [i_5] [i_5 - 1])) ? (((((/* implicit */_Bool) arr_17 [(short)12] [i_1] [i_1] [i_1] [i_1])) ? (((/* implicit */int) arr_10 [i_5] [i_2])) : (((/* implicit */int) arr_16 [i_0 + 1] [i_0 + 1] [12U] [i_0] [i_2])))) : (((((/* implicit */int) arr_5 [i_5] [i_5])) & (((/* implicit */int) arr_16 [i_0] [i_0] [i_2] [i_5 - 3] [i_2]))))))) ? (((/* implicit */int) ((unsigned short) arr_14 [i_2 + 2] [i_0 - 2] [i_6 - 2] [i_5 - 2]))) : (((/* implicit */int) ((unsigned char) ((signed char) arr_17 [i_1] [i_1] [i_2] [i_5] [i_5]))))));
                                var_16 = arr_3 [i_0];
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0 + 2] [i_2] [i_0 + 2] [i_0 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0] [i_1] [i_2] [i_2]))) : (arr_2 [i_1] [i_2])))) ? (((/* implicit */int) arr_4 [i_1])) : (((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0 - 1])) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_10 [i_0 - 1] [i_2]))))))) ? (min((((((/* implicit */_Bool) arr_8 [i_0 + 2] [i_1] [i_2])) ? (arr_15 [i_1 - 2] [i_0]) : (((/* implicit */int) arr_0 [i_0] [(_Bool)1])))), (((/* implicit */int) ((_Bool) arr_13 [i_2 + 1] [i_2] [i_2] [i_2] [i_2]))))) : (((int) ((unsigned long long int) arr_3 [i_0])))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned char) max((((/* implicit */int) var_11)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) var_8))))) : (((/* implicit */int) ((short) var_3)))))));
}
