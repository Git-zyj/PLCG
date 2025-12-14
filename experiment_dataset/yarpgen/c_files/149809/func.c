/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149809
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149809 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149809
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
    var_16 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) min((10666090953460788044ULL), (((/* implicit */unsigned long long int) var_13)))))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-95))) : (min((((/* implicit */unsigned long long int) var_9)), (7780653120248763573ULL))))) : (min((10666090953460788052ULL), (10666090953460788044ULL)))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (short i_2 = 1; i_2 < 12; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_2] = min((((((/* implicit */_Bool) (unsigned char)124)) ? (((/* implicit */unsigned long long int) arr_5 [i_2 + 1] [(unsigned short)4] [i_2 + 1])) : (7780653120248763571ULL))), (((/* implicit */unsigned long long int) max((arr_3 [i_2 + 1] [i_2 - 1]), (arr_3 [i_2 - 1] [i_2 - 1])))));
                    var_17 = ((/* implicit */signed char) max(((+(arr_6 [i_2 + 1] [i_2 + 1] [i_2 - 1]))), (((/* implicit */long long int) ((short) arr_6 [i_2 + 1] [i_2 + 1] [i_2 - 1])))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) var_12);
}
