/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110328
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110328 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110328
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
    for (int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 23; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 3) 
                        {
                            {
                                var_15 = ((/* implicit */int) arr_5 [i_3] [3U] [i_1] [i_0]);
                                var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_9 [i_1 + 1] [i_1]), (arr_8 [i_1 - 1] [i_1] [i_1 - 1] [i_0] [i_0])))) ? (arr_12 [i_0] [(unsigned char)14] [i_2] [i_3] [(short)1]) : (((/* implicit */unsigned long long int) ((long long int) arr_3 [i_1 - 1] [i_1 - 1])))));
                                var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) (-(arr_2 [i_0] [i_3]))))));
                                var_18 = ((/* implicit */long long int) arr_12 [i_4] [i_3] [4LL] [i_1] [i_0]);
                                var_19 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) (+(((/* implicit */int) var_0))))))) - (664529433157428986LL)));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((var_7), (var_8))))));
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 22; i_5 += 3) 
                    {
                        for (long long int i_6 = 2; i_6 < 23; i_6 += 3) 
                        {
                            {
                                var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) var_10))));
                                var_22 = ((/* implicit */signed char) max((var_2), (((((((/* implicit */long long int) ((/* implicit */int) var_8))) != (var_2))) ? (((var_6) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (4740306106928505040LL))) : (((/* implicit */long long int) ((unsigned int) arr_11 [i_0] [18U] [i_1] [18U] [i_2] [i_5] [i_2])))))));
                                var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((-1766916171), (((/* implicit */int) arr_14 [22ULL] [13LL] [i_1 - 1] [i_2] [i_1 - 1] [i_1 - 1]))))) ? (((/* implicit */int) arr_0 [i_5])) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [17U] [i_1 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (arr_16 [i_5] [16ULL] [21U] [i_5] [(unsigned char)23])))) ? (((/* implicit */int) ((short) var_2))) : (((/* implicit */int) ((((/* implicit */int) var_11)) == (((/* implicit */int) var_1)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */long long int) var_1);
}
