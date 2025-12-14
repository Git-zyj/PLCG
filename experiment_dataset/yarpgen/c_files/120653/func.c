/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120653
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120653 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120653
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
    var_20 = ((/* implicit */int) var_12);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_0] &= ((/* implicit */int) var_2);
                var_21 = ((/* implicit */short) min((((((/* implicit */_Bool) min((((/* implicit */long long int) arr_3 [i_0] [10ULL])), (arr_0 [5U])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_18)) && (((/* implicit */_Bool) arr_4 [i_0] [i_0])))))) : ((+(0ULL))))), (arr_1 [i_0])));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 1) 
    {
        var_22 -= ((/* implicit */unsigned long long int) min(((~(((/* implicit */int) var_9)))), (((/* implicit */int) ((max((var_5), (((/* implicit */long long int) var_0)))) > (((/* implicit */long long int) 17)))))));
        var_23 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_2])) ? (arr_7 [i_2]) : (var_4)))) ? ((~(((/* implicit */int) ((signed char) var_10))))) : (((int) var_6)));
        /* LoopNest 2 */
        for (short i_3 = 1; i_3 < 10; i_3 += 3) 
        {
            for (signed char i_4 = 0; i_4 < 11; i_4 += 1) 
            {
                {
                    var_24 ^= ((/* implicit */unsigned long long int) arr_8 [i_3]);
                    var_25 = ((/* implicit */short) var_11);
                    var_26 |= ((/* implicit */long long int) (~(((/* implicit */int) (!((!(((/* implicit */_Bool) var_12)))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 1) 
                    {
                        for (short i_6 = 0; i_6 < 11; i_6 += 3) 
                        {
                            {
                                var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) (~(((/* implicit */int) var_2)))))));
                                arr_18 [4U] [4U] [4U] &= ((/* implicit */short) arr_3 [2] [i_3]);
                                arr_19 [i_2] [i_2] [i_4] [i_2] [i_6] [i_5] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) arr_13 [9ULL] [9ULL] [i_4] [i_4])) ? (((/* implicit */unsigned long long int) min((var_5), (((/* implicit */long long int) arr_17 [i_3 + 1] [i_5] [i_3 + 1] [i_3 - 1] [i_3 + 1] [i_3 + 1] [i_3 - 1]))))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_3])) ? (arr_15 [5] [i_4] [(short)9] [(short)9]) : (arr_15 [i_2] [i_3] [i_3] [6ULL])))), (((((/* implicit */_Bool) arr_14 [i_5])) ? (((/* implicit */unsigned long long int) var_5)) : (var_10)))))));
                                arr_20 [i_5] = ((/* implicit */short) max((((/* implicit */unsigned long long int) var_17)), (min((max((((/* implicit */unsigned long long int) arr_3 [i_2] [i_5])), (var_13))), (((/* implicit */unsigned long long int) var_7))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (long long int i_7 = 0; i_7 < 11; i_7 += 1) 
                    {
                        var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) (!(((/* implicit */_Bool) var_3)))))));
                        var_29 = ((/* implicit */long long int) (+((~(((/* implicit */int) arr_8 [i_2]))))));
                    }
                }
            } 
        } 
        var_30 += ((/* implicit */unsigned long long int) ((unsigned int) arr_13 [i_2] [(short)5] [i_2] [4U]));
    }
}
