/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117772
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117772 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117772
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
    for (unsigned long long int i_0 = 2; i_0 < 12; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (unsigned short i_2 = 2; i_2 < 13; i_2 += 1) 
            {
                {
                    arr_7 [i_0 + 1] [i_1] = ((/* implicit */unsigned char) ((short) var_2));
                    var_16 = ((/* implicit */_Bool) 17540067590105187478ULL);
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_17 ^= ((/* implicit */long long int) ((max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_5))))), (min((3016015188396816408ULL), (arr_5 [i_0 - 2]))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))));
                        arr_10 [i_0] [i_1] [i_2] [i_3] [i_0 + 2] [i_1] = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) arr_1 [i_0 - 2])) ? (0U) : (((/* implicit */unsigned int) arr_1 [i_0 + 1])))));
                    }
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) min((var_13), (var_2)))), (((unsigned long long int) ((((/* implicit */_Bool) 6U)) ? (((/* implicit */long long int) var_9)) : (9223372036854775807LL))))));
}
