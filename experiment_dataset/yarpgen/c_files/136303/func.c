/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136303
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136303 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136303
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
    var_14 = ((/* implicit */int) ((((((/* implicit */_Bool) (~(15U)))) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))) > (((/* implicit */unsigned int) ((/* implicit */int) var_12)))));
    /* LoopNest 2 */
    for (short i_0 = 4; i_0 < 7; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 9; i_1 += 1) 
        {
            {
                var_15 = ((((/* implicit */_Bool) (-((+(arr_3 [6])))))) ? (((((arr_3 [i_0]) * (arr_3 [i_1 + 1]))) ^ (var_10))) : (((/* implicit */unsigned int) arr_0 [i_0])));
                /* LoopNest 2 */
                for (signed char i_2 = 1; i_2 < 6; i_2 += 1) 
                {
                    for (short i_3 = 2; i_3 < 9; i_3 += 3) 
                    {
                        {
                            var_16 = ((/* implicit */signed char) max(((unsigned short)4095), (((/* implicit */unsigned short) var_8))));
                            arr_10 [i_0] [0ULL] [i_0] [(short)4] |= ((/* implicit */long long int) arr_1 [i_0 + 2] [i_2]);
                        }
                    } 
                } 
                var_17 = ((/* implicit */unsigned char) var_10);
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_4 = 2; i_4 < 20; i_4 += 4) 
    {
        for (long long int i_5 = 0; i_5 < 21; i_5 += 1) 
        {
            {
                var_18 += ((/* implicit */unsigned long long int) ((arr_14 [i_5] [i_5]) / (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)36)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)61441)))))) ? (((/* implicit */int) arr_15 [i_4] [i_4] [i_4])) : (((var_9) % (((/* implicit */int) (unsigned short)61436))))))));
                /* LoopNest 2 */
                for (unsigned int i_6 = 4; i_6 < 20; i_6 += 3) 
                {
                    for (unsigned char i_7 = 0; i_7 < 21; i_7 += 2) 
                    {
                        {
                            arr_24 [i_4] [i_5] [i_6] [i_5] [i_7] = max((((/* implicit */int) arr_15 [i_5] [i_5] [i_5])), (((((/* implicit */_Bool) arr_15 [i_5] [i_5] [i_5])) ? (((/* implicit */int) ((_Bool) arr_22 [i_5] [i_5] [i_5] [i_5]))) : (((((/* implicit */int) (signed char)-36)) & (((/* implicit */int) arr_22 [(short)3] [i_5] [i_5] [i_5])))))));
                            var_19 = ((/* implicit */signed char) ((var_10) * (((/* implicit */unsigned int) ((/* implicit */int) var_0)))));
                        }
                    } 
                } 
            }
        } 
    } 
}
