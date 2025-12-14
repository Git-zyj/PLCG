/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168243
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168243 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168243
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
    for (signed char i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (short i_1 = 2; i_1 < 16; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */unsigned short) 3941727302279403668ULL);
                    arr_9 [i_0] [i_1 - 2] [i_2] = ((/* implicit */short) 7056074010148531757LL);
                    arr_10 [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)20))) % (var_3))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_7) % (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)20)))))) ? (4503599627370240ULL) : (((unsigned long long int) var_9))));
}
