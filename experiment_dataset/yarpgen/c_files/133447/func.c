/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133447
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133447 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133447
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
    for (short i_0 = 1; i_0 < 8; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 9; i_1 += 4) 
        {
            {
                var_17 ^= (-((-(((/* implicit */int) min((((/* implicit */short) (_Bool)1)), (arr_2 [i_1] [2] [i_0 - 1])))))));
                var_18 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((1588150725200127079ULL), (((/* implicit */unsigned long long int) arr_1 [i_1])))))));
                var_19 |= ((/* implicit */_Bool) arr_2 [i_0] [i_1 - 2] [i_1]);
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_2 = 4; i_2 < 10; i_2 += 3) 
    {
        for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
        {
            {
                arr_8 [i_2] [i_3] = ((/* implicit */unsigned short) 18446744073709551615ULL);
                var_20 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (((_Bool)1) ? (-1) : (937466039))))));
                var_21 ^= ((/* implicit */unsigned int) arr_6 [i_2] [i_3 + 1] [0ULL]);
            }
        } 
    } 
}
