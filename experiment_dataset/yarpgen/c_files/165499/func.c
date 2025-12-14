/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165499
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165499 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165499
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
    for (int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                arr_4 [i_0] = ((/* implicit */long long int) max((var_9), (((/* implicit */unsigned int) min((((/* implicit */unsigned char) arr_1 [i_0])), (var_13))))));
                arr_5 [i_0] [i_1] [i_1] &= min((((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_3 [i_0] [i_1] [i_0])))) == (((((/* implicit */_Bool) (signed char)101)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (5754686281944297741LL)))))), (arr_3 [i_1] [i_1] [i_1]));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (long long int i_3 = 4; i_3 < 16; i_3 += 3) 
                    {
                        {
                            var_16 = ((/* implicit */int) ((unsigned char) max((var_12), (((/* implicit */short) arr_6 [i_3 - 4] [i_3] [i_3 - 4] [i_3])))));
                            var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((var_5), (((/* implicit */long long int) arr_11 [i_0] [(unsigned short)5] [i_2] [i_2] [i_3 - 1] [(_Bool)1]))))) && (((/* implicit */_Bool) min((min((((/* implicit */unsigned int) arr_12 [i_3])), (var_9))), (((/* implicit */unsigned int) ((var_15) % (((/* implicit */int) arr_7 [i_2] [i_1] [i_0]))))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_18 ^= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) - (var_2)));
}
