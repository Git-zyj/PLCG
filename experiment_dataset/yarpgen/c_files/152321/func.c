/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152321
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152321 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152321
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
    for (short i_0 = 1; i_0 < 15; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 16; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                {
                    arr_7 [i_2] [i_2] [i_2] [i_0] = ((/* implicit */signed char) arr_2 [i_2] [i_2]);
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 3; i_3 < 15; i_3 += 3) 
                    {
                        for (short i_4 = 0; i_4 < 17; i_4 += 1) 
                        {
                            {
                                arr_14 [i_0] [i_0] [i_0 - 1] [i_0] [(short)4] [i_0] = ((/* implicit */short) ((1557994287) > (arr_1 [7U] [i_3])));
                                arr_15 [i_4] [i_4] [i_0] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) (-(1557994287)))) ? ((-(28541157134714538ULL))) : (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_11 [i_0] [i_1] [14U] [i_3] [i_4])), (var_2)))))), (((/* implicit */unsigned long long int) arr_5 [8LL] [i_1]))));
                                var_11 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-((-(((/* implicit */int) (_Bool)0))))))) ? ((-(((/* implicit */int) (_Bool)0)))) : (((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? ((+(((/* implicit */int) (signed char)-107)))) : (((/* implicit */int) min((arr_3 [i_0] [i_0]), (arr_5 [(_Bool)1] [i_1]))))))));
                            }
                        } 
                    } 
                    arr_16 [i_0] = ((/* implicit */int) min((((((((/* implicit */_Bool) arr_6 [i_0] [i_0])) ? (arr_13 [i_0] [i_1] [i_1 + 1] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)86))))) & (((/* implicit */unsigned long long int) arr_2 [i_1 - 1] [i_1 - 1])))), (((/* implicit */unsigned long long int) ((int) arr_9 [i_1] [i_1 + 1] [(_Bool)1] [i_1 + 1])))));
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */int) var_7);
}
