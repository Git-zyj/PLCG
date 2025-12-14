/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170527
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170527 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170527
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
    for (short i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned char) min((min((((/* implicit */long long int) (unsigned char)85)), (5085339069668456833LL))), (((/* implicit */long long int) ((unsigned short) ((unsigned char) var_0))))));
                var_14 = arr_3 [i_0];
            }
        } 
    } 
    var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) min(((short)(-32767 - 1)), (((/* implicit */short) (unsigned char)105)))))));
}
