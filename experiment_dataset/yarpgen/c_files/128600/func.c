/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128600
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128600 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128600
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
    var_19 -= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32761))) & (562948879679488ULL)));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */short) arr_1 [5] [5]);
                var_21 -= ((/* implicit */unsigned short) max((((/* implicit */signed char) ((min((-1831311210), (764284016))) < (((((/* implicit */int) (signed char)-32)) | (((/* implicit */int) arr_1 [(signed char)6] [i_0 + 1]))))))), (arr_3 [i_1])));
            }
        } 
    } 
}
