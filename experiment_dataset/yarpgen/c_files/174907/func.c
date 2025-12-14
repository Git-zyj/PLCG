/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174907
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174907 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174907
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
    var_12 = var_1;
    var_13 = ((/* implicit */signed char) var_5);
    /* LoopNest 3 */
    for (unsigned int i_0 = 2; i_0 < 22; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (short i_2 = 1; i_2 < 21; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        for (long long int i_4 = 0; i_4 < 24; i_4 += 3) 
                        {
                            {
                                var_14 += ((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_8 [i_1] [i_1] [i_3] [i_4])) : ((+(((/* implicit */int) (signed char)-118))))));
                                var_15 -= ((/* implicit */signed char) ((4611685880988434432ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)23824))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_5 = 4; i_5 < 22; i_5 += 4) 
                    {
                        for (short i_6 = 0; i_6 < 24; i_6 += 2) 
                        {
                            {
                                arr_18 [i_1] [i_5 + 1] [i_5 + 1] = ((/* implicit */unsigned long long int) arr_4 [i_0] [i_0] [i_0]);
                                var_16 ^= ((/* implicit */short) ((((/* implicit */_Bool) min((13835058192721117183ULL), (((/* implicit */unsigned long long int) arr_1 [i_0] [i_0]))))) && (((/* implicit */_Bool) min((arr_6 [i_5 - 2] [i_2 + 2] [i_0 - 2] [i_0 + 1]), (arr_6 [i_5 - 2] [i_2 - 1] [i_0 - 2] [i_0 - 1]))))));
                            }
                        } 
                    } 
                    arr_19 [i_0] = ((/* implicit */unsigned int) arr_1 [i_0 - 1] [i_0 - 2]);
                    var_17 += ((/* implicit */_Bool) ((((((/* implicit */int) (short)-23824)) + (2147483647))) >> (((((/* implicit */int) (short)-32765)) + (32794)))));
                }
            } 
        } 
    } 
}
