/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14963
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14963 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14963
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
    for (long long int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                arr_7 [i_1] = ((/* implicit */long long int) max((var_13), (((/* implicit */unsigned long long int) var_3))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 3) 
                {
                    for (long long int i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        {
                            arr_13 [i_1] [i_2] [i_1] [i_1] = ((/* implicit */unsigned short) var_1);
                            arr_14 [i_0] [i_0] [i_1] [i_1] [i_1] [i_1] = min((max((max((var_17), (var_16))), (((/* implicit */long long int) max((var_11), (var_14)))))), (((/* implicit */long long int) var_14)));
                            arr_15 [i_1] = ((/* implicit */short) var_9);
                        }
                    } 
                } 
                arr_16 [i_1] [i_1] = ((/* implicit */short) min((((((/* implicit */_Bool) var_3)) ? (var_4) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (var_4))))), (((/* implicit */long long int) min((var_14), (max((var_5), (var_5))))))));
                var_18 = ((/* implicit */unsigned short) var_3);
                arr_17 [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) min(((unsigned short)0), (((/* implicit */unsigned short) var_7)))))) : (var_4)))) ? (var_10) : (var_16)));
            }
        } 
    } 
    var_19 = ((/* implicit */long long int) var_13);
    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) var_14)) ? (min((((/* implicit */unsigned long long int) var_12)), (var_9))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))));
}
