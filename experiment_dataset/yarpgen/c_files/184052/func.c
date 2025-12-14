/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184052
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184052 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184052
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
    for (int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 20; i_1 += 3) 
        {
            {
                var_10 = ((/* implicit */short) min((var_10), (((/* implicit */short) max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_5 [i_0])), (max((4225427052U), (((/* implicit */unsigned int) var_8))))))), (max((((/* implicit */unsigned long long int) arr_4 [i_0])), (var_2))))))));
                arr_6 [i_0] [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_3 [(unsigned short)13] [i_0] [i_0]) & (((/* implicit */int) arr_4 [(unsigned short)5]))))) ? (((/* implicit */int) arr_2 [i_0] [i_1])) : (((/* implicit */int) max((arr_2 [i_0] [i_0]), (var_5))))))) ? (((/* implicit */int) arr_4 [8LL])) : (max((((/* implicit */int) ((unsigned char) arr_3 [i_0] [16ULL] [(unsigned char)8]))), (((((/* implicit */_Bool) arr_2 [(unsigned short)14] [(unsigned short)14])) ? (((/* implicit */int) arr_4 [(short)10])) : (((/* implicit */int) arr_0 [4LL]))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_2 = 2; i_2 < 9; i_2 += 1) 
    {
        for (unsigned char i_3 = 2; i_3 < 9; i_3 += 1) 
        {
            {
                arr_13 [i_2] = ((/* implicit */unsigned long long int) -758016547837890606LL);
                var_11 = ((/* implicit */unsigned char) max((((/* implicit */unsigned short) ((unsigned char) var_7))), (((unsigned short) ((((/* implicit */int) arr_11 [(unsigned short)5] [(unsigned short)5])) % (arr_5 [11U]))))));
            }
        } 
    } 
}
