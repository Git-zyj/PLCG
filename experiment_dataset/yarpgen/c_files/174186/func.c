/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174186
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174186 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174186
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
    var_13 = ((/* implicit */unsigned int) (~(((int) ((((/* implicit */int) var_5)) | (var_10))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (unsigned short i_2 = 1; i_2 < 23; i_2 += 1) 
            {
                {
                    arr_8 [i_1] [i_1] &= ((/* implicit */unsigned long long int) arr_5 [i_0] [i_0] [i_0]);
                    var_14 = (i_0 % 2 == 0) ? ((+(((((((((/* implicit */int) (short)-23093)) + (2147483647))) << (((((arr_7 [i_0] [i_0] [i_2] [i_0]) + (637179623529434503LL))) - (9LL))))) - (((/* implicit */int) min((arr_5 [i_0] [i_1] [i_2]), (((/* implicit */unsigned char) var_5))))))))) : ((+(((((((((/* implicit */int) (short)-23093)) + (2147483647))) << (((((((((arr_7 [i_0] [i_0] [i_2] [i_0]) + (637179623529434503LL))) - (9LL))) + (8010241793607199914LL))) - (12LL))))) - (((/* implicit */int) min((arr_5 [i_0] [i_1] [i_2]), (((/* implicit */unsigned char) var_5)))))))));
                }
            } 
        } 
    } 
}
