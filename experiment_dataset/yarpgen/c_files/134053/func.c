/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134053
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134053 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134053
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
    for (signed char i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        for (signed char i_1 = 4; i_1 < 9; i_1 += 3) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) var_6)) >> (((max((((/* implicit */unsigned int) (unsigned char)245)), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)47614))) : (3U))))) - (47607U)))));
                var_14 = (i_0 % 2 == 0) ? (((/* implicit */unsigned char) (((((+(((/* implicit */int) var_10)))) + (2147483647))) >> (((((/* implicit */int) arr_2 [i_1 - 2] [i_0] [i_1])) - (31801)))))) : (((/* implicit */unsigned char) (((((+(((/* implicit */int) var_10)))) + (2147483647))) >> (((((((/* implicit */int) arr_2 [i_1 - 2] [i_0] [i_1])) - (31801))) + (23616))))));
                var_15 = ((/* implicit */long long int) min((((/* implicit */unsigned short) ((((((/* implicit */_Bool) 1382429744U)) ? (-24114043) : (((/* implicit */int) (_Bool)1)))) < (arr_3 [i_0] [i_0] [i_1])))), (max((((/* implicit */unsigned short) var_7)), ((unsigned short)12356)))));
            }
        } 
    } 
    var_16 = ((/* implicit */int) var_5);
    var_17 = ((/* implicit */unsigned int) min((var_8), (((/* implicit */unsigned short) var_5))));
}
