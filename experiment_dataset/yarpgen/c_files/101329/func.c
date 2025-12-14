/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101329
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
    var_15 |= ((/* implicit */short) min((((/* implicit */unsigned int) var_11)), (((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) var_9)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_14))))) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_10)))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (short i_1 = 2; i_1 < 19; i_1 += 2) 
        {
            {
                arr_6 [i_0] |= ((/* implicit */unsigned short) max(((-(((/* implicit */int) var_14)))), (((/* implicit */int) ((((/* implicit */int) arr_0 [i_0] [i_1])) == (((/* implicit */int) (unsigned char)216)))))));
                var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) max((((max((18446744073709551615ULL), (((/* implicit */unsigned long long int) var_13)))) >> (((/* implicit */int) max((((/* implicit */unsigned char) var_1)), ((unsigned char)40)))))), (((/* implicit */unsigned long long int) (unsigned char)6)))))));
                arr_7 [i_0] = var_14;
                arr_8 [(unsigned short)0] [(unsigned short)0] = (_Bool)1;
            }
        } 
    } 
}
