/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161418
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161418 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161418
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        var_10 = ((/* implicit */unsigned char) ((((((/* implicit */long long int) ((/* implicit */int) (short)29968))) & (var_8))) + (((/* implicit */long long int) ((((/* implicit */int) (short)29192)) << (0LL))))));
        var_11 = ((/* implicit */unsigned int) ((((/* implicit */int) ((_Bool) (short)-28872))) - (((/* implicit */int) ((((-1LL) % (var_8))) == (-1LL))))));
    }
    var_12 = ((/* implicit */signed char) min((var_12), (((/* implicit */signed char) 6899689945122955742ULL))));
    /* LoopNest 2 */
    for (unsigned char i_1 = 0; i_1 < 12; i_1 += 3) 
    {
        for (int i_2 = 0; i_2 < 12; i_2 += 2) 
        {
            {
                var_13 = ((/* implicit */unsigned char) ((int) ((var_7) == (((/* implicit */int) (_Bool)1)))));
                arr_8 [i_1] [i_1] = ((/* implicit */unsigned char) 2986135697307164771LL);
                var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) ((((((/* implicit */int) (short)29968)) % (((/* implicit */int) (unsigned short)1193)))) & ((+(((/* implicit */int) (_Bool)1)))))))));
            }
        } 
    } 
}
