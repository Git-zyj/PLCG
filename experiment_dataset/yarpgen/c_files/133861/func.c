/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133861
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133861 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133861
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
    var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) 8182640448800567186LL))));
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 14; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                arr_4 [i_0] [0] [i_1] = ((/* implicit */unsigned short) min((((/* implicit */long long int) arr_1 [i_1])), (var_6)));
                /* LoopSeq 1 */
                for (long long int i_2 = 1; i_2 < 15; i_2 += 4) 
                {
                    var_20 ^= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_2 - 1]))) * ((+(((((/* implicit */_Bool) var_12)) ? (arr_6 [i_1]) : (arr_3 [i_2] [i_1] [i_0])))))));
                    var_21 = ((/* implicit */unsigned short) arr_2 [i_0] [i_1]);
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 17; i_4 += 4) 
                        {
                            {
                                arr_13 [i_2] [i_3] [i_4] = ((/* implicit */_Bool) (unsigned short)20673);
                                arr_14 [i_2] [i_1] [i_1] [11LL] [i_1] [i_1] = ((/* implicit */signed char) var_15);
                            }
                        } 
                    } 
                }
                var_22 -= ((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) (_Bool)1)), (var_13)))))))));
                var_23 = ((/* implicit */unsigned int) (!(((((/* implicit */int) arr_5 [i_0 - 2] [i_0] [i_0 + 3])) < (((/* implicit */int) arr_5 [i_1] [i_0] [i_0]))))));
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)16248)) ^ (((/* implicit */int) (short)511)))))));
}
