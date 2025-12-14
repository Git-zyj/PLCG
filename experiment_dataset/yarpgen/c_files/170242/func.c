/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170242
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170242 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170242
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
    var_12 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (min((((/* implicit */unsigned int) var_1)), (var_3))) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))) == (var_7)));
    var_13 = ((/* implicit */long long int) var_11);
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 4; i_3 < 18; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 19; i_4 += 3) 
                        {
                            {
                                var_14 *= ((((/* implicit */_Bool) (short)-17297)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)18051))) : (4294967295U));
                                arr_11 [i_0 + 2] [i_1] [i_1] [i_0] [i_3] [i_0 + 2] = ((/* implicit */unsigned short) arr_7 [i_4] [i_0] [i_3] [i_3]);
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) arr_8 [i_0] [i_0] [i_0] [i_0]))) ? (((/* implicit */int) arr_10 [i_0] [(signed char)8] [i_0 + 2] [(unsigned short)13] [i_0] [i_0 - 1] [i_0 + 3])) : (arr_8 [i_0] [i_0] [i_0] [i_0])));
                    /* LoopNest 2 */
                    for (short i_5 = 2; i_5 < 17; i_5 += 3) 
                    {
                        for (unsigned int i_6 = 1; i_6 < 19; i_6 += 1) 
                        {
                            {
                                arr_17 [i_0] [(short)18] [5U] [i_0] [i_6] [i_0] = ((int) ((((/* implicit */_Bool) arr_16 [i_0 + 2] [i_5 - 2] [i_5] [i_5 + 4] [i_0])) || (((/* implicit */_Bool) arr_16 [i_0 + 3] [i_5 + 4] [i_5 + 4] [i_5 + 4] [i_0]))));
                                arr_18 [i_0] [i_1] [i_2] [i_5] [i_0] = ((/* implicit */_Bool) var_4);
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (((((/* implicit */_Bool) arr_2 [i_0])) ? (((unsigned int) arr_0 [i_0])) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_14 [i_0 + 1] [i_0 + 4] [i_1] [i_1] [i_2] [i_2]) == (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1)))))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_7 = 1; i_7 < 20; i_7 += 4) 
                    {
                        for (unsigned short i_8 = 1; i_8 < 20; i_8 += 4) 
                        {
                            {
                                var_17 = ((/* implicit */int) min((((((/* implicit */_Bool) ((int) arr_7 [5ULL] [i_0] [i_0] [5ULL]))) ? (arr_24 [(signed char)15] [i_2] [(unsigned short)18] [(unsigned short)18] [i_7 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_9)))))), (((/* implicit */unsigned long long int) arr_10 [i_0] [i_0] [i_2] [i_2] [i_2] [i_0] [2LL]))));
                                var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) (~(arr_14 [i_0] [i_0] [i_0] [(short)12] [i_7] [i_0]))))));
                                var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_0] [i_7 - 1] [i_2] [i_2] [i_0])) ? (arr_16 [i_0] [i_7 - 1] [18ULL] [7U] [i_0]) : (arr_16 [i_0] [i_7 + 1] [i_0 + 2] [i_0 + 2] [i_0])))) ? (((((/* implicit */_Bool) arr_16 [i_0] [i_7 + 1] [i_0 + 3] [i_0] [i_0])) ? (arr_16 [i_0] [i_7 - 1] [i_2] [i_2] [i_0]) : (arr_16 [i_0] [i_7 + 1] [i_2] [i_1] [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) ((short) arr_16 [i_0] [i_7 + 1] [i_0] [i_0 + 4] [i_0]))))));
                                var_20 = ((/* implicit */unsigned long long int) var_9);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
