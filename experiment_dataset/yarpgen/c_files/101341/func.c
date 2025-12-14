/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101341
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
    for (long long int i_0 = 3; i_0 < 21; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_7 [(_Bool)1] [i_1] = ((/* implicit */int) (+(-9066797195094177704LL)));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 24; i_2 += 3) 
                {
                    for (long long int i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        {
                            var_17 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 6165540634214336863ULL)) ? (-9066797195094177704LL) : (((/* implicit */long long int) ((/* implicit */int) (short)15603)))))) < (var_7)));
                            var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_0 + 1] [i_1] [i_2])) ? (min((arr_2 [i_0 + 3] [i_1]), (arr_2 [i_0 + 3] [i_1]))) : (((/* implicit */int) arr_0 [i_0]))));
                        }
                    } 
                } 
                arr_12 [i_0 + 2] [i_1] = ((/* implicit */unsigned long long int) min((arr_8 [i_0 + 2] [i_0 + 2] [i_0 + 2]), (arr_2 [i_0] [i_0])));
            }
        } 
    } 
    var_19 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) var_1)) ? (var_5) : (((/* implicit */unsigned long long int) var_10))))))));
}
