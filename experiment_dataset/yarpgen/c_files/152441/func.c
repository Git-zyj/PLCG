/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152441
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152441 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152441
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
    var_16 = ((/* implicit */_Bool) (+(((/* implicit */int) var_12))));
    var_17 = ((/* implicit */unsigned int) (~(var_13)));
    /* LoopSeq 1 */
    for (long long int i_0 = 2; i_0 < 15; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 1; i_1 < 12; i_1 += 3) 
        {
            arr_6 [i_1] [(unsigned char)10] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1]))) & (var_6)))) ? (((((((-1) + (2147483647))) << (((4294967286U) - (4294967286U))))) << ((((+(((/* implicit */int) arr_2 [i_0])))) - (153))))) : ((((~(((/* implicit */int) var_10)))) / ((-(((/* implicit */int) arr_1 [i_0]))))))));
            var_18 = ((/* implicit */unsigned int) arr_1 [i_1 - 1]);
        }
        var_19 = ((/* implicit */long long int) max((((((/* implicit */int) arr_1 [i_0 + 1])) & (((/* implicit */int) var_0)))), (((((/* implicit */_Bool) max((var_1), (((/* implicit */long long int) -1967928685))))) ? (-1967928685) : (((/* implicit */int) (signed char)-107))))));
        arr_7 [i_0 + 1] [i_0 - 1] &= ((unsigned char) ((((/* implicit */_Bool) max((2080374784U), (((/* implicit */unsigned int) (unsigned char)150))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_1 [i_0 - 2]))));
    }
}
