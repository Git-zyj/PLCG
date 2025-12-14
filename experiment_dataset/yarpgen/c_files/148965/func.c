/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148965
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148965 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148965
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
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                arr_4 [9LL] [i_1] [i_1] = ((/* implicit */short) (+(((/* implicit */int) arr_2 [i_0] [i_1]))));
                var_14 = ((/* implicit */int) max((var_14), ((~((+(((((/* implicit */int) (unsigned short)59351)) | (((/* implicit */int) (unsigned short)24880))))))))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned char) min(((unsigned short)40653), (((/* implicit */unsigned short) (short)-21911))));
    var_16 = ((/* implicit */long long int) max((min((((/* implicit */unsigned int) ((unsigned char) var_1))), (var_6))), (((/* implicit */unsigned int) var_4))));
}
