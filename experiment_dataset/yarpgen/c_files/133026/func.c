/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133026
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
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_1] = ((/* implicit */unsigned char) var_7);
                arr_5 [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) arr_2 [i_1]);
                arr_6 [i_0] [(unsigned short)9] [i_1] = ((((/* implicit */_Bool) arr_0 [(unsigned char)9] [(unsigned char)9])) ? (((/* implicit */unsigned long long int) 134152192U)) : (((((((/* implicit */_Bool) 3604574988U)) ? (((/* implicit */unsigned long long int) 3604574988U)) : (arr_2 [i_0]))) + (((/* implicit */unsigned long long int) arr_0 [i_1] [i_0])))));
            }
        } 
    } 
    var_11 = ((/* implicit */_Bool) ((signed char) var_10));
    var_12 = ((/* implicit */short) min((((((/* implicit */_Bool) -6679766872388364278LL)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))), (((/* implicit */int) ((((/* implicit */_Bool) 3604574988U)) || (((/* implicit */_Bool) var_4)))))));
}
