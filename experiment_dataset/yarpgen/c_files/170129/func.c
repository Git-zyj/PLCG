/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170129
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170129 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170129
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
    var_17 = ((/* implicit */unsigned int) max((var_17), (((unsigned int) var_16))));
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 14; i_0 += 2) 
    {
        for (short i_1 = 2; i_1 < 13; i_1 += 2) 
        {
            {
                arr_5 [i_0 - 2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((18446744073709551600ULL), (((/* implicit */unsigned long long int) 1648957347U))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-15672)) ? (arr_4 [i_1]) : (arr_4 [i_0]))))))) : (((/* implicit */int) ((unsigned short) 7854858260332147852ULL)))));
                var_18 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) 10591885813377403763ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-15672))) : (10591885813377403763ULL))), (((/* implicit */unsigned long long int) var_2))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-32758)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32757))) : (17776799960475520108ULL)));
}
