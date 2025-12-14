/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155849
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155849 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155849
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
    var_11 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)20))) > (((((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned char)80), (((/* implicit */unsigned char) (_Bool)1)))))) ^ (5606988990238141725ULL)))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 4; i_0 < 8; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    var_12 += ((/* implicit */signed char) max((((/* implicit */int) min((arr_3 [i_0 - 1] [i_0 + 3] [i_0 - 4]), (arr_3 [i_0 + 2] [i_0 + 2] [i_0 - 4])))), ((~(((/* implicit */int) arr_1 [i_0 - 3]))))));
                    var_13 = ((/* implicit */unsigned short) max((max((((long long int) arr_2 [i_0] [i_1] [i_2])), (((/* implicit */long long int) max(((short)-22072), (((/* implicit */short) var_6))))))), (((/* implicit */long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_2] [i_1] [i_0])) ? (((/* implicit */int) arr_7 [i_1] [i_1] [i_0])) : (((/* implicit */int) arr_4 [i_2] [(unsigned short)0]))))), (((((/* implicit */_Bool) arr_1 [i_0 - 4])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_0))))))));
                }
            } 
        } 
    } 
}
