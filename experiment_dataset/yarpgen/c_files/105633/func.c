/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105633
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105633 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105633
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
    var_20 += ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) + (((/* implicit */int) (_Bool)1))))) != (((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) ((/* implicit */int) var_19))) : (var_18))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                var_21 = (_Bool)1;
                /* LoopSeq 1 */
                /* vectorizable */
                for (int i_2 = 0; i_2 < 18; i_2 += 3) 
                {
                    var_22 = 8335832529569561931LL;
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned long long int) ((int) arr_6 [(unsigned short)12] [i_1] [i_1] [i_1]));
                                var_24 -= ((/* implicit */unsigned long long int) ((arr_4 [i_0] [(unsigned short)11] [i_1] [i_3]) ? (((/* implicit */int) (short)20579)) : (var_7)));
                                arr_11 [i_4] [i_3] [i_2] [(short)2] [i_0] = ((/* implicit */long long int) var_17);
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1)))))));
                }
                arr_12 [i_0] [i_1] = ((/* implicit */unsigned long long int) min((min((arr_6 [i_0] [i_0] [i_1] [(_Bool)1]), (arr_6 [i_1] [(short)2] [i_1] [(short)2]))), ((-(arr_6 [i_0] [9] [i_0] [i_0])))));
                var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_3 [i_0] [i_0] [i_1]) : (((/* implicit */unsigned long long int) var_7))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))) : (((((/* implicit */_Bool) 4283241527U)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (var_5))))))));
            }
        } 
    } 
}
