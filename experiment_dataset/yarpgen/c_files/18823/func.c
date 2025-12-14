/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18823
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18823 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18823
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
    var_10 = ((/* implicit */unsigned int) min((var_4), (var_4)));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 15; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_1 - 2] [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_6 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : (0ULL)));
                    var_11 = ((/* implicit */int) 18446744073709551615ULL);
                    var_12 -= ((/* implicit */_Bool) max((var_3), (max((max((arr_2 [i_0] [(unsigned char)14] [i_2]), (((/* implicit */int) arr_3 [i_2] [i_1])))), (((/* implicit */int) max((((/* implicit */unsigned short) arr_4 [i_2])), (arr_6 [i_1]))))))));
                    var_13 -= ((/* implicit */unsigned char) max((arr_5 [i_0] [i_0]), (((arr_5 [i_2] [i_1 + 1]) / (arr_5 [i_2] [i_0])))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */short) var_0);
}
