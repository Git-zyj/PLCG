/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126207
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126207 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126207
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
    var_17 = ((/* implicit */short) var_9);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            for (int i_2 = 1; i_2 < 14; i_2 += 4) 
            {
                {
                    var_18 *= ((/* implicit */short) max(((~(((/* implicit */int) arr_2 [i_2] [i_1] [i_0])))), (536869888)));
                    var_19 ^= ((/* implicit */short) (+((-(((/* implicit */int) (unsigned char)0))))));
                }
            } 
        } 
    } 
    var_20 ^= ((/* implicit */unsigned short) ((((((/* implicit */int) var_6)) > ((+(var_8))))) ? (var_14) : (max((((((/* implicit */int) var_6)) + (571842649))), (((var_14) + (((/* implicit */int) var_16))))))));
    var_21 = ((/* implicit */unsigned long long int) min((var_21), (max((((/* implicit */unsigned long long int) 571842648)), (1689717864414995864ULL)))));
}
