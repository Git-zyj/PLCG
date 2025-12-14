/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160875
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160875 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160875
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
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (unsigned char i_1 = 4; i_1 < 15; i_1 += 4) 
        {
            for (unsigned int i_2 = 2; i_2 < 16; i_2 += 1) 
            {
                {
                    arr_6 [i_0] [i_1 - 2] [i_0] = ((/* implicit */unsigned int) var_8);
                    var_13 += ((/* implicit */short) max((((arr_4 [i_1 - 4] [i_1] [i_2 + 1]) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1 - 4] [(signed char)13] [i_2 + 1]))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_11)))))));
                    var_14 = ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_2 + 1]))) * (2579169022U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_2 [i_2 - 2])), (var_6))))) : (((arr_3 [i_2 - 1] [i_2 - 1] [i_1 + 2]) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_2 + 2]))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_3 = 2; i_3 < 11; i_3 += 3) 
    {
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            {
                var_15 += ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */int) var_5)) >= (((/* implicit */int) arr_0 [i_3 - 1]))))), (((((/* implicit */_Bool) 2579169028U)) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_3 + 1]))) : (arr_8 [i_3 + 1])))));
                /* LoopNest 2 */
                for (unsigned long long int i_5 = 1; i_5 < 9; i_5 += 4) 
                {
                    for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 4) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned int) max((var_16), (((((/* implicit */_Bool) ((var_7) >> (((/* implicit */int) arr_18 [i_6] [(unsigned short)8] [i_5 + 2] [i_5 - 1]))))) ? (max((2579169022U), (((/* implicit */unsigned int) arr_18 [i_6] [i_5 + 3] [i_5 + 2] [i_5 + 2])))) : (((/* implicit */unsigned int) ((/* implicit */int) min((var_5), (((/* implicit */short) arr_18 [i_6] [(unsigned short)0] [i_5 + 1] [i_5 + 1]))))))))));
                            var_17 ^= ((/* implicit */unsigned int) var_11);
                            arr_21 [i_5] [i_5] = min((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_0))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1715798287U)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (signed char)1))))) ? (((((/* implicit */_Bool) 1715798259U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (arr_5 [5ULL] [i_4] [i_5]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) 285274951U)))))));
                        }
                    } 
                } 
                var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) min((((((/* implicit */_Bool) min((((/* implicit */short) arr_1 [i_3])), (var_5)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [(unsigned char)0]))) : (((((/* implicit */_Bool) 2579169028U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_4))))), (min((((/* implicit */unsigned long long int) arr_15 [(_Bool)1] [i_4] [i_4])), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) * (arr_5 [i_3 + 1] [i_4] [i_4]))))))))));
            }
        } 
    } 
}
