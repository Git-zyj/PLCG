/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123907
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123907 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123907
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
    for (unsigned short i_0 = 3; i_0 < 18; i_0 += 4) 
    {
        for (unsigned int i_1 = 3; i_1 < 18; i_1 += 1) 
        {
            {
                var_20 += ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_1 - 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1] [i_0 + 1] [1U]))) : (var_1)))) ? (arr_0 [i_1 - 1]) : (max((arr_0 [i_0 - 3]), (arr_0 [i_1])))));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 17; i_2 += 2) 
                {
                    for (unsigned int i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned int) 399001969898626425ULL);
                            var_22 ^= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_3] [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_3] [i_1] [i_3]))) : (arr_10 [i_3] [i_3]))))));
                            var_23 = ((/* implicit */short) ((unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) (short)-29)))) & (arr_1 [(unsigned char)11]))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_24 += ((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (short)26)) ? (((/* implicit */int) var_15)) : (var_2))), ((-(var_7)))))) ? (((/* implicit */int) var_9)) : ((+(((/* implicit */int) var_8))))));
}
