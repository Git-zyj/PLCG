/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175171
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175171 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175171
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
    for (int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (unsigned int i_2 = 3; i_2 < 17; i_2 += 2) 
            {
                {
                    arr_8 [i_1] [i_1] [i_2] = ((/* implicit */unsigned short) var_11);
                    var_12 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(var_1))))) % (min((arr_7 [i_2 + 2] [i_2 - 2] [i_2]), (arr_7 [i_2 + 2] [i_1] [i_0])))));
                    var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) arr_1 [i_0] [(short)2])), (arr_6 [i_0] [i_0] [i_0] [i_0]))))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) min((((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((var_11) % (var_11)))) >= (max((((/* implicit */unsigned long long int) var_11)), (11419163072340333370ULL)))))), ((signed char)-101))))));
}
