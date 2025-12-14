/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113086
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113086 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113086
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
    var_18 -= ((/* implicit */unsigned long long int) var_1);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                arr_4 [i_1] [(unsigned short)3] = ((/* implicit */unsigned long long int) arr_1 [(_Bool)1]);
                arr_5 [i_0] [i_1] = ((/* implicit */signed char) min((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)15123))) / (1071387836514756462ULL))), (arr_3 [i_1] [i_0])));
                var_19 += ((/* implicit */short) arr_3 [(signed char)6] [i_1]);
                arr_6 [i_0] [6U] |= ((/* implicit */int) ((unsigned long long int) min((((/* implicit */unsigned long long int) var_5)), (arr_2 [i_1] [i_0]))));
            }
        } 
    } 
}
