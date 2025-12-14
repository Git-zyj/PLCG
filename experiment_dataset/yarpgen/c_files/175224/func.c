/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175224
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175224 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175224
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
    for (long long int i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned int) max((((unsigned long long int) max((-8952846559066084645LL), (((/* implicit */long long int) arr_3 [i_0 + 2] [i_0 + 2]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_3 [i_0 + 4] [i_0 - 1])) : (((((/* implicit */_Bool) -1098942433)) ? (arr_4 [i_0 + 1] [i_0] [i_0]) : (((/* implicit */int) arr_2 [i_0])))))))));
                arr_6 [i_1] [i_1] = max(((~(((/* implicit */int) var_10)))), ((+(((/* implicit */int) ((unsigned char) var_3))))));
                var_11 ^= (~(arr_4 [i_0] [i_1] [i_1]));
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) -1098942419)) ? (max((1098942432), (-1098942408))) : (-1098942404)))), ((~(max((var_2), (((/* implicit */unsigned int) (unsigned char)255))))))));
}
