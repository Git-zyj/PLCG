/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110074
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110074 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110074
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
    for (unsigned int i_0 = 3; i_0 < 20; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (unsigned int i_2 = 2; i_2 < 22; i_2 += 3) 
            {
                {
                    var_16 = ((/* implicit */unsigned int) ((_Bool) ((unsigned long long int) ((unsigned int) (signed char)117))));
                    var_17 = max((max((((/* implicit */long long int) (short)32767)), (var_8))), (((/* implicit */long long int) ((unsigned short) (signed char)-117))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_3 = 1; i_3 < 21; i_3 += 1) 
    {
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (unsigned int i_5 = 4; i_5 < 20; i_5 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        for (unsigned short i_7 = 3; i_7 < 21; i_7 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */int) ((_Bool) var_9));
                                var_19 ^= ((/* implicit */short) ((unsigned short) 133955584));
                            }
                        } 
                    } 
                    var_20 ^= ((/* implicit */long long int) max((((/* implicit */int) ((short) ((unsigned int) (signed char)100)))), (var_10)));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned char) ((_Bool) ((unsigned char) var_8)));
}
