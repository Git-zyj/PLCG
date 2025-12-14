/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152411
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152411 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152411
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
    var_14 = var_12;
    var_15 = ((/* implicit */short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)41076))) & (4278083477611307619ULL))) % (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)111)))));
    var_16 = ((/* implicit */signed char) (!(((/* implicit */_Bool) 4278083477611307627ULL))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */unsigned int) (-(min((((/* implicit */int) arr_0 [i_0])), (arr_6 [i_0])))));
                var_18 &= ((/* implicit */short) 7721637550917651633LL);
                arr_7 [i_0] = ((/* implicit */unsigned char) (~(arr_4 [i_1] [i_0])));
            }
        } 
    } 
    var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) var_3))));
}
