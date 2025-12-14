/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113860
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113860 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113860
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
    var_11 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((var_7), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_3))))))))));
    var_12 = ((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) ((short) (_Bool)1))) : (((/* implicit */int) (short)31002))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 2; i_0 < 21; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (unsigned char i_2 = 4; i_2 < 21; i_2 += 2) 
            {
                {
                    arr_6 [i_2 - 3] [i_1] [i_0 - 2] = ((/* implicit */unsigned char) var_3);
                    /* LoopNest 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 24; i_4 += 2) 
                        {
                            {
                                var_13 *= ((/* implicit */long long int) ((signed char) max(((~(arr_8 [17ULL]))), (4916983338836620190ULL))));
                                arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (!(((/* implicit */_Bool) 4069182716U)));
                                arr_12 [(signed char)7] [i_3] [i_2] [i_1] [i_0] = ((((/* implicit */_Bool) ((int) arr_3 [i_0 + 1]))) ? (((((/* implicit */_Bool) arr_4 [i_3] [(_Bool)1] [i_3 - 1] [i_3 - 1])) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-36))))) : (arr_8 [i_0]))) : (((/* implicit */unsigned long long int) arr_0 [i_0 - 2])));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
