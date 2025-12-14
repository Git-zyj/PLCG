/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157146
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157146 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157146
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
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_13 = ((/* implicit */short) var_9);
        var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) (-(((/* implicit */int) (short)5620)))))));
    }
    for (unsigned short i_1 = 1; i_1 < 9; i_1 += 4) 
    {
        arr_4 [(signed char)10] = ((/* implicit */unsigned int) max((((/* implicit */int) var_12)), (min((arr_2 [i_1 + 2]), (((/* implicit */int) (unsigned short)15430))))));
        var_15 = ((/* implicit */int) (short)4095);
        /* LoopSeq 1 */
        for (int i_2 = 4; i_2 < 11; i_2 += 2) 
        {
            var_16 = ((/* implicit */unsigned int) var_11);
            var_17 = ((/* implicit */long long int) (-((~(arr_2 [i_2 - 4])))));
        }
    }
    /* vectorizable */
    for (signed char i_3 = 0; i_3 < 12; i_3 += 4) 
    {
        var_18 = ((/* implicit */unsigned long long int) var_3);
        arr_12 [0LL] [0LL] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_9 [(signed char)10] [0])))) ? (var_0) : (((/* implicit */long long int) arr_6 [i_3] [i_3]))));
        arr_13 [i_3] [i_3] = ((/* implicit */unsigned short) (short)-1);
    }
    var_19 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_11)))))))));
}
