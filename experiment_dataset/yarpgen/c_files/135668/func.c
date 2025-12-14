/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135668
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
    var_11 = ((/* implicit */short) ((((/* implicit */int) (unsigned char)135)) | (((/* implicit */int) (unsigned short)51153))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 17; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 16; i_1 += 1) 
        {
            {
                arr_5 [i_1] = ((/* implicit */signed char) ((max((arr_1 [i_0 + 2] [i_1 + 3]), (((/* implicit */long long int) (unsigned short)51153)))) & (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)112)) ? (((/* implicit */int) (unsigned char)116)) : (((/* implicit */int) (signed char)101)))))));
                var_12 -= ((/* implicit */unsigned int) ((int) ((((/* implicit */int) arr_3 [i_0 - 1] [i_0 + 2] [i_0 + 2])) | (((/* implicit */int) arr_3 [i_0 - 2] [i_0 + 2] [i_0 - 2])))));
            }
        } 
    } 
}
