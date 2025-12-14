/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126817
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126817 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126817
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
    var_16 = ((/* implicit */signed char) (-(((/* implicit */int) var_15))));
    var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_1)), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) | (var_4)))))) ? (((/* implicit */int) var_1)) : (((((/* implicit */_Bool) ((((/* implicit */int) var_3)) & (((/* implicit */int) var_14))))) ? (((((/* implicit */int) var_15)) | (((/* implicit */int) var_1)))) : ((-(((/* implicit */int) var_1))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */int) arr_2 [i_0]);
                var_19 = ((/* implicit */short) (-(((arr_3 [i_1] [i_1]) << (((max((arr_3 [i_1] [i_0]), (((/* implicit */unsigned int) arr_5 [i_0] [i_1])))) - (753587954U)))))));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 18; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 21; i_4 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((arr_3 [i_0] [i_1]) == (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [i_3] [i_2] [i_0]))))))) != (((((/* implicit */_Bool) arr_6 [i_0] [(unsigned short)3] [(unsigned short)3])) ? (arr_1 [i_0] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_3])))))))) * (((/* implicit */int) ((((((/* implicit */_Bool) arr_8 [i_0] [i_0] [(short)13] [(_Bool)1] [i_4] [i_0])) ? (((/* implicit */int) arr_4 [i_0] [(short)3] [i_3])) : (((/* implicit */int) arr_6 [i_0] [i_0] [i_4])))) <= (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_3] [i_2]))) != (arr_8 [i_0] [i_0] [i_3] [i_1] [i_0] [i_3])))))))));
                                var_21 = ((/* implicit */_Bool) arr_4 [i_0] [i_2] [i_2 - 1]);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_22 *= ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)243)) ? (0U) : (((/* implicit */unsigned int) 0))));
}
