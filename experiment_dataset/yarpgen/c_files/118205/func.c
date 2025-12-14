/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118205
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118205 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118205
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
    for (long long int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                {
                    var_18 *= ((unsigned long long int) ((arr_2 [i_0] [i_1] [i_1 + 1]) > (((/* implicit */unsigned int) arr_6 [i_0] [i_0] [i_0]))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 2; i_3 < 14; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 18; i_4 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) arr_5 [(unsigned short)4] [i_3 - 2] [i_1 + 1] [i_0]))));
                                arr_11 [i_0] [i_0] [i_3 - 1] [(signed char)13] = ((/* implicit */short) ((((/* implicit */unsigned int) (~((~(arr_6 [i_0] [i_1 + 1] [i_2])))))) * (((unsigned int) arr_8 [i_3 + 2] [i_1 + 1] [i_1 + 1]))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_5 = 0; i_5 < 21; i_5 += 3) 
    {
        for (long long int i_6 = 1; i_6 < 20; i_6 += 2) 
        {
            {
                /* LoopNest 3 */
                for (short i_7 = 0; i_7 < 21; i_7 += 4) 
                {
                    for (unsigned char i_8 = 0; i_8 < 21; i_8 += 2) 
                    {
                        for (unsigned long long int i_9 = 2; i_9 < 19; i_9 += 2) 
                        {
                            {
                                var_20 += ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_9] [i_6 + 1] [i_9 - 2] [i_9])) ? (9283177118911159853ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_7] [i_6 + 1] [i_9 + 2] [i_9 + 2])))))) ? (min((((/* implicit */unsigned long long int) arr_17 [i_9] [i_6 + 1] [i_9 + 2] [i_9 + 2])), (var_14))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_17 [i_8] [i_6 + 1] [i_9 + 1] [i_9 - 2])) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_7] [i_6 + 1] [i_9 - 1] [(_Bool)1])))))));
                                var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) arr_23 [i_6]))));
                            }
                        } 
                    } 
                } 
                var_22 = ((/* implicit */long long int) ((((((/* implicit */int) arr_20 [i_6] [i_6])) & (((/* implicit */int) arr_20 [i_6] [i_6])))) == (((/* implicit */int) max((arr_20 [i_6] [i_6 - 1]), (arr_20 [i_6] [i_6 - 1]))))));
            }
        } 
    } 
    var_23 = ((/* implicit */int) (+(var_14)));
}
