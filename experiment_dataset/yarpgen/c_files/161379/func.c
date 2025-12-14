/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161379
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161379 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161379
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
    var_13 = var_1;
    /* LoopNest 3 */
    for (long long int i_0 = 2; i_0 < 17; i_0 += 3) 
    {
        for (short i_1 = 3; i_1 < 16; i_1 += 3) 
        {
            for (unsigned short i_2 = 4; i_2 < 16; i_2 += 4) 
            {
                {
                    var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) min((((unsigned char) ((((/* implicit */_Bool) (unsigned short)10874)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [(unsigned short)14] [i_2]))) : (3895494093U)))), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 3895494091U)) ? (arr_6 [i_0 + 1] [i_1 - 1] [17ULL]) : ((-9223372036854775807LL - 1LL)))))))))))));
                    arr_8 [(unsigned short)1] [i_1] [i_1] [i_0] = ((unsigned int) (unsigned char)122);
                    arr_9 [i_0] [0LL] [i_1] = ((/* implicit */unsigned int) 9223372036854775807LL);
                }
            } 
        } 
    } 
}
