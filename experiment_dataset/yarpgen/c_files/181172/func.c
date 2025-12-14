/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181172
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181172 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181172
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
    var_14 = ((/* implicit */unsigned short) 14133164444477143192ULL);
    /* LoopSeq 2 */
    for (short i_0 = 4; i_0 < 18; i_0 += 3) 
    {
        arr_2 [i_0 - 3] = ((/* implicit */unsigned char) arr_1 [i_0] [i_0]);
        arr_3 [i_0] = ((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) ((unsigned long long int) (unsigned char)195))) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0 - 4] [i_0])))));
    }
    /* vectorizable */
    for (long long int i_1 = 1; i_1 < 20; i_1 += 4) 
    {
        arr_6 [i_1 + 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) 926646500)) ? (((/* implicit */int) (short)-2268)) : (((((/* implicit */_Bool) (short)18490)) ? (((/* implicit */int) (short)-6974)) : (((/* implicit */int) (_Bool)1))))));
        arr_7 [(unsigned short)7] = ((((/* implicit */_Bool) (short)28781)) ? (((/* implicit */int) (unsigned char)74)) : (((/* implicit */int) (short)-21496)));
    }
}
