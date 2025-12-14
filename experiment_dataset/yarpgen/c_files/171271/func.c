/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171271
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171271 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171271
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
    var_14 *= ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) || (((/* implicit */_Bool) var_7))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (unsigned short i_1 = 2; i_1 < 20; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_2 = 0; i_2 < 22; i_2 += 3) 
                {
                    arr_8 [i_0] [i_0] [i_1] [(short)0] = ((34359738367LL) / (((/* implicit */long long int) ((/* implicit */int) var_1))));
                    var_15 = ((/* implicit */long long int) (((-(((/* implicit */int) arr_3 [i_0] [i_0])))) ^ (((/* implicit */int) arr_3 [i_0] [i_0]))));
                    var_16 -= ((/* implicit */_Bool) (-((-(((/* implicit */int) var_11))))));
                    arr_9 [1ULL] [i_0] [1ULL] [i_2] = ((/* implicit */_Bool) (-(((/* implicit */int) (signed char)94))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 3) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_6 [i_1 - 2] [6LL])) + (((/* implicit */int) var_0))));
                                arr_16 [i_0] [i_3] [i_0] [(unsigned char)17] [i_0] = ((/* implicit */unsigned char) ((arr_14 [i_1 + 2] [i_1 + 1] [i_1 + 2] [i_1 - 1]) ? (arr_2 [i_4] [i_1 + 2]) : (((/* implicit */unsigned long long int) var_13))));
                            }
                        } 
                    } 
                }
                /* LoopNest 2 */
                for (signed char i_5 = 4; i_5 < 18; i_5 += 3) 
                {
                    for (unsigned char i_6 = 0; i_6 < 22; i_6 += 3) 
                    {
                        {
                            arr_22 [i_6] [i_0] [i_0] [i_0] = (_Bool)1;
                            arr_23 [i_0] [i_0] [i_5] [i_0] [i_5 - 4] = ((/* implicit */long long int) var_3);
                        }
                    } 
                } 
                var_18 = ((/* implicit */signed char) (+(min((((/* implicit */long long int) arr_19 [(unsigned short)9] [i_0] [i_1])), (var_13)))));
                arr_24 [i_0] = ((/* implicit */unsigned int) max((((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)89))))), (((((var_13) + (9223372036854775807LL))) << (((((/* implicit */int) arr_3 [i_1 - 1] [i_1 + 2])) - (25589)))))));
            }
        } 
    } 
}
