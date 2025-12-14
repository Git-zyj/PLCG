/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131653
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131653 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131653
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
    var_16 |= ((/* implicit */unsigned short) var_7);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (unsigned int i_1 = 2; i_1 < 21; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */_Bool) ((short) var_14));
                var_18 = ((((/* implicit */_Bool) max((((long long int) var_3)), (((/* implicit */long long int) arr_3 [i_1 - 2]))))) ? (max((((/* implicit */int) (!(((/* implicit */_Bool) (short)24583))))), (((((((/* implicit */int) arr_5 [i_0] [i_1] [i_1])) + (2147483647))) << (((((/* implicit */int) arr_2 [i_1])) - (234))))))) : (((((/* implicit */_Bool) arr_6 [i_1 - 2] [i_1] [i_1])) ? (((((/* implicit */_Bool) 13661782899448089810ULL)) ? (arr_1 [i_1]) : (((/* implicit */int) arr_6 [i_1] [i_1] [i_0])))) : (((((/* implicit */_Bool) 13661782899448089810ULL)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (unsigned char)255)))))));
            }
        } 
    } 
}
