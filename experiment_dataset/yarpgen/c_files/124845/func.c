/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124845
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
    var_11 = ((/* implicit */long long int) min((var_11), (((/* implicit */long long int) var_6))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        for (short i_4 = 0; i_4 < 14; i_4 += 2) 
                        {
                            {
                                arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */signed char) max(((~(((/* implicit */int) arr_13 [i_4] [i_4] [i_4] [i_4])))), (((/* implicit */int) arr_12 [i_4] [(_Bool)1] [i_2] [i_1] [i_0]))));
                                arr_16 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) arr_2 [i_0] [(signed char)3] [i_1]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0] [(signed char)5] [i_0] [i_2] [i_2]))) : (((arr_12 [i_4] [i_3] [(_Bool)1] [i_1] [i_0]) ? (((/* implicit */unsigned long long int) arr_3 [i_0] [i_2] [i_0])) : (arr_14 [(_Bool)1] [(_Bool)1] [i_2] [i_2] [i_2] [i_2] [i_2])))))) ? (((/* implicit */unsigned int) (+((~(((/* implicit */int) var_10))))))) : ((-(((((/* implicit */_Bool) var_9)) ? (arr_11 [i_3] [i_3] [i_0] [(_Bool)1] [i_0]) : (var_6)))))));
                                var_12 = min(((-(((((/* implicit */_Bool) arr_11 [(short)9] [i_3] [i_3] [i_3] [i_3])) ? (arr_7 [i_0] [i_0] [i_0] [i_0] [6ULL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [13U] [(_Bool)1] [i_3] [i_4]))))))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_7))))));
                            }
                        } 
                    } 
                } 
                var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) (~(((/* implicit */int) var_3)))))));
            }
        } 
    } 
}
