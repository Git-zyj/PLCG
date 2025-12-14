/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186190
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186190 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186190
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
    for (unsigned int i_0 = 3; i_0 < 21; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 21; i_1 += 2) 
        {
            {
                var_19 += ((/* implicit */unsigned short) ((int) ((((/* implicit */int) var_18)) - (((/* implicit */int) arr_0 [i_0 - 3] [i_1])))));
                arr_6 [i_0] = ((/* implicit */unsigned char) min((((((/* implicit */unsigned long long int) ((unsigned int) (unsigned short)51792))) % (var_13))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_4)))))));
                arr_7 [i_0] = ((/* implicit */unsigned int) var_15);
                arr_8 [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_1 [i_0 + 1] [i_0]);
            }
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_2 = 0; i_2 < 10; i_2 += 4) 
    {
        var_20 &= ((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)60378))));
        arr_11 [i_2] &= ((/* implicit */_Bool) ((unsigned long long int) (signed char)-124));
        var_21 = arr_2 [i_2] [i_2];
    }
    for (signed char i_3 = 0; i_3 < 14; i_3 += 3) 
    {
        arr_14 [i_3] = ((/* implicit */unsigned short) 3670863139U);
        var_22 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) -8394272947317320163LL))));
        arr_15 [(unsigned short)2] &= ((/* implicit */signed char) min((((((/* implicit */_Bool) (unsigned short)57840)) ? (arr_12 [i_3]) : (((/* implicit */long long int) var_1)))), (((/* implicit */long long int) ((unsigned int) 16054532464520336240ULL)))));
    }
}
