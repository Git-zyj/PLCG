/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113931
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113931 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113931
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
    for (unsigned long long int i_0 = 3; i_0 < 11; i_0 += 2) 
    {
        for (int i_1 = 3; i_1 < 11; i_1 += 3) 
        {
            for (unsigned short i_2 = 2; i_2 < 12; i_2 += 1) 
            {
                {
                    arr_7 [i_2] = ((/* implicit */unsigned char) min((((/* implicit */long long int) min((((/* implicit */int) arr_4 [i_2 + 1])), (((((/* implicit */int) arr_4 [i_2 - 2])) - (((/* implicit */int) arr_3 [i_0] [i_0]))))))), (((((/* implicit */_Bool) arr_6 [i_0 - 1] [i_2] [i_2 + 1] [i_2 + 1])) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)231)) | (((/* implicit */int) (unsigned char)30))))) : (((((/* implicit */_Bool) arr_5 [i_2] [2])) ? (arr_6 [i_0 + 1] [i_2] [i_2 - 1] [i_0 + 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0])))))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 2; i_4 < 10; i_4 += 2) 
                        {
                            {
                                arr_12 [i_2] [i_3] [i_2] [i_1] [i_2] = ((((arr_6 [i_0] [i_2] [i_2 + 1] [i_0 - 1]) < (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_0 - 3]))))) ? (min((arr_10 [i_4 + 2] [i_4 + 3] [i_4 + 2] [i_4 + 2] [i_4] [i_4 - 1] [i_4]), (((/* implicit */unsigned long long int) arr_3 [i_3] [i_1 + 2])))) : (((/* implicit */unsigned long long int) max((arr_5 [i_2] [i_4 + 3]), (arr_5 [i_2] [i_4])))));
                                var_15 = (+(min((((/* implicit */unsigned long long int) max((arr_9 [i_2] [i_2] [i_2] [i_2]), (arr_9 [i_2] [i_1] [i_1] [i_1])))), (arr_11 [i_0] [i_4 - 2] [i_2] [i_2] [i_3]))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_16 += ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) > (var_7))) ? (var_1) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_13)))))));
    /* LoopNest 2 */
    for (short i_5 = 2; i_5 < 10; i_5 += 1) 
    {
        for (unsigned long long int i_6 = 0; i_6 < 13; i_6 += 2) 
        {
            {
                var_17 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)105))) + (arr_10 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5 + 2] [i_5 + 2])));
                var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) min(((+(((/* implicit */int) arr_4 [i_5 + 1])))), (((/* implicit */int) max((arr_3 [i_5 + 1] [i_5]), (arr_3 [i_5 + 1] [i_5])))))))));
            }
        } 
    } 
}
