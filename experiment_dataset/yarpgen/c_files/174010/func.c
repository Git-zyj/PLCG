/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174010
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174010 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174010
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
    for (signed char i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (short i_1 = 3; i_1 < 21; i_1 += 4) 
        {
            {
                var_11 ^= ((/* implicit */long long int) ((int) ((arr_0 [i_1 + 1]) >> (((((/* implicit */int) (unsigned char)98)) - (69))))));
                var_12 = ((/* implicit */short) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_6 [i_1 + 1] [i_1 - 2])))))));
                arr_7 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (((((~(((((/* implicit */int) var_2)) | (((/* implicit */int) arr_5 [i_1])))))) + (2147483647))) << (((unsigned int) ((((/* implicit */int) var_10)) >> (((/* implicit */int) arr_1 [(unsigned char)18] [i_0])))))));
                arr_8 [i_0] [10] = ((/* implicit */int) ((((/* implicit */int) var_3)) != ((+(((/* implicit */int) var_10))))));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned char) var_9);
}
