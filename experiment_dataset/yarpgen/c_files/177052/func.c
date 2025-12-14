/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177052
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177052 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177052
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
    for (signed char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 7; i_1 += 1) 
        {
            {
                arr_4 [i_0] = ((/* implicit */unsigned char) ((_Bool) min(((unsigned short)0), ((unsigned short)0))));
                var_20 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [4ULL])) ? (max((arr_3 [(unsigned char)2]), (arr_3 [4U]))) : ((-(arr_3 [(unsigned char)6])))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned long long int i_2 = 1; i_2 < 6; i_2 += 4) 
    {
        var_21 = ((/* implicit */unsigned char) arr_0 [2U]);
        arr_7 [i_2] [i_2 + 3] = ((/* implicit */unsigned int) (~(((unsigned long long int) arr_6 [i_2 + 3] [i_2]))));
        var_22 ^= ((/* implicit */signed char) (unsigned short)0);
    }
}
