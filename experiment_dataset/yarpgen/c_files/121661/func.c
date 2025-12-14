/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121661
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121661 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121661
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
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (signed char i_1 = 3; i_1 < 11; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (((var_11) * (((arr_1 [i_0] [i_1]) / (var_11))))) : (((/* implicit */unsigned int) (~(min((((/* implicit */int) arr_3 [i_0] [i_0])), (arr_0 [i_0]))))))));
                arr_7 [i_1 + 3] [i_1 + 3] [i_0] = ((/* implicit */int) var_6);
            }
        } 
    } 
    /* LoopSeq 1 */
    for (long long int i_2 = 2; i_2 < 6; i_2 += 4) 
    {
        arr_11 [7LL] = ((/* implicit */unsigned long long int) min((arr_0 [i_2]), (((/* implicit */int) arr_6 [i_2] [i_2] [i_2]))));
        var_21 = ((/* implicit */signed char) (~(arr_5 [(unsigned char)3] [i_2])));
        var_22 = ((/* implicit */signed char) min((((/* implicit */unsigned int) (unsigned short)36600)), ((+(min((((/* implicit */unsigned int) var_7)), (arr_5 [i_2] [i_2])))))));
    }
}
