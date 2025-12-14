/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110570
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110570 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110570
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
    var_18 = ((/* implicit */short) (unsigned char)239);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                arr_7 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */int) max((arr_1 [i_0] [i_0]), (arr_1 [6ULL] [i_1])))) & (((/* implicit */int) arr_1 [i_0] [i_1]))))) - (max((((/* implicit */unsigned long long int) (unsigned short)5699)), (18446744073709551592ULL)))));
                arr_8 [i_0] [i_0] [i_1] = ((/* implicit */unsigned char) min((((/* implicit */unsigned short) arr_6 [(unsigned short)18])), (((unsigned short) (unsigned char)255))));
                arr_9 [i_0] [i_0] = ((/* implicit */unsigned long long int) (-((+(((/* implicit */int) (signed char)-113))))));
            }
        } 
    } 
    var_19 &= ((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) ((unsigned short) (unsigned char)103))) : (((var_9) / (((/* implicit */int) (signed char)88)))))));
}
