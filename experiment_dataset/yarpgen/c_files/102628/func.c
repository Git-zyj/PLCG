/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102628
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102628 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102628
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 7; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) 3197007954218089511ULL);
                    arr_10 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (_Bool)0);
                    arr_11 [3ULL] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) max((var_1), (arr_6 [5ULL])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((10686760743020738827ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))) : (max((11964459430606793374ULL), (((/* implicit */unsigned long long int) (unsigned char)28)))))) != (((/* implicit */unsigned long long int) ((max((((/* implicit */unsigned int) (_Bool)0)), (var_11))) / (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0 + 2]))))))));
                    arr_12 [i_0] [i_1] [i_2] = ((/* implicit */_Bool) var_8);
                    arr_13 [i_1] = ((((/* implicit */unsigned long long int) arr_4 [i_1])) + ((~(max((((/* implicit */unsigned long long int) var_8)), (21ULL))))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */unsigned int) var_4);
}
