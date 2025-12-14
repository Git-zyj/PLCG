/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158109
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158109 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158109
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
    var_15 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)165)) ? (13489587599776482400ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)103)))));
    var_16 = ((/* implicit */short) var_6);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 3; i_0 < 10; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (short i_2 = 2; i_2 < 8; i_2 += 2) 
            {
                {
                    arr_7 [i_0] [i_0] [i_0] [i_2 - 2] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) arr_4 [i_0 + 2])) ? (arr_4 [i_0 + 1]) : (arr_4 [i_0 - 3])))));
                    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) (~(arr_1 [i_0] [i_0])))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) min((var_8), (((/* implicit */short) arr_0 [i_2])))))))) : (((arr_6 [i_0 - 1]) - (((/* implicit */unsigned long long int) arr_4 [i_1]))))));
                }
            } 
        } 
    } 
}
