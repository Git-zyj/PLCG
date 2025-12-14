/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148034
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148034 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148034
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
    /* LoopSeq 1 */
    for (long long int i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        var_12 = ((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned long long int) var_8))));
        var_13 ^= ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((int) arr_1 [i_0 - 1]))), ((+(arr_2 [i_0 + 4])))));
    }
    /* LoopNest 2 */
    for (unsigned short i_1 = 3; i_1 < 19; i_1 += 1) 
    {
        for (unsigned int i_2 = 3; i_2 < 18; i_2 += 4) 
        {
            {
                var_14 ^= ((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_2])) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1 + 1] [i_2])))));
                arr_8 [i_2] [i_2 + 2] = ((/* implicit */unsigned long long int) min((min((arr_4 [i_1]), (((/* implicit */unsigned int) arr_6 [i_1] [i_1] [i_2])))), (((((((/* implicit */_Bool) arr_4 [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) : (arr_3 [i_1]))) * (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [18U] [19U])))))));
            }
        } 
    } 
    var_15 ^= ((/* implicit */long long int) max((var_0), (((/* implicit */unsigned long long int) var_2))));
    var_16 = ((/* implicit */long long int) (-(((/* implicit */int) max((var_8), (((/* implicit */unsigned short) max((((/* implicit */short) var_5)), (var_2)))))))));
}
