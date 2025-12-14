/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129241
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129241 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129241
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
    var_10 &= ((/* implicit */unsigned long long int) ((unsigned short) ((var_9) / (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_5), (((/* implicit */unsigned short) (signed char)-104)))))))));
    var_11 = ((/* implicit */short) max((var_11), (((/* implicit */short) min((((/* implicit */int) var_7)), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_4)))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (long long int i_1 = 3; i_1 < 15; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)33045))) & (67092480LL)));
                arr_5 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) min((((/* implicit */long long int) min((arr_0 [i_1 + 1]), (arr_0 [i_1 + 2])))), (max((((/* implicit */long long int) (unsigned short)58939)), (67092463LL)))));
            }
        } 
    } 
}
