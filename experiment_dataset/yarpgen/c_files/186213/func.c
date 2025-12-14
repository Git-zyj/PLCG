/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186213
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186213 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186213
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
    for (signed char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (signed char i_1 = 3; i_1 < 14; i_1 += 2) 
        {
            for (unsigned int i_2 = 3; i_2 < 14; i_2 += 2) 
            {
                {
                    var_13 *= ((/* implicit */short) min((((/* implicit */unsigned int) (short)-27614)), (((unsigned int) arr_4 [i_0]))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (long long int i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) ((long long int) arr_9 [i_3])))));
                        arr_12 [i_0] [i_3] [i_2 - 3] [i_3] &= ((/* implicit */short) ((((/* implicit */int) var_0)) / (((/* implicit */int) var_9))));
                        var_15 &= ((/* implicit */unsigned int) ((short) (short)-27620));
                        var_16 ^= ((/* implicit */signed char) (!(((/* implicit */_Bool) 1662761309746885865LL))));
                        arr_13 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) arr_11 [i_0] [i_2] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_1 - 3]))) : (var_7))));
                    }
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (short i_4 = 0; i_4 < 22; i_4 += 1) 
    {
        for (unsigned int i_5 = 0; i_5 < 22; i_5 += 4) 
        {
            {
                arr_18 [i_4] [i_5] [i_5] = ((/* implicit */long long int) arr_17 [i_5] [i_5] [i_5]);
                var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-27605))) + (114076706U)))) ? (114076706U) : (4294967295U))))));
                var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) (short)27617))));
            }
        } 
    } 
}
