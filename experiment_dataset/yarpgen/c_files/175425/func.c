/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175425
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175425 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175425
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
    for (short i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 21; i_2 += 3) 
                {
                    for (short i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_13 [i_3] [i_1] [i_0] [i_3] [i_3] = ((/* implicit */signed char) (-((~(((((/* implicit */unsigned int) ((/* implicit */int) (short)-8472))) ^ (927349816U)))))));
                                var_18 = ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_1] [i_4])) ? (((((/* implicit */_Bool) arr_1 [i_0] [i_2])) ? (((/* implicit */int) arr_1 [i_0] [i_3])) : (((/* implicit */int) arr_1 [i_0] [i_1])))) : (((((/* implicit */_Bool) (unsigned short)14043)) ? (((/* implicit */int) arr_10 [i_4])) : (((/* implicit */int) arr_10 [i_0]))))));
                                var_19 = ((/* implicit */_Bool) arr_9 [(short)8] [(unsigned short)6] [i_4]);
                                var_20 = ((/* implicit */short) (-(((((/* implicit */_Bool) (short)960)) ? (max((((/* implicit */unsigned int) var_6)), (514831977U))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_2] [i_3])) + (((/* implicit */int) var_13)))))))));
                            }
                        } 
                    } 
                } 
                arr_14 [i_0] = ((/* implicit */unsigned short) min(((~(max((-5645235310372990266LL), (((/* implicit */long long int) var_5)))))), (((((/* implicit */_Bool) ((short) arr_1 [i_0] [i_1]))) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [(unsigned char)14] [i_1] [i_1]))) : (((-1897976879714219983LL) & (((/* implicit */long long int) ((/* implicit */int) (unsigned char)38)))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */short) (~((-(((/* implicit */int) ((short) (signed char)104)))))));
    var_22 = ((/* implicit */long long int) var_14);
}
