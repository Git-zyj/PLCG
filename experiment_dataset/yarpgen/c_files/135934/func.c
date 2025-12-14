/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135934
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135934 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135934
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
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (int i_1 = 2; i_1 < 19; i_1 += 2) 
        {
            for (unsigned int i_2 = 1; i_2 < 19; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_1] [i_1] [i_2] |= ((((/* implicit */_Bool) (unsigned char)156)) ? (((/* implicit */int) (short)48)) : (((/* implicit */int) (unsigned char)244)));
                    arr_10 [i_0] [i_0] [17ULL] [i_1] = ((/* implicit */long long int) var_12);
                    arr_11 [i_0] [i_0] [i_2] [i_2] = min((((((/* implicit */_Bool) max((arr_0 [i_0]), (((/* implicit */int) arr_6 [i_2] [i_1] [i_0] [i_0]))))) ? (((/* implicit */int) arr_4 [i_1 - 2] [i_2 - 1])) : (((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), (var_8)))))), (((/* implicit */int) max((arr_1 [i_1 - 1]), (arr_4 [i_2 - 1] [i_1 - 1])))));
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 19; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 20; i_4 += 3) 
                        {
                            {
                                arr_17 [i_2] [i_1] = ((/* implicit */short) max((var_8), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_16 [i_2 - 1] [i_2] [i_2] [i_2 - 1] [i_2 - 1])))))));
                                var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) max((((/* implicit */unsigned int) min((max((((/* implicit */int) var_14)), (arr_13 [10] [i_1]))), (((/* implicit */int) min((arr_1 [i_0]), (((/* implicit */unsigned short) var_14)))))))), (arr_3 [7LL] [i_1 - 2] [i_2 - 1]))))));
                                var_20 ^= ((/* implicit */unsigned int) var_12);
                                var_21 = var_2;
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) var_6))));
    var_23 &= ((/* implicit */unsigned int) var_2);
    var_24 = ((long long int) var_10);
    /* LoopNest 3 */
    for (unsigned int i_5 = 0; i_5 < 12; i_5 += 1) 
    {
        for (long long int i_6 = 1; i_6 < 11; i_6 += 1) 
        {
            for (signed char i_7 = 1; i_7 < 11; i_7 += 3) 
            {
                {
                    var_25 = ((/* implicit */unsigned long long int) (_Bool)1);
                    arr_26 [i_6] = ((/* implicit */int) var_1);
                }
            } 
        } 
    } 
}
