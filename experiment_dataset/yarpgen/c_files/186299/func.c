/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186299
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186299 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186299
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 12; i_1 += 4) 
        {
            {
                arr_5 [i_1] = ((/* implicit */_Bool) (unsigned short)27586);
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (signed char i_3 = 4; i_3 < 11; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (short i_4 = 0; i_4 < 14; i_4 += 4) 
                            {
                                var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_3 [i_0] [i_3 - 3])) : (((/* implicit */int) arr_3 [i_0] [i_1 + 1])))))));
                                arr_13 [i_0] [i_0] [i_2] [i_2] [i_2] [i_4] = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_0] [(short)11] [i_0] [i_2] [8U] [i_3] [i_4])) && (((/* implicit */_Bool) (short)-2753))))) | (((/* implicit */int) (_Bool)1))));
                            }
                            var_16 |= ((/* implicit */short) var_6);
                            var_17 = ((/* implicit */signed char) var_13);
                        }
                    } 
                } 
            }
        } 
    } 
    var_18 = max(((unsigned short)4728), (((/* implicit */unsigned short) (_Bool)1)));
    var_19 = ((/* implicit */unsigned long long int) var_4);
    var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) ((((/* implicit */int) var_5)) >= (((/* implicit */int) max((((var_13) > (((/* implicit */unsigned long long int) var_4)))), ((!(((/* implicit */_Bool) 5907026287265555862LL))))))))))));
}
