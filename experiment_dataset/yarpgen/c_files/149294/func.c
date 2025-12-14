/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149294
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149294 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149294
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
    var_19 = ((/* implicit */int) var_16);
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(min((8171091526107740260ULL), (var_17)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 504750284U)), (4999318056809807233ULL))))))) : (((/* implicit */int) var_10))));
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    arr_8 [i_1] = ((/* implicit */int) (~(0ULL)));
                    var_21 ^= ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (signed char)127)), (504750265U)));
                    var_22 += ((/* implicit */unsigned char) max(((-(arr_0 [16LL] [i_0 - 1]))), (arr_0 [i_0] [i_0 - 1])));
                    arr_9 [i_0 - 1] [(_Bool)1] [i_2] = max((((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)102))))), ((~(arr_0 [i_0 - 1] [i_0]))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) var_17)) || (((/* implicit */_Bool) max((((/* implicit */long long int) 3790217011U)), (var_13)))))))));
}
