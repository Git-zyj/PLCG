/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120846
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120846 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120846
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
    var_20 = ((/* implicit */_Bool) var_4);
    var_21 = ((/* implicit */unsigned short) max((var_8), (var_16)));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 12; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                arr_5 [(unsigned char)4] [i_1] [i_1] = ((/* implicit */signed char) (!(((((/* implicit */unsigned int) ((/* implicit */int) var_3))) < ((~(var_11)))))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 3; i_2 < 14; i_2 += 2) 
                {
                    for (unsigned char i_3 = 1; i_3 < 14; i_3 += 1) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) ((signed char) var_1)))));
                            arr_11 [i_3] [i_2 - 1] [i_1] [i_3] = ((/* implicit */_Bool) ((((min((0ULL), (((/* implicit */unsigned long long int) arr_10 [i_3])))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_3]))) <= (0ULL))))))) ? (((/* implicit */int) (signed char)-88)) : (((/* implicit */int) var_14))));
                            arr_12 [i_1] [i_3] [i_3] [i_1] [4ULL] = arr_1 [i_0] [i_3];
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 15; i_5 += 3) 
                    {
                        {
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (int i_6 = 1; i_6 < 11; i_6 += 3) 
                            {
                                arr_22 [i_0] [i_1] [i_5] [i_5] [i_6 + 3] = var_17;
                                arr_23 [i_5] = ((/* implicit */unsigned int) ((((/* implicit */int) var_13)) <= (((/* implicit */int) var_16))));
                            }
                            arr_24 [i_1] [i_1] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)87)) & (((/* implicit */int) var_0))));
                            var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_15)) ? (((((/* implicit */int) (unsigned short)5111)) * (((/* implicit */int) (signed char)-91)))) : (((/* implicit */int) (signed char)-98)))), (((/* implicit */int) (signed char)79)))))));
                            arr_25 [i_0] [14ULL] [i_5] [i_0] = ((unsigned long long int) 2567671522085468527LL);
                        }
                    } 
                } 
                var_24 = ((/* implicit */signed char) ((((arr_2 [i_0 + 1] [i_0 - 1]) & (arr_2 [i_0 + 1] [i_0 + 3]))) >> (((((((/* implicit */int) arr_4 [i_0 - 1] [i_0 - 1] [i_0 + 1])) ^ (((/* implicit */int) arr_18 [i_0 + 1] [(unsigned char)4] [i_0 + 1])))) - (39790)))));
            }
        } 
    } 
}
