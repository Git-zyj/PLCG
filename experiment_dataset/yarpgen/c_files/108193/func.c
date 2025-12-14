/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108193
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108193 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108193
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
    var_12 = ((/* implicit */_Bool) var_4);
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 10; i_0 += 3) 
    {
        for (long long int i_1 = 2; i_1 < 8; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_1 + 3] = ((/* implicit */short) min((arr_2 [i_0] [i_1 - 1]), (min((((/* implicit */int) (unsigned short)11467)), (-33554432)))));
                var_13 = ((/* implicit */short) max((var_11), (((/* implicit */unsigned short) arr_3 [i_0]))));
                var_14 |= ((/* implicit */int) (short)26717);
                arr_6 [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((long long int) var_8))))) ? (var_0) : (((/* implicit */int) var_6))));
            }
        } 
    } 
    var_15 ^= max(((-(((/* implicit */int) (short)-27087)))), ((+(((var_5) ? (((/* implicit */int) (unsigned char)58)) : (((/* implicit */int) (_Bool)1)))))));
}
