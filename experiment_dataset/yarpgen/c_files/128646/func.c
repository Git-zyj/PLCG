/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128646
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128646 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128646
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
    for (int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (int i_1 = 4; i_1 < 13; i_1 += 2) 
        {
            {
                arr_5 [i_0] [(unsigned short)10] [i_1] = ((/* implicit */signed char) ((((3966338541U) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)48))))) ? (((/* implicit */int) min((((/* implicit */short) (unsigned char)3)), ((short)-5862)))) : (((((((/* implicit */int) var_0)) + (2147483647))) << (((((/* implicit */int) (_Bool)1)) - (1)))))));
                var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 3756038106U)), (max((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)3))) | (2285784242231447373ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)5868)) >> (((((/* implicit */int) (unsigned char)220)) - (210)))))))))))));
                var_21 ^= ((/* implicit */unsigned short) ((var_16) == (((((/* implicit */_Bool) 2285784242231447373ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)10))) : (arr_0 [i_1 + 1] [i_1 - 2])))));
            }
        } 
    } 
    var_22 = ((/* implicit */int) (+(min((((/* implicit */long long int) var_5)), (((((/* implicit */_Bool) (unsigned char)245)) ? (5277443787342828202LL) : (-4018209598246235563LL)))))));
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 25; i_2 += 2) 
    {
        for (long long int i_3 = 2; i_3 < 23; i_3 += 2) 
        {
            for (long long int i_4 = 0; i_4 < 25; i_4 += 2) 
            {
                {
                    var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) var_0))));
                    var_24 ^= ((/* implicit */short) (-(((/* implicit */int) (short)26646))));
                }
            } 
        } 
    } 
}
