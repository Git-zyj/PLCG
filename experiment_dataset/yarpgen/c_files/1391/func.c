/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1391
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1391 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1391
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
    var_18 = ((/* implicit */int) var_17);
    var_19 = ((/* implicit */int) (!(((/* implicit */_Bool) var_15))));
    var_20 = ((/* implicit */int) max((var_9), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) (signed char)41)) != (((/* implicit */int) (short)-31526))))) * (min((992072122), (var_3))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 4; i_0 < 11; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                var_21 = ((/* implicit */short) var_9);
                var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) -4419388652186275338LL)) ? (((/* implicit */int) (signed char)-41)) : (((/* implicit */int) (signed char)121))))) | (min((arr_3 [i_0]), (((/* implicit */long long int) var_3))))));
                var_23 = ((/* implicit */int) arr_0 [i_0]);
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (long long int i_3 = 3; i_3 < 11; i_3 += 2) 
                    {
                        {
                            var_24 = (_Bool)0;
                            var_25 = var_8;
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 22; i_4 += 4) 
    {
        for (int i_5 = 0; i_5 < 22; i_5 += 4) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    var_26 = ((/* implicit */signed char) -4295924544390620152LL);
                    /* LoopNest 2 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        for (int i_8 = 0; i_8 < 22; i_8 += 1) 
                        {
                            {
                                arr_23 [i_6] = ((/* implicit */long long int) ((((((/* implicit */int) (signed char)(-127 - 1))) + (2147483647))) << (((((-887763519852084522LL) + (887763519852084552LL))) - (30LL)))));
                                var_27 = ((/* implicit */long long int) arr_18 [i_8] [i_7] [i_5] [i_5] [i_4] [i_4]);
                            }
                        } 
                    } 
                    var_28 = ((/* implicit */int) min((var_28), (((/* implicit */int) ((arr_11 [i_6] [i_5] [i_4]) <= (arr_12 [i_4]))))));
                }
                var_29 = ((/* implicit */unsigned long long int) (_Bool)1);
                arr_24 [i_5] [i_4] [i_4] = arr_22 [i_5] [i_5] [i_4] [i_4] [i_5] [i_4];
            }
        } 
    } 
}
