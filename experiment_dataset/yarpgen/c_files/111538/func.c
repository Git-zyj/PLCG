/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111538
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
    var_19 = var_6;
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        arr_3 [i_0] &= ((((/* implicit */_Bool) 3183160975U)) ? (2938803278U) : (1335185474U));
        var_20 += ((/* implicit */unsigned char) ((((/* implicit */int) var_15)) < ((-(arr_1 [i_0])))));
        var_21 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (short)-30478)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned char)129)))), (((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : ((-(arr_2 [i_0] [i_0])))))));
    }
    /* LoopSeq 1 */
    for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 4) 
    {
        var_22 = ((/* implicit */int) max((var_22), (max((var_8), (((((/* implicit */_Bool) 1111806348U)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)31))))) : (((/* implicit */int) var_18))))))));
        arr_6 [i_1] &= min(((((-(((/* implicit */int) (unsigned char)195)))) % (((/* implicit */int) (short)-30836)))), ((+(((/* implicit */int) (unsigned char)252)))));
        arr_7 [(unsigned char)15] = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */int) arr_5 [(unsigned char)0] [i_1])) - (((/* implicit */int) arr_4 [i_1] [i_1])))));
        var_23 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)254)) ? (((/* implicit */int) (unsigned char)15)) : (((/* implicit */int) (unsigned char)240))));
        var_24 = ((/* implicit */unsigned char) arr_5 [i_1] [i_1]);
    }
}
