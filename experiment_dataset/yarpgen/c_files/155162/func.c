/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155162
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155162 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155162
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
    var_12 |= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)135))) > (((((/* implicit */unsigned int) ((/* implicit */int) var_3))) + (var_8)))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (signed char i_1 = 3; i_1 < 10; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    var_13 ^= ((/* implicit */short) max(((-(((/* implicit */int) arr_3 [i_0] [i_1] [i_2])))), (((/* implicit */int) ((signed char) arr_0 [i_0])))));
                    var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) min((((((/* implicit */_Bool) max((144115188075855872ULL), (((/* implicit */unsigned long long int) arr_3 [i_0] [i_1] [i_2]))))) ? (((/* implicit */unsigned int) (-(var_0)))) : (arr_0 [i_0]))), (((/* implicit */unsigned int) ((unsigned char) (+(var_1))))))))));
                    var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) (short)7258)) && (((/* implicit */_Bool) max((((/* implicit */signed char) (_Bool)1)), ((signed char)90)))))) ? (((((/* implicit */unsigned long long int) 1510100592U)) * (18302628885633695728ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)224))))))));
                }
            } 
        } 
    } 
}
