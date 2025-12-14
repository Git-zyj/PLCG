/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173019
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173019 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173019
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
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_14)), (min(((unsigned short)53216), ((unsigned short)65535))))))) & (((((/* implicit */_Bool) (~(var_7)))) ? (((((/* implicit */_Bool) var_9)) ? (5288861229523455431ULL) : (13157882844186096186ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (unsigned char)237)))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 3; i_0 < 16; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 13; i_1 += 3) 
        {
            for (int i_2 = 3; i_2 < 16; i_2 += 2) 
            {
                {
                    arr_7 [i_0] [i_0] [i_2] = ((/* implicit */unsigned short) max((((/* implicit */int) (short)2047)), (125829120)));
                    arr_8 [i_2] [i_2] = ((/* implicit */unsigned long long int) ((long long int) var_3));
                }
            } 
        } 
    } 
}
