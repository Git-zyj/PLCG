/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141908
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141908 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141908
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
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (int i_1 = 3; i_1 < 21; i_1 += 4) 
        {
            for (long long int i_2 = 2; i_2 < 20; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((short) (_Bool)0)))) + (arr_2 [i_2 - 1]))));
                    arr_7 [i_0] [(unsigned short)16] [i_2 + 1] = ((/* implicit */unsigned char) min((((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)95))))) - (arr_1 [i_2 + 3]))), (((arr_5 [(unsigned short)4] [i_1 - 3] [i_1 - 2]) << (((arr_5 [i_1 - 1] [i_1] [i_1 - 3]) - (631492182)))))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned long long int) var_12);
}
